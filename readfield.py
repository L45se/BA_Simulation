#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Nov 16 17:59:17 2020

@author: davide
"""

import numpy as np
from numpy import pi
import matplotlib.pyplot as plt
%matplotlib qt5

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


# Load data    
dns, mesh, field = load_field('Dati.cart.2.out')
dns, mesh, ffield = load_field('Force.cart.2.out')

# Plot velocity field 
plt.figure()
vC = ['u', 'v', 'w']
iC = 1
plt.pcolormesh(mesh["z"],mesh["y"],field[iC,0,:,:].transpose())
plt.title('Velocity component '+vC[iC]+' at a cross-section')
plt.colorbar()
plt.xlabel('z/Lz')
plt.ylabel('y/Lz')
plt.show()

# Plot force field 
plt.figure()
vC = ['fx', 'fy', 'fz']
iC = 2
plt.pcolormesh(mesh["z"],mesh["y"],field[iC,0,:,:].transpose())
plt.title('Force component '+vC[iC]+' at a cross-section')
plt.colorbar()
plt.xlabel('z/Lz')
plt.ylabel('y/Lz')
plt.show()