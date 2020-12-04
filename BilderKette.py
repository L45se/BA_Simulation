#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Nov 19 12:11:08 2020

@author: lasse
"""
import numpy as np
from numpy import pi
import matplotlib.pyplot as plt
%matplotlib inline
plt.ioff()

def fftfit(x):
  while not x & 1:
    x = x >> 1
  return (x==1 or x==3)

def load_field(filename):
    fileHandler = open(filename,"rb")
    # Read fiel size from file
    dns = {
    "nx" : np.fromfile(fileHandler,dtype=np.int32,count=1)[0],
    "ny" : np.fromfile(fileHandler,dtype=np.int32,count=1)[0],
    "nz" : np.fromfile(fileHandler,dtype=np.int32,count=1)[0],
    "alfa0" : np.fromfile(fileHandler,dtype=np.double,count=1)[0],
    "beta0" : np.fromfile(fileHandler,dtype=np.double,count=1)[0],
    "ni" : np.fromfile(fileHandler,dtype=np.double,count=1)[0],
    "a" :  np.fromfile(fileHandler,dtype=np.double,count=1)[0],
    "ymin" : np.fromfile(fileHandler,dtype=np.double,count=1)[0],
    "ymax" : np.fromfile(fileHandler,dtype=np.double,count=1)[0],
    "time" : np.fromfile(fileHandler,dtype=np.double,count=1)[0],
    }
    dns["nzd"]=3*dns["nz"]-1;
    while not fftfit(dns["nzd"]): dns["nzd"] += 1
    # Define grid
    mesh ={ 
    "y" : dns["ymin"] + (dns["ymax"]-dns["ymin"])*(np.tanh(dns["a"]*(np.arange(-1,dns["ny"]+2)/dns["ny"]-1))/np.tanh(dns["a"])+1),
    "z" : np.arange(dns["nzd"])/dns["nzd"]*(2*pi/dns["beta0"]),
    }
    # Read field in Fourier 
    field = np.zeros([3,2*dns["nx"]+1,dns["nzd"],dns["ny"]+3],dtype=np.complex128)
    tmp = np.fromfile(fileHandler,dtype=np.complex128,count=((dns["nx"]+1)*(2*dns["nz"]+1)*(dns["ny"]+3)*3)).reshape([3,dns["nx"]+1,2*dns["nz"]+1,dns["ny"]+3])
    field[:,0:dns["nx"],0:dns["nz"]+1,:] = tmp[:,0:dns["nx"],dns["nz"]:,:]
    field[:,0:dns["nx"],dns["nzd"]-dns["nz"]:dns["nzd"],:] = tmp[:,0:dns["nx"],0:dns["nz"],:]
    del tmp
    # Backward Fourier transform in z direction
    field = np.fft.ifft(field, n=None, axis=2, norm=None)
    # Use Hermitian symmetry
    field[:,dns["nx"]+1:,:,:] = np.conj(field[:,dns["nx"]+1:1:-1,:,:])
    # Backward Fourier transform in x direction
    field = np.fft.ifft(field, n=None, axis=1, norm=None); field=np.real(field);
    # Check the result is real
    #print(np.max(np.abs(np.imag(field))))
    return dns,mesh,field

def sicherePlots(d):
    # Load data    
    dns, mesh, field = load_field('Dati.cart.'+str(d)+'.out')
    dns, mesh, ffield = load_field('Force.cart.'+str(d)+'.out')
    
    limit = 49
    m = mesh["y"][0:limit]
    
    _=plt.figure()
    vC = ['u', 'v', 'w']
    iC = 1
    _=plt.pcolormesh(mesh["z"],m,field[iC,0,:,:limit].transpose())
    _=plt.title('Velocity component '+vC[iC]+' at a cross-section'+" Time: "+str(d*0.0025))
    _=plt.colorbar()
    _=plt.xlabel('z/Lz')
    _=plt.ylabel('y/Lz')
    if d < 10:    
        _=plt.savefig('Plots/VelocityBildZeit0'+str(d)+'.png')
    else:
        _=plt.savefig('Plots/VelocityBildZeit'+str(d)+'.png')
    plt.close(_)
    
    _=plt.figure()
    vC = ['fx', 'fy', 'fz']
    iC = 2
    _=plt.pcolormesh(mesh["z"],m,ffield[iC,0,:,:limit].transpose())
    _=plt.title('Force component '+vC[iC]+' at a cross-section'+" Time: "+str(d*0.0025))
    _=plt.colorbar()
    _=plt.xlabel('z/Lz')
    _=plt.ylabel('y/Lz')
    if d < 10:    
        _=plt.savefig('Plots/ForceBildZeit0'+str(d)+'.png')
    else:
        _=plt.savefig('Plots/ForceBildZeit'+str(d)+'.png')
    plt.close(_)
    
for i in range(1,33):
    sicherePlots(i)