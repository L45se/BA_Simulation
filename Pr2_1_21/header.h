! ==============================================
! C preprocessor defines
! ==============================================
! Force (nxd,nzd) to be at most the product of a
! power of 2 and a single factor 3
#define useFFTfit
! half or full channel
#define halfchannel
! Add a bodyforce 
#define bodyforce
! define a bodyforce in space (ibm)
!#define ibm
! Measure per timestep execution time
#define chron
! Distrubute processes among processor so that
! the y-dierction is contiguous 
#define ycontiguous
! Compute convection velocity
! #define convvel
! Verbose echo of parallel parameters
#define mpiverbose


! ==============================================
! Define dependencies
! ==============================================
#if defined (ibm) && ! defined (bodyforce)
#define bodyforce
#endif
