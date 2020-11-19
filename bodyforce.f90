!============================================!
!                                            !
!        Definition of the body force	     ! 
!                                            !
!============================================!
!
! Author: Dr.-Ing. Davide Gatti
! Date  : 25.9.2020
! 

! The code below will be INCLUDEd in the subroutine buildRHS of
! dnsdata.f90. The array of the bodyforce has size
! 
! rFdx[1:2*(nxd+1),1:nzB,1:3,1]
! 
! The first index (ix) represents a position along the x-coordinate, namely
! 
! x = (ix-1)*(2*PI/alfa0)/(2*nxd) where (2*PI/alfa0)=Lx is the length of the
!                                                       domain in x-direction
! 
! The second index (iz) represents a position along the z-coordinate, namely
! 
! z = (iz+nz0-1)*(2*PI/beta0)/(nzd) where (2*PI/beta0)=Lz is the length of the
!                                                      domain in z-direction
! 
! The third intex (iV) represents the component of the forcing in the x- (1), 
! y- (2) or z- (3) direction
! 
! The fourth index is a dummy index required for some weird reasons not important
! here, it is always 1. 
! 
! The current wall-normal coordinate is defined outside of this piece of code. Its
! index is indicated by 
! 
! iy 
! 
! and the current y-coordinate can be obtained by 
! 
! y(iy)

! The following piece of code will be executed within the following loop:
!  
! DO CONCURRENT (ix=1:2*nxd, iz=1:nzB)

! -----------------------------------------------------------------------------

! Define coordinates (y is already defined)
! ------------------
xx = (ix-1)*(2*PI/alfa0)/(2*nxd)
yy = ABS(y(iy))
zz = ((iz+nz0-1)*(2*PI/beta0)/nzd)

! Define force (never assign, always increment the force)
! ------------------

phase_force = time * nu_frequenz - aint(time * nu_frequenz)



!rFdx(ix,iz,3,1) = rFdx(ix,iz,3,1) +ABS(zz-0.5)*yy
!IF (has_terminal) WRITE(*,*) ix,iz,iy,zz,rFdx(ix,iz,3,1)

if(phase_force < 0.5)then
rFdx(ix,iz,3,1) = rFdx(ix,iz,3,1) + c_force*((a1_force*(zz/(2*PI/beta0))+a2_force*(zz/(2*PI/beta0))**2)*exp(-a0_force*(zz/(2*PI/beta0))**alpha_force)*(b1_force*(yy/(2*PI/beta0))+b2_force*(yy/(2*PI/beta0))**2)*exp(-b0_force*(yy/(2*PI/beta0))**beta_force))



else
rFdx(ix,iz,3,1) = rFdx(ix,iz,3,1) + c_force*((a1_force*(1-zz/(2*PI/beta0))+a2_force*(1-zz/(2*PI/beta0))**2)*exp(-a0_force*(1-zz/(2*PI/beta0))**alpha_force)*(b1_force*(yy/(2*PI/beta0))+b2_force*(yy/(2*PI/beta0))**2)*exp(-b0_force*(yy/(2*PI/beta0))**beta_force))



end if



