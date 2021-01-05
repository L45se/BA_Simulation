.NOTPARALLEL: 

####
F90 = mpif90
LIB = /net/istmbellatrix/users/hi180/fftw-3.3.8/lib
INC = /net/istmbellatrix/users/hi180/fftw-3.3.8/include

# INTEL (uncomment following line for INTEL compiler)
# FLAGS = -cpp -Ofast -no-wrap-margin
#FLAGS = -cpp -O0 -g -check all -fpe0 -warn -traceback -debug extended
# GCC (uncomment following line for GCC compiler) 
FLAGS = -cpp -Ofast -malign-double -fall-intrinsics -ffree-line-length-none 
#### 

OBJ = typedef.o rbmat.o mpi_transpose.o ffts.o dnsdata.o
flags = -I$(INC) -L$(LIB) $(FLAGS)
libs = -lfftw3

channel: $(OBJ) channel.o
	$(F90) $(flags) -o  $@ $(OBJ) channel.o $(libs)
%.o : %.f90
	$(F90) $(flags) -c  $<
clean: 
	rm *.mod *.o

split: $(OBJ) split.o 
	$(F90) $(flags) -o $@ $(OBJ) split.o $(libs)
