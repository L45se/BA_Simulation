/**/

#define _GNU_SOURCE
#define _FILE_OFFSET_BITS 64
#define _LARGE_FILES
#define printERR fprintf(stderr,"\r%s: PROGRAM HALTED  \n",errormessage);fflush(stderr)




#include <unistd.h>

#include <stdlib.h>
/*** typedef _Complex float __cfloat128 __attribute__ ((__mode__ (__TC__))); ununderstood ***/
/*** typedef __float128 _Float128; ununderstood ***/
/*** extern _Float128 strtof128 (const char * __nptr,
			 char ** __endptr) ununderstood ***/
/*** extern _Float128 strtof128_l (const char * __nptr,
			 char ** __endptr,
			 locale_t __loc) ununderstood ***/
/*** extern rtype gnu_dev_name proto  ;(unsigned int, major, (__dev_t __dev)) ununderstood ***/
/*** extern rtype gnu_dev_name proto  ;(unsigned int, minor, (__dev_t __dev)) ununderstood ***/
/*** extern rtype gnu_dev_name proto  ;(__dev_t, makedev, (unsigned int __major, unsigned int __minor)) ununderstood ***/

#include <stdio.h>

#include <fcntl.h>

#include <math.h>
/*** enum ununderstood ***/
/*** {
 FP_INT_UPWARD =
0,
 FP_INT_DOWNWARD =
1,
 FP_INT_TOWARDZERO =
2,
 FP_INT_TONEARESTFROMZERO =
3,
 FP_INT_TONEAREST =
4,
 }; ununderstood ***/
/*** __DECL_SIMD_ cos     extern double  cos      (double __x) ;  extern double  __cos      (double __x) ; ununderstood ***/
/*** __DECL_SIMD_ sin     extern double  sin      (double __x) ;  extern double  __sin      (double __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincos    extern void   sincos    ununderstood ***/
/*** (double __x, double *__sinx, double *__cosx) ;  extern void  __ sincos    ununderstood ***/
/*** (double __x, double *__sinx, double *__cosx) ; ununderstood ***/
/*** __DECL_SIMD_ exp     extern double  exp      (double __x) ;  extern double  __exp      (double __x) ; ununderstood ***/
/*** __DECL_SIMD_ log     extern double  log      (double __x) ;  extern double  __log      (double __x) ; ununderstood ***/
/*** __DECL_SIMD_ pow     extern double  pow      (double __x, double __y) ;  extern double  __pow      (double __x, double __y) ; ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** __DECL_SIMD_ cosf     extern float  cosf      (float __x) ;  extern float  __cosf      (float __x) ; ununderstood ***/
/*** __DECL_SIMD_ sinf     extern float  sinf      (float __x) ;  extern float  __sinf      (float __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincosf    extern void   sincosf    ununderstood ***/
/*** (float __x, float *__sinx, float *__cosx) ;  extern void  __ sincosf    ununderstood ***/
/*** (float __x, float *__sinx, float *__cosx) ; ununderstood ***/
/*** __DECL_SIMD_ expf     extern float  expf      (float __x) ;  extern float  __expf      (float __x) ; ununderstood ***/
/*** __DECL_SIMD_ logf     extern float  logf      (float __x) ;  extern float  __logf      (float __x) ; ununderstood ***/
/*** __DECL_SIMD_ powf     extern float  powf      (float __x, float __y) ;  extern float  __powf      (float __x, float __y) ; ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** __DECL_SIMD_ cosl     extern long double  cosl      (long double __x) ;  extern long double  __cosl      (long double __x) ; ununderstood ***/
/*** __DECL_SIMD_ sinl     extern long double  sinl      (long double __x) ;  extern long double  __sinl      (long double __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincosl    extern void   sincosl    ununderstood ***/
/*** (long double __x, long double *__sinx, long double *__cosx) ;  extern void  __ sincosl    ununderstood ***/
/*** (long double __x, long double *__sinx, long double *__cosx) ; ununderstood ***/
/*** __DECL_SIMD_ expl     extern long double  expl      (long double __x) ;  extern long double  __expl      (long double __x) ; ununderstood ***/
/*** __DECL_SIMD_ logl     extern long double  logl      (long double __x) ;  extern long double  __logl      (long double __x) ; ununderstood ***/
/*** __DECL_SIMD_ powl     extern long double  powl      (long double __x, long double __y) ;  extern long double  __powl      (long double __x, long double __y) ; ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** __DECL_SIMD_ cosf32     extern _Float32  cosf32      (_Float32 __x) ;  extern _Float32  __cosf32      (_Float32 __x) ; ununderstood ***/
/*** __DECL_SIMD_ sinf32     extern _Float32  sinf32      (_Float32 __x) ;  extern _Float32  __sinf32      (_Float32 __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincosf32    extern void   sincosf32    ununderstood ***/
/*** (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) ;  extern void  __ sincosf32    ununderstood ***/
/*** (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) ; ununderstood ***/
/*** __DECL_SIMD_ expf32     extern _Float32  expf32      (_Float32 __x) ;  extern _Float32  __expf32      (_Float32 __x) ; ununderstood ***/
/*** __DECL_SIMD_ logf32     extern _Float32  logf32      (_Float32 __x) ;  extern _Float32  __logf32      (_Float32 __x) ; ununderstood ***/
/*** __DECL_SIMD_ powf32     extern _Float32  powf32      (_Float32 __x, _Float32 __y) ;  extern _Float32  __powf32      (_Float32 __x, _Float32 __y) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** __DECL_SIMD_ cosf64     extern _Float64  cosf64      (_Float64 __x) ;  extern _Float64  __cosf64      (_Float64 __x) ; ununderstood ***/
/*** __DECL_SIMD_ sinf64     extern _Float64  sinf64      (_Float64 __x) ;  extern _Float64  __sinf64      (_Float64 __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincosf64    extern void   sincosf64    ununderstood ***/
/*** (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) ;  extern void  __ sincosf64    ununderstood ***/
/*** (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) ; ununderstood ***/
/*** __DECL_SIMD_ expf64     extern _Float64  expf64      (_Float64 __x) ;  extern _Float64  __expf64      (_Float64 __x) ; ununderstood ***/
/*** __DECL_SIMD_ logf64     extern _Float64  logf64      (_Float64 __x) ;  extern _Float64  __logf64      (_Float64 __x) ; ununderstood ***/
/*** __DECL_SIMD_ powf64     extern _Float64  powf64      (_Float64 __x, _Float64 __y) ;  extern _Float64  __powf64      (_Float64 __x, _Float64 __y) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** extern _Float128  acosf128    (_Float128 __x) ;  extern _Float128  __acosf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  asinf128    (_Float128 __x) ;  extern _Float128  __asinf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  atanf128    (_Float128 __x) ;  extern _Float128  __atanf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  atan2f128    (_Float128 __y, _Float128 __x) ;  extern _Float128  __atan2f128    (_Float128 __y, _Float128 __x) ; ununderstood ***/
/*** __DECL_SIMD_ cosf128     extern _Float128  cosf128      (_Float128 __x) ;  extern _Float128  __cosf128      (_Float128 __x) ; ununderstood ***/
/*** __DECL_SIMD_ sinf128     extern _Float128  sinf128      (_Float128 __x) ;  extern _Float128  __sinf128      (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  tanf128    (_Float128 __x) ;  extern _Float128  __tanf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  coshf128    (_Float128 __x) ;  extern _Float128  __coshf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  sinhf128    (_Float128 __x) ;  extern _Float128  __sinhf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  tanhf128    (_Float128 __x) ;  extern _Float128  __tanhf128    (_Float128 __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincosf128    extern void   sincosf128    ununderstood ***/
/*** (_Float128 __x, _Float128 *__sinx, _Float128 *__cosx) ;  extern void  __ sincosf128    ununderstood ***/
/*** (_Float128 __x, _Float128 *__sinx, _Float128 *__cosx) ; ununderstood ***/
/*** extern _Float128  acoshf128    (_Float128 __x) ;  extern _Float128  __acoshf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  asinhf128    (_Float128 __x) ;  extern _Float128  __asinhf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  atanhf128    (_Float128 __x) ;  extern _Float128  __atanhf128    (_Float128 __x) ; ununderstood ***/
/*** __DECL_SIMD_ expf128     extern _Float128  expf128      (_Float128 __x) ;  extern _Float128  __expf128      (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  frexpf128    (_Float128 __x, int *__exponent) ;  extern _Float128  __frexpf128    (_Float128 __x, int *__exponent) ; ununderstood ***/
/*** extern _Float128  ldexpf128    (_Float128 __x, int __exponent) ;  extern _Float128  __ldexpf128    (_Float128 __x, int __exponent) ; ununderstood ***/
/*** __DECL_SIMD_ logf128     extern _Float128  logf128      (_Float128 __x) ;  extern _Float128  __logf128      (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  log10f128    (_Float128 __x) ;  extern _Float128  __log10f128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  modff128    (_Float128 __x, _Float128 *__iptr) ;  extern _Float128  __modff128    (_Float128 __x, _Float128 *__iptr)  ; ununderstood ***/
/*** extern _Float128  exp10f128    (_Float128 __x) ;  extern _Float128  __exp10f128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  expm1f128    (_Float128 __x) ;  extern _Float128  __expm1f128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  log1pf128    (_Float128 __x) ;  extern _Float128  __log1pf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  logbf128    (_Float128 __x) ;  extern _Float128  __logbf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  exp2f128    (_Float128 __x) ;  extern _Float128  __exp2f128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  log2f128    (_Float128 __x) ;  extern _Float128  __log2f128    (_Float128 __x) ; ununderstood ***/
/*** __DECL_SIMD_ powf128     extern _Float128  powf128      (_Float128 __x, _Float128 __y) ;  extern _Float128  __powf128      (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128  sqrtf128    (_Float128 __x) ;  extern _Float128  __sqrtf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  hypotf128    (_Float128 __x, _Float128 __y) ;  extern _Float128  __hypotf128    (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128  cbrtf128    (_Float128 __x) ;  extern _Float128  __cbrtf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  ceilf128    (_Float128 __x)  __attribute__ (  (__const__));  extern _Float128  __ceilf128    (_Float128 __x)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  fabsf128    (_Float128 __x)  __attribute__ (  (__const__));  extern _Float128  __fabsf128    (_Float128 __x)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  floorf128    (_Float128 __x)  __attribute__ (  (__const__));  extern _Float128  __floorf128    (_Float128 __x)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  fmodf128    (_Float128 __x, _Float128 __y) ;  extern _Float128  __fmodf128    (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** extern _Float128  copysignf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__));  extern _Float128  __copysignf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  nanf128    (const char *__tagb)  __attribute__ (  (__const__));  extern _Float128  __nanf128    (const char *__tagb)  __attribute__ (  (__const__)); ununderstood ***/
/*** && !1 ununderstood ***/
/*** extern _Float128  j0f128    (_Float128) ;  extern _Float128  __j0f128    (_Float128) ; ununderstood ***/
/*** extern _Float128  j1f128    (_Float128) ;  extern _Float128  __j1f128    (_Float128) ; ununderstood ***/
/*** extern _Float128  jnf128    (int, _Float128) ;  extern _Float128  __jnf128    (int, _Float128) ; ununderstood ***/
/*** extern _Float128  y0f128    (_Float128) ;  extern _Float128  __y0f128    (_Float128) ; ununderstood ***/
/*** extern _Float128  y1f128    (_Float128) ;  extern _Float128  __y1f128    (_Float128) ; ununderstood ***/
/*** extern _Float128  ynf128    (int, _Float128) ;  extern _Float128  __ynf128    (int, _Float128) ; ununderstood ***/
/*** extern _Float128  erff128    (_Float128) ;  extern _Float128  __erff128    (_Float128) ; ununderstood ***/
/*** extern _Float128  erfcf128    (_Float128) ;  extern _Float128  __erfcf128    (_Float128) ; ununderstood ***/
/*** extern _Float128  lgammaf128    (_Float128) ;  extern _Float128  __lgammaf128    (_Float128) ; ununderstood ***/
/*** extern _Float128  tgammaf128    (_Float128) ;  extern _Float128  __tgammaf128    (_Float128) ; ununderstood ***/
/*** extern _Float128  lgammaf128_r    (_Float128, int *__signgamp) ;  extern _Float128  __lgammaf128_r    (_Float128, int *__signgamp) ; ununderstood ***/
/*** extern _Float128  rintf128    (_Float128 __x) ;  extern _Float128  __rintf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  nextafterf128    (_Float128 __x, _Float128 __y) ;  extern _Float128  __nextafterf128    (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128  nextdownf128    (_Float128 __x) ;  extern _Float128  __nextdownf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  nextupf128    (_Float128 __x) ;  extern _Float128  __nextupf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  remainderf128    (_Float128 __x, _Float128 __y) ;  extern _Float128  __remainderf128    (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128  scalbnf128    (_Float128 __x, int __n) ;  extern _Float128  __scalbnf128    (_Float128 __x, int __n) ; ununderstood ***/
/*** extern _Float128  scalblnf128    (_Float128 __x, long int __n) ;  extern _Float128  __scalblnf128    (_Float128 __x, long int __n) ; ununderstood ***/
/*** extern _Float128  nearbyintf128    (_Float128 __x) ;  extern _Float128  __nearbyintf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  roundf128    (_Float128 __x)  __attribute__ (  (__const__));  extern _Float128  __roundf128    (_Float128 __x)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  truncf128    (_Float128 __x)  __attribute__ (  (__const__));  extern _Float128  __truncf128    (_Float128 __x)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  remquof128    (_Float128 __x, _Float128 __y, int *__quo) ;  extern _Float128  __remquof128    (_Float128 __x, _Float128 __y, int *__quo) ; ununderstood ***/
/*** extern _Float128  fdimf128    (_Float128 __x, _Float128 __y) ;  extern _Float128  __fdimf128    (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128  fmaxf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__));  extern _Float128  __fmaxf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  fminf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__));  extern _Float128  __fminf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  fmaf128    (_Float128 __x, _Float128 __y, _Float128 __z) ;  extern _Float128  __fmaf128    (_Float128 __x, _Float128 __y, _Float128 __z) ; ununderstood ***/
/*** extern _Float128  roundevenf128    (_Float128 __x)  __attribute__ (  (__const__));  extern _Float128  __roundevenf128    (_Float128 __x)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  fmaxmagf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__));  extern _Float128  __fmaxmagf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  fminmagf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__));  extern _Float128  __fminmagf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  getpayloadf128    (const _Float128 *__x) ;  extern _Float128  __getpayloadf128    (const _Float128 *__x) ; ununderstood ***/
/*** extern _Float128  scalbf128    (_Float128 __x, _Float128 __n) ;  extern _Float128  __scalbf128    (_Float128 __x, _Float128 __n) ; ununderstood ***/
/*** __DECL_SIMD_ cosf32x     extern _Float32x  cosf32x      (_Float32x __x) ;  extern _Float32x  __cosf32x      (_Float32x __x) ; ununderstood ***/
/*** __DECL_SIMD_ sinf32x     extern _Float32x  sinf32x      (_Float32x __x) ;  extern _Float32x  __sinf32x      (_Float32x __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincosf32x    extern void   sincosf32x    ununderstood ***/
/*** (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) ;  extern void  __ sincosf32x    ununderstood ***/
/*** (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) ; ununderstood ***/
/*** __DECL_SIMD_ expf32x     extern _Float32x  expf32x      (_Float32x __x) ;  extern _Float32x  __expf32x      (_Float32x __x) ; ununderstood ***/
/*** __DECL_SIMD_ logf32x     extern _Float32x  logf32x      (_Float32x __x) ;  extern _Float32x  __logf32x      (_Float32x __x) ; ununderstood ***/
/*** __DECL_SIMD_ powf32x     extern _Float32x  powf32x      (_Float32x __x, _Float32x __y) ;  extern _Float32x  __powf32x      (_Float32x __x, _Float32x __y) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** __DECL_SIMD_ cosf64x     extern _Float64x  cosf64x      (_Float64x __x) ;  extern _Float64x  __cosf64x      (_Float64x __x) ; ununderstood ***/
/*** __DECL_SIMD_ sinf64x     extern _Float64x  sinf64x      (_Float64x __x) ;  extern _Float64x  __sinf64x      (_Float64x __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincosf64x    extern void   sincosf64x    ununderstood ***/
/*** (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) ;  extern void  __ sincosf64x    ununderstood ***/
/*** (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) ; ununderstood ***/
/*** __DECL_SIMD_ expf64x     extern _Float64x  expf64x      (_Float64x __x) ;  extern _Float64x  __expf64x      (_Float64x __x) ; ununderstood ***/
/*** __DECL_SIMD_ logf64x     extern _Float64x  logf64x      (_Float64x __x) ;  extern _Float64x  __logf64x      (_Float64x __x) ; ununderstood ***/
/*** __DECL_SIMD_ powf64x     extern _Float64x  powf64x      (_Float64x __x, _Float64x __y) ;  extern _Float64x  __powf64x      (_Float64x __x, _Float64x __y) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/

#include <limits.h>

#include <float.h>

#include <string.h>


#include <sys/time.h>

#include <sys/types.h>

#include <setjmp.h>

#include <errno.h>

#include <signal.h>
#if defined nofenv
  #define feenableexcept(fpe)
  #define feclearexcept(fpe)
#else
  #include <fenv.h>
  #define fpe FE_INVALID | FE_OVERFLOW | FE_DIVBYZERO
#endif

char errortemp_[(80+1)];


struct arrptr{int l,h; ssize_t i; char *a;};
struct dynptr{void* p; int t;};
char INTERRUPT=0;
void (*traphandler)(const char *);
struct freefunc{struct freefunc *next; void (*f)(void *); void *ptr;};
struct freefunc *freestack;
#define freemem(upto) while(freestack!=upto){freestack->f(freestack->ptr); freestack=freestack->next;}
#define atblockexit(name,func,p) name.f=func;name.ptr=p;name.next=freestack;freestack=&name
void traprestore(void *ptr){traphandler=ptr;}
void condfree(void *ptr){if(ptr)free(ptr);}
int dynptrerr(int type){
  snprintf(errortemp_,sizeof(errortemp_),"Argument of incompatible TYPE %d",type);
  traphandler(errortemp_);
}
void *errmalloc(){
  traphandler("Not enough memory");
}
void ioerr(FILE *fil){
  char where[11];
  off_t cn;
  int fn;
  fn=fileno(fil);
  cn=ftello(fil);
  if(ferror(fil)){
    snprintf(errortemp_,sizeof(errortemp_),"%s in fd %d char %ld",strerror(errno),fn,(long)cn);
  } else if(feof(fil)){
    snprintf(errortemp_,sizeof(errortemp_),"End of file in fd %d char %ld",fn,(long)cn);
  } else {
    if(cn>=0) fscanf(fil,"%10s",where); else where[0]=0;
    snprintf(errortemp_,sizeof(errortemp_),"Unrecognized input \"%s\" from fd %d char %ld",where,fn,(long)cn);
  }
  traphandler(errortemp_);
}
void errfclose(void *voidf){
  FILE **f=(FILE **)voidf;
  int fn;
  if(*f==NULL)return;
  fn=fileno(*f);
  if(fn>=0 && ftell(*f)>=0 && fclose(*f)!=0){
    snprintf(errortemp_,sizeof(errortemp_),"Error in closing fd %d: %s",fn,strerror(errno));
    traphandler(errortemp_);
    }
  *f=NULL;
}
void errfopen(FILE **f, const char *name, int mode){
  int fd;
  if(*f)errfclose(f);
  fd=open(name,mode,0666);
  if(fd>0 || mode==O_RDONLY){
    *f=fdopen(fd,mode==O_RDONLY?"r":"r+");
    if(*f!=NULL || mode==O_RDONLY)return;
    } 
  snprintf(errortemp_,sizeof(errortemp_),"Error in opening %s: %s",name,strerror(errno));
  traphandler(errortemp_);
}
int scanrec(FILE *f, const char *format, void *var) {
  off_t pos; int res;
  register int c;
  pos=ftello(f);
  while(!feof(f)&&(c=getc(f))<=' '&&(c!='\n')){};
  if(c!='\n')ungetc(c,f);
  while((c=getc(f))=='!') {while(!feof(f)&&getc(f)!='\n'){};};
  ungetc(c,f);
  res=fscanf(f,format,var);
  if (res<=0) fseeko(f,pos,SEEK_SET);
  return res;
}
int myfgets(char *name, char *var, char *varend, FILE *f) {
  off_t pos;
  register int c;
  pos=ftello(f);
  while(*name!=0){
    if(*name==' '){while((c=getc(f))<=' '){};ungetc(c,f);} else
    if(*name!=getc(f)){fseeko(f,pos,SEEK_SET);return 0;};
    name++;
  };
  if(var<varend){
    do{c=getc(f); *var=c;}while(c!=EOF && c!='\n' && ++var < varend);
    *var=0;
  }
  return 1;
}
int mygetline(char *name, char **var, FILE *f) {
  off_t pos;
  int c,oldc;
  pos=ftello(f);
  while(*name!=0){
    if(*name==' '){while((c=getc(f))<=' '){};ungetc(c,f);} else
    if(*name!=getc(f)){fseeko(f,pos,SEEK_SET);return 0;};
    name++;
  };
  c=32; oldc=0;
  while(1){
  *var=realloc(*var,c);
  if (fgets(*var+oldc,c,f)==NULL) {fseeko(f,pos,SEEK_SET);return 0;};
  {char* c1=strchr(*var,'\n'); if(c1) {*c1=0; return 1;}}
  oldc=c; c=2*c;
  }
  /*
  c=0;
  getline(var,&c,f);
  {char* c1=strchr(*var,'\n'); if(c1) *c1=0;}
  return 1;
  */
}
void trapsignal(int signum){
  if(signum==SIGINT) traphandler(&INTERRUPT); else {
    feclearexcept(fpe);
/* #if defined __linux__ */
    traphandler(strsignal(signum));
/*
#else
    snprintf(errortemp_,sizeof(errortemp_),"SIGNAL %d",signum);
    traphandler(errortemp_);
#endif
*/
  }
}
#if (defined __i386__ || defined __x86_64__)
#define mmovefrom(var,buf,type) *(type *)(buf)=*var
#define mmoveto(var,buf,type) *var=*(type *)(buf)
#else
#define mmovefrom(var,buf,type) memmove(buf,var,sizeof(type))
#define mmoveto(var,buf,type) memmove(var,buf,sizeof(type))
#endif
#define mainstart \
void default_traphandler(const char *errormessage){ \
  freemem(NULL); \
  if(errormessage[0]){ \
    printERR; \
    exit(EXIT_FAILURE); \
  }else exit(EXIT_SUCCESS); \
} \
int main(int argc, char **argv){ \
struct freefunc* es; \
{void (*sig)(int); \
if((sig=signal(SIGSEGV,trapsignal))!=SIG_DFL)signal(SIGSEGV,sig); \
if((sig=signal(SIGFPE,trapsignal))!=SIG_DFL)signal(SIGFPE,sig); \
if((sig=signal(SIGILL,trapsignal))!=SIG_DFL)signal(SIGILL,sig); \
if((sig=signal(SIGINT,trapsignal))!=SIG_DFL)signal(SIGINT,sig); \
else {traphandler=default_traphandler; \
      freestack=NULL; \
      feenableexcept(fpe); \
     }; \
} \
es=freestack;







/*! INTEGER LIBRARY FUNCTION INTEGER[(int)rint](REAL x)*/
/*! INTEGER LIBRARY FUNCTION int[(int)](REAL x)*/





/*!( to-do list
1) modificare STRUCTURED ARRAY in modo da evitare malloc quando possibile
2) separare il #define CPL da quello C
!)*/
double gamma_;

/*!USE rtchecks*/
struct COMPLEX_{double REAL_;double IMAG_;};void complex_1INV(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_2EXP(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_3SINH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_4COSH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_5TANH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_6COTH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_7LOG(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_8POWER(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG,double y_REAL,double y_IMAG);
void complex_9SQRT(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_10ACOS(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_11CRAND(struct COMPLEX_ *RESULT_);
void complex_12CGAUSS(struct COMPLEX_ *RESULT_);


void fft_1IFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_2FFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_3RFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_4HFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_5IFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_6FFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_7RFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_8HFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

int fft_9FFTfit(int N_);
void fft_fft_10ReverseInc(int *K_,int N_);
extern int fft_fft_LASTN;
extern struct arrptr fft_fft_CEXP;
extern struct arrptr fft_fft_tempVEC;
extern struct arrptr fft_fft_RI;
extern char *fft_fft_RI2;
extern char *fft_fft_RI3;
void fft_fft_11SETUP(int N_);
extern double fft_fft_12C3;
/*C3=fft_fft_12C3*/
void fft_fft_13BTFLY(int N_,int M_);
void fft_fft_14BTFLYI(int N_);
void fft_1IFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_2FFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_3RFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_4HFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_5IFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_6FFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_7RFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_8HFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
double *fft_15REALIFIED(const int x_l,const int x_h,const ssize_t x_i,char *x__,int y_);

double DotProduct(const int a_l,const int a_h,const ssize_t a_i,char *a__,const int b_l,const int b_h,const ssize_t b_i,char *b__);
void rbmat_1LeftMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int b_l,const int b_h,const ssize_t b_i,char *b__);
void RightMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int a_l,const int a_h,const ssize_t a_i,char *a__,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,char *B___);
struct REALINVMAT_{int lo_;int hi_;};void rbmat_2MatEqu(const int c_l,const int c_h,const ssize_t c_i,const int c__l,const int c__h,const ssize_t c__i,char *c___,double a_);
void rbmat_3MatEqu(FILE *c_f,const int c_l,const int c_h,const ssize_t c_i,const int c__l,const int c__h,const ssize_t c__i,off_t c___,double a_);
void rbmat_4LeftMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___,const int b_l,const int b_h,const ssize_t b_i,char *b__);
void rbmat_5RightMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int a_l,const int a_h,const ssize_t a_i,char *a__,FILE *B_f,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,off_t B___);
void rbmat_6LUdecomp(const int AA_l,const int AA_h,const ssize_t AA_i,const int AA__l,const int AA__h,const ssize_t AA__i,char *AA___);
void rbmat_7LUdecomp(FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___);
void rbmat_8LeftLDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);
void rbmat_9LeftUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);
void rbmat_10LeftLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);
void rbmat_11RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___);
void rbmat_12RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___);
extern double Lanczos_norm_;
void rbmat_13Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,void (*A_)(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__),void (*AT_)(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__),const int y1_l,const int y1_h,const ssize_t y1_i,char *y1__,double eps_);
void rbmat_14PLU(const int m_l,const int m_h,const ssize_t m_i,const int m__l,const int m__h,const ssize_t m__i,char *m___,struct REALINVMAT_ *RESULT_);
void rbmat_15LeftLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,struct REALINVMAT_ *m_,const int t_l,const int t_h,const ssize_t t_i,char *t__);
void rbmat_16RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,struct REALINVMAT_ *m_);
void rbmat_17INV(const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int RESULT_l,const int RESULT_h,const ssize_t RESULT_i,const int RESULT__l,const int RESULT__h,const ssize_t RESULT__i,char *RESULT___);
double rbmat_18DET(const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___);
void rbmat_19Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int y_l,const int y_h,const ssize_t y_i,char *y__,double eps_);

struct rbmat_Lanczos_R_s20 {int l,h; ssize_t i;struct arrptr a;};
extern struct rbmat_Lanczos_R_s20 rbmat_Lanczos_R_Lanczos_mat;
void rbmat_Lanczos_R_21A(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__);
void rbmat_Lanczos_R_22AT(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__);
void rbmat_19Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int y_l,const int y_h,const ssize_t y_i,char *y__,double eps_);


#include <sys/mman.h>

#include <sys/wait.h>

#include <sys/shm.h>


#define SHMPAGE 4194304
extern size_t shmavail;extern char *shmaddr;extern void *shmalloc(size_t size);extern sigset_t oldmask;extern void donothing(int signum);extern void setup_signal_USR1();


#include <sys/socket.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <netdb.h>
extern int tcpserver(uint16_t port)
;extern int tcpclient(const char *hostname, uint16_t port) 
;extern int udpsocket(uint16_t myport, const char *hostname, uint16_t hostport) 
;

void barrier_free(void * ptr);
extern struct freefunc barrier_f;extern volatile int *barrier_;


/*nsmp=4*/
extern int iproc_;
extern int nproc_;
/*bufsize=800*/
/*baseport=(IPPORT_USERRESERVED+111)*/
extern struct freefunc prev_f;extern FILE *prev_;
extern struct freefunc next_f;extern FILE *next_;
void rbmatmod_1LUdecompStep(const int A_l,const int A_h,const ssize_t A_i,char *A__);
void rbmatmod_2LeftLUDivStep1(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,char *A__,const int t_l,const int t_h,const ssize_t t_i,char *t__);
void rbmatmod_3LeftLUDivStep2(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,char *A__);
void rbmatmod_4RightLUDivStep1(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,const int A_l,const int A_h,const ssize_t A_i,char *A__);
void rbmatmod_5RightLUDivStep2(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,char *A__);
extern int ny_;
extern int nx_;
extern int nz_;
extern double alfa0_;
extern double beta0_;
extern double a_;
extern double ymin_;
extern double ymax_;
extern double t_max_;
extern double dt_field_;
extern double dt_save_;
extern double u_conv_;
extern double u0_;
extern double un_;
extern double w_conv_;
extern double w0_;
extern double wn_;
extern double t0_;
extern double tn_;
extern double ni_;
extern double pr_;
extern double gr_;
extern double meanpx_;
extern double meanpz_;
extern double meanflowx_;
extern double meanflowz_;
extern double px_;
extern double corrpx_;
extern double pz_;
extern double corrpz_;
extern double flowx_;
extern double flowz_;
extern double deltat_;
extern double cflmax_;
extern double time_;
extern int time_from_restart_;
extern struct freefunc restart_file_f;extern char *restart_file_;
void dnsdata_1read_initial_data();
extern int reread_;
void dnsdata_2kill_received(int signum_);
extern int dnsdata_4nyl;
/*nyl=dnsdata_4nyl*/
extern int dnsdata_5nyh;
/*nyh=dnsdata_5nyh*/
extern int dnsdata_6M;
extern int dnsdata_7l;
extern int dnsdata_8m;
extern int dnsdata_9h;
extern ssize_t dnsdata_10i;
extern ssize_t dnsdata_11st;
extern struct freefunc y_f;extern char *y_;
extern ssize_t dnsdata_13st;
struct dnsdata_s12{char d0_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d1_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d2_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d4_[(ssize_t)sizeof(double)*(2-(-2)+1)];};extern int dnsdata_14M;
extern int dnsdata_15l;
extern int dnsdata_16m;
extern int dnsdata_17h;
extern ssize_t dnsdata_18i;
extern ssize_t dnsdata_19st;
extern struct freefunc derivatives_f;extern char *derivatives_;
extern char d040_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char d140_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char d240_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char d340_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char d14m1_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char d24m1_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char d04n_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char d14n_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char d24n_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char d14np1_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char d24np1_[(ssize_t)sizeof(double)*(2-(-2)+1)];
extern char dnsdata_setup_derivatives_M[(ssize_t)sizeof(double)*(4+1)*(4+1)];
extern char dnsdata_setup_derivatives_t[(ssize_t)sizeof(double)*(4+1)];
extern int dnsdata_setup_derivatives_20M;
extern int dnsdata_setup_derivatives_21m;
extern int dnsdata_setup_derivatives_22;
extern int dnsdata_setup_derivatives_23;
extern int dnsdata_25l;
extern int dnsdata_26h;
extern ssize_t dnsdata_27i;
extern ssize_t dnsdata_28i;
extern ssize_t dnsdata_29st;
extern ssize_t dnsdata_30st;
extern struct freefunc D2vmat_f;extern char *D2vmat_;
extern struct freefunc etamat_f;extern char *etamat_;
extern struct freefunc D0mat_f;extern char *D0mat_;
extern char v0bc_[(ssize_t)sizeof(double)*(2-(-2)+1)*(-(-1)+1)];
extern ssize_t dnsdata_33st;
extern char vnbc_[(ssize_t)sizeof(double)*(2-(-2)+1)*(1+1)];
extern char eta0bc_[(ssize_t)sizeof(double)*(2-(-2)+1)*(-(-1)+1)];
extern char etanbc_[(ssize_t)sizeof(double)*(2-(-2)+1)*(1+1)];
extern char phi0bc_[(ssize_t)sizeof(double)*(2-(-2)+1)*(-(-1)+1)];
extern char phinbc_[(ssize_t)sizeof(double)*(2-(-2)+1)*(1+1)];
void dnsdata_34applybc_0(const int eq_l,const int eq_h,const ssize_t eq_i,const int eq__l,const int eq__h,const ssize_t eq__i,char *eq___,char *bc_);
void dnsdata_35applybc_n(const int eq_l,const int eq_h,const ssize_t eq_i,const int eq__l,const int eq__h,const ssize_t eq__i,char *eq___,char *bc_);
void dnsdata_36yintegr(double *RESULT_,const int f_l,const int f_h,const ssize_t f_i,char *f__);
extern int nxd_;
extern int nzd_;
extern int dnsdata_39h;
extern int dnsdata_40h;
extern ssize_t dnsdata_41i;
extern ssize_t dnsdata_42i;
void Vd_free(void * ptr);
extern struct freefunc Vd_f;extern char *Vd_;
extern int dnsdata_43h;
extern int dnsdata_44h;
extern ssize_t dnsdata_45i;
extern ssize_t dnsdata_46i;
void VVd_free(void * ptr);
extern struct freefunc VVd_f;extern char *VVd_;
/*maxtimelevels=1*/
struct rhstype_{struct COMPLEX_ eta_;struct COMPLEX_ D2v_;};struct VETA_{struct COMPLEX_ v_;struct COMPLEX_ eta_;};extern int dnsdata_47h;
extern int dnsdata_48l;
extern int dnsdata_49h;
extern ssize_t dnsdata_50i;
extern ssize_t dnsdata_51i;
extern ssize_t dnsdata_52i;
extern ssize_t dnsdata_53st;
extern ssize_t dnsdata_54st;
void V_free(void * ptr);
extern struct freefunc V_f;extern char *V_;
extern int dnsdata_55h;
extern int dnsdata_56l;
extern int dnsdata_57h;
extern int dnsdata_58M;
extern int dnsdata_59l;
extern int dnsdata_60m;
extern int dnsdata_61h;
extern ssize_t dnsdata_62i;
extern ssize_t dnsdata_63i;
extern ssize_t dnsdata_64i;
extern ssize_t dnsdata_65st;
extern ssize_t dnsdata_66st;
void oldrhs_free(void * ptr);
extern struct freefunc oldrhs_f;extern char *oldrhs_;
extern int dnsdata_67h;
extern int dnsdata_68l;
extern int dnsdata_69h;
extern ssize_t dnsdata_70i;
extern ssize_t dnsdata_71i;
extern ssize_t dnsdata_72i;
extern ssize_t dnsdata_73st;
extern struct freefunc memrhs_f;extern char *memrhs_;
extern double u1zero_;
extern double w1zero_;
extern double phi1zero_;
extern int ismp_;
extern int dnsdata_74h;
extern int dnsdata_75h;
extern int dnsdata_76l;
extern int dnsdata_77h;
extern off_t dnsdata_78i;
extern off_t dnsdata_79i;
extern off_t dnsdata_81i;
extern off_t dnsdata_82i;
extern off_t dnsdata_83i;
extern off_t dnsdata_84st;
extern off_t dnsdata_85st;
struct dnsdata_s80{char header_[(1023+1)];};extern struct freefunc diskimage_f;extern FILE *diskimage_;
extern int dnsdata_86h;
extern int dnsdata_87h;
extern int dnsdata_88h;
extern int dnsdata_89l;
extern int dnsdata_90h;
extern off_t dnsdata_91i;
extern off_t dnsdata_92i;
extern off_t dnsdata_94i;
extern off_t dnsdata_95st;
extern off_t dnsdata_96i;
extern off_t dnsdata_97i;
extern off_t dnsdata_98i;
extern off_t dnsdata_99st;
extern off_t dnsdata_100st;
struct dnsdata_s93{int nyimage_;int nximage_;int nzimage_;double timage_;double yminimage_;double ymaximage_;double aimage_;double alfa0image_;double beta0image_;double niimage_;};extern struct freefunc diskfield_f;extern FILE *diskfield_;
extern int cont_;
extern int outcont_;
extern struct freefunc time_file_f;extern FILE *time_file_;
extern int miny_;
extern int maxy_;
extern double cfl_;
extern double cflm_;
void dnsdata_101getcfl();
extern double energy_;
extern double slice_energy_;
extern double diss_;
extern double slice_diss_;
extern struct COMPLEX_ dudy_;
extern struct COMPLEX_ dvdy_;
extern struct COMPLEX_ dwdy_;
extern int dnsdata_102h;
extern int dnsdata_103l;
extern int dnsdata_104h;
extern ssize_t dnsdata_105i;
extern ssize_t dnsdata_106i;
extern ssize_t dnsdata_107st;
extern struct freefunc fieldbuf_f;extern char *fieldbuf_;
extern int dnsdata_108h;
extern int dnsdata_109l;
extern int dnsdata_110h;
extern ssize_t dnsdata_111i;
extern ssize_t dnsdata_112i;
extern ssize_t dnsdata_113st;
extern struct freefunc velbuf_f;extern char *velbuf_;
void dnsdata_114outstats();
void dnsdata_115read_restart_file();
void dnsdata_116simple(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG);
void dnsdata_117CN_AB(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG);
void dnsdata_118RK1_rai(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG);
extern double dnsdata_119RK1_rai_coeff;
void dnsdata_120RK2_rai(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG);
extern double dnsdata_121RK2_rai_coeff;
void dnsdata_122RK3_rai(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG);
extern double dnsdata_123RK3_rai_coeff;
void dnsdata_124RK1_kom(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG);
extern double dnsdata_125RK1_kom_coeff;
void dnsdata_126RK2_kom(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG);
extern double dnsdata_127RK2_kom_coeff;
void dnsdata_128RK3_kom(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG);
extern double dnsdata_129RK3_kom_coeff;
void dnsdata_130RK4_kom(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG);
extern double dnsdata_131RK4_kom_coeff;
/*!USE rtchecks*/
extern int dnsdirect_1h;
extern int dnsdirect_2l;
extern int dnsdirect_3h;
struct dnsdirect_s4{struct COMPLEX_ u_;struct COMPLEX_ v_;struct COMPLEX_ w_;struct COMPLEX_ vy_;struct COMPLEX_ eta_;struct COMPLEX_ ph_;};extern ssize_t dnsdirect_5i;
extern ssize_t dnsdirect_6i;
extern ssize_t dnsdirect_7st;
extern struct freefunc bc0_f;extern char *bc0_;
extern struct freefunc bcn_f;extern char *bcn_;
void dnsdirect_8buildrhs(void (*timescheme_)(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unknown_REAL,double unknown_IMAG,double implicit_part_REAL,double implicit_part_IMAG,double explicit_part_REAL,double explicit_part_IMAG));
void dnsdirect_9linsolve(double lambda_);
void dnsdirect_10vetaTOuvw();
void dnsdirect_11calcp0(struct COMPLEX_ *RESULT_,int ix_,int iz_);
void dnsdirect_12calcpn(struct COMPLEX_ *RESULT_,int ix_,int iz_);
void dnsdirect_13computeflowrate(double lambda_);
void dnsdirect_14deriv(const int f0_l,const int f0_h,const ssize_t f0_i,char *f0__,const int f1_l,const int f1_h,const ssize_t f1_i,char *f1__);
void dnsdirect_15convolutions(const int Vplane_l,const int Vplane_h,const ssize_t Vplane_i,const int Vplane__l,const int Vplane__h,const ssize_t Vplane__i,char *Vplane___,const int VVplane_l,const int VVplane_h,const ssize_t VVplane_i,const int VVplane__l,const int VVplane__h,const ssize_t VVplane__i,char *VVplane___);
void dnsdirect_15convolutions(const int Vplane_l,const int Vplane_h,const ssize_t Vplane_i,const int Vplane__l,const int Vplane__h,const ssize_t Vplane__i,char *Vplane___,const int VVplane_l,const int VVplane_h,const ssize_t VVplane_i,const int VVplane__l,const int VVplane__h,const ssize_t VVplane__i,char *VVplane___);
void dnsdirect_8buildrhs(void (*timescheme_)(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unknown_REAL,double unknown_IMAG,double implicit_part_REAL,double implicit_part_IMAG,double explicit_part_REAL,double explicit_part_IMAG));
void dnsdirect_11calcp0(struct COMPLEX_ *RESULT_,int ix_,int iz_);
void dnsdirect_12calcpn(struct COMPLEX_ *RESULT_,int ix_,int iz_);
void dnsdirect_9linsolve(double lambda_);
void dnsdirect_14deriv(const int f0_l,const int f0_h,const ssize_t f0_i,char *f0__,const int f1_l,const int f1_h,const ssize_t f1_i,char *f1__);
void dnsdirect_10vetaTOuvw();
void dnsdirect_13computeflowrate(double lambda_);
struct DERPRODS_{struct COMPLEX_ ux2_;struct COMPLEX_ vx2_;struct COMPLEX_ wx2_;struct COMPLEX_ uy2_;struct COMPLEX_ vy2_;struct COMPLEX_ wy2_;struct COMPLEX_ uz2_;struct COMPLEX_ vz2_;struct COMPLEX_ wz2_;};struct DERPRODSEXT_{struct COMPLEX_ ux2_;struct COMPLEX_ vx2_;struct COMPLEX_ wx2_;struct COMPLEX_ uy2_;struct COMPLEX_ vy2_;struct COMPLEX_ wy2_;struct COMPLEX_ uz2_;struct COMPLEX_ vz2_;struct COMPLEX_ wz2_;struct COMPLEX_ uxvx_;struct COMPLEX_ uyvy_;struct COMPLEX_ uzvz_;struct COMPLEX_ uxwx_;struct COMPLEX_ uywy_;struct COMPLEX_ uzwz_;struct COMPLEX_ vxwx_;struct COMPLEX_ vywy_;struct COMPLEX_ vzwz_;};struct convenience_s2{char d1_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d2_[(ssize_t)sizeof(double)*(2-(-2)+1)];};extern ssize_t convenience_3i;
extern ssize_t convenience_4st;
extern struct freefunc derivs_standalone_f;extern char *derivs_standalone_;
extern int convenience_5M;
extern int convenience_6m;
extern int convenience_7;
extern int convenience_8;
void convenience_10ByteSwap(float *xxx_);
void convenience_11fourier2physical(const int plane_l,const int plane_h,const ssize_t plane_i,const int plane__l,const int plane__h,const ssize_t plane__i,char *plane___,const int planed_l,const int planed_h,const ssize_t planed_i,const int planed__l,const int planed__h,const ssize_t planed__i,char *planed___);
void convenience_12read_field_parallel(char *field_name_);
void convenience_13read_field_fortran(char *field_name_,const int R_l,const int R_h,const ssize_t R_i,const int R__l,const int R__h,const ssize_t R__i,const int R___l,const int R___h,const ssize_t R___i,const int R____l,const int R____h,const ssize_t R____i,char *R_____);
void convenience_14read_field(char *field_name_);
void convenience_15read_field_uvw(char *field_name_);
void convenience_16velocity_gradient(const int Vder_l,const int Vder_h,const ssize_t Vder_i,const int Vder__l,const int Vder__h,const ssize_t Vder__i,const int Vder___l,const int Vder___h,const ssize_t Vder___i,char *Vder____);
void convenience_17deriv2(const int f0_l,const int f0_h,const ssize_t f0_i,char *f0__,const int f2_l,const int f2_h,const ssize_t f2_i,char *f2__);
double convenience_18yintf(const int f_l,const int f_h,const ssize_t f_i,char *f__);
void convenience_19convolution(const int h_l,const int h_h,const ssize_t h_i,char *h__,const int f_l,const int f_h,const ssize_t f_i,char *f__,const int g_l,const int g_h,const ssize_t g_i,char *g__,const int conv_l,const int conv_h,const ssize_t conv_i,const int conv__l,const int conv__h,const ssize_t conv__i,char *conv___);

void convenience_10ByteSwap(float *xxx_);
void convenience_11fourier2physical(const int plane_l,const int plane_h,const ssize_t plane_i,const int plane__l,const int plane__h,const ssize_t plane__i,char *plane___,const int planed_l,const int planed_h,const ssize_t planed_i,const int planed__l,const int planed__h,const ssize_t planed__i,char *planed___);
double convenience_18yintf(const int f_l,const int f_h,const ssize_t f_i,char *f__);
void convenience_13read_field_fortran(char *field_name_,const int R_l,const int R_h,const ssize_t R_i,const int R__l,const int R__h,const ssize_t R__i,const int R___l,const int R___h,const ssize_t R___i,const int R____l,const int R____h,const ssize_t R____i,char *R_____);
void convenience_12read_field_parallel(char *field_name_);
void convenience_14read_field(char *field_name_);
void convenience_15read_field_uvw(char *field_name_);
void convenience_16velocity_gradient(const int Vder_l,const int Vder_h,const ssize_t Vder_i,const int Vder__l,const int Vder__h,const ssize_t Vder__i,const int Vder___l,const int Vder___h,const ssize_t Vder___i,char *Vder____);
void convenience_17deriv2(const int f0_l,const int f0_h,const ssize_t f0_i,char *f0__,const int f2_l,const int f2_h,const ssize_t f2_i,char *f2__);
void convenience_19convolution(const int h_l,const int h_h,const ssize_t h_i,char *h__,const int f_l,const int f_h,const ssize_t f_i,char *f__,const int g_l,const int g_h,const ssize_t g_i,char *g__,const int conv_l,const int conv_h,const ssize_t conv_i,const int conv__l,const int conv__h,const ssize_t conv__i,char *conv___);
struct freefunc fieldname_f;char *fieldname_;

int nfmin_;
int nfmax_;
int nftot_;
int dn_;

struct freefunc outfile_f;FILE *outfile_;


int post_1h;
int post_2h;
ssize_t post_3i;
ssize_t post_4i;
ssize_t post_5st;
void meangrad_free(void * ptr){munmap((char*)ptr+post_5st,post_4i);}struct freefunc meangrad_f;char *meangrad_;

int post_6h;
int post_7h;
ssize_t post_8i;
ssize_t post_9i;
ssize_t post_10st;
void mean_free(void * ptr){munmap((char*)ptr+post_10st,post_9i);}struct freefunc mean_f;char *mean_;

int post_11h;
int post_12h;
ssize_t post_13i;
ssize_t post_14i;
void meanF_free(void * ptr){munmap((char*)ptr+post_10st,post_14i);}struct freefunc meanF_f;char *meanF_;

int post_15h;
int post_16h;
ssize_t post_17i;
ssize_t post_18i;
ssize_t post_19st;
void var_free(void * ptr){munmap((char*)ptr+post_19st,post_18i);}struct freefunc var_f;char *var_;


int post_20h;
int post_21l;
int post_22h;
ssize_t post_23i;
ssize_t post_24i;
ssize_t post_25i;
ssize_t post_26st;
ssize_t post_27st;
void F_free(void * ptr){munmap((char*)ptr+post_27st,post_25i);}struct freefunc F_f;char *F_;

int post_28h;
int post_29h;
ssize_t post_30i;
ssize_t post_31i;
void Fd_free(void * ptr){munmap((char*)ptr,post_31i);}struct freefunc Fd_f;char *Fd_;

int post_32h;
int post_33l;
int post_34h;
ssize_t post_35i;
ssize_t post_36i;
ssize_t post_37i;
ssize_t post_38st;
ssize_t post_39st;
void Vder_free(void * ptr){munmap((char*)ptr+post_39st,post_37i);}struct freefunc Vder_f;char *Vder_;

int post_40h;
int post_41h;
ssize_t post_42i;
ssize_t post_43i;
void Vderd_free(void * ptr){munmap((char*)ptr,post_43i);}struct freefunc Vderd_f;char *Vderd_;



double post_116m;
double post_120m;
double post_124m;
double post_128m;
int fwrite132_;
int fwrite133_;
int fwrite134_;
int fwrite135_;
int fwrite136_;
int fwrite137_;
int fwrite138_;
int fwrite139_;
int fwrite140_;
int fwrite141_;
int fwrite142_;
int fwrite143_;
int fwrite144_;
mainstart

gamma_=0.0;

fft: 

fft_fft_LASTN=1;fft_fft_12C3=sin(3.14159265358979323846/3.);
fft_exit:;





Lanczos_norm_=0.;

Lanczos_R: 
Lanczos_R_exit:;


setup_signal_USR1();


barrier_=mmap(NULL,(ssize_t)sizeof(volatile int),PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(barrier_==MAP_FAILED)errmalloc();atblockexit(barrier_f,barrier_free,(void*)barrier_);(*barrier_)=0;if( (argc-1)<1 ){ iproc_=1; nproc_=1 ;}else{
iproc_=atoi((void *)((*(char**)((ssize_t)sizeof(char*)+(char*)argv))));  nproc_=atoi((void *)((*(char**)(2*(ssize_t)sizeof(char*)+(char*)argv))));  };
prev_=NULL;atblockexit(prev_f,errfclose,&prev_);next_=NULL;atblockexit(next_f,errfclose,&next_);if( iproc_<nproc_ ){
  next_=fdopen(tcpserver((IPPORT_USERRESERVED+111)+iproc_),(void *)("r+"));
  setvbuf(next_,malloc(800),_IOFBF,800);
};
if( iproc_>1 ){
  prev_=fdopen(tcpclient((void *)((*(char**)(3*(ssize_t)sizeof(char*)+(char*)argv))),(IPPORT_USERRESERVED+111)+iproc_-1),(void *)("r+"));
  setvbuf(prev_,malloc(800),_IOFBF,800);
};


meanpx_=-99.;meanpz_=-99.;meanflowx_=-99.;meanflowz_=-99.;px_=0.;corrpx_=0.;pz_=0.;corrpz_=0.;flowx_=0.;flowz_=0.;deltat_=0.;cflmax_=0.;time_=0.;restart_file_=0;atblockexit(restart_file_f,condfree,restart_file_);reread_=0;dnsdata_1read_initial_data();  signal(SIGUSR2,dnsdata_2kill_received);

/*! Grid in y direction and compact finite differences operators*/
dnsdata_4nyl=1+((iproc_-1)*(ny_-1) / nproc_);
dnsdata_5nyh=(iproc_*(ny_-1) / nproc_);
dnsdata_6M=dnsdata_4nyl-4;
dnsdata_7l= - 1;if(dnsdata_7l<dnsdata_6M)dnsdata_7l=dnsdata_6M;dnsdata_8m=dnsdata_5nyh+4;
dnsdata_9h=ny_+1;if(dnsdata_9h>dnsdata_8m)dnsdata_9h=dnsdata_8m;dnsdata_10i=(ssize_t)sizeof(double)*(dnsdata_9h-dnsdata_7l+1);
dnsdata_11st=dnsdata_7l*(ssize_t)sizeof(double);

y_=malloc(dnsdata_10i);if(y_==NULL)errmalloc();y_-=dnsdata_11st;atblockexit(y_f,free,y_+dnsdata_11st);  {int i_=dnsdata_7l;do{ /*!Boundary layer*/{ (*(double *)(i_*(ssize_t)sizeof(double)+y_))=ymin_+(ymax_-ymin_)*(tanh(a_*((double)(i_)/(double)(ny_)-1.))/tanh(a_)+1.) ;}i_++;}while(i_<=dnsdata_9h);}
/*!DO y(i)=ymin+0.5*(ymax-ymin)*[tanh(a*(2*i/ny-1))/tanh(a)+0.5*(ymax-ymin)] FOR ALL i !Channel*/


dnsdata_13st=(-2)*(ssize_t)sizeof(double);
dnsdata_14M=dnsdata_4nyl-2;
dnsdata_15l=1;if(dnsdata_15l<dnsdata_14M)dnsdata_15l=dnsdata_14M;dnsdata_16m=dnsdata_5nyh+2;
dnsdata_17h=ny_-1;if(dnsdata_17h>dnsdata_16m)dnsdata_17h=dnsdata_16m;dnsdata_18i=(ssize_t)sizeof(struct dnsdata_s12)*(dnsdata_17h-dnsdata_15l+1);
dnsdata_19st=dnsdata_15l*(ssize_t)sizeof(struct dnsdata_s12);

derivatives_=malloc(dnsdata_18i);if(derivatives_==NULL)errmalloc();derivatives_-=dnsdata_19st;atblockexit(derivatives_f,free,derivatives_+dnsdata_19st);setup_derivatives: 
dnsdata_setup_derivatives_20M=dnsdata_4nyl-2;
dnsdata_setup_derivatives_21m=dnsdata_5nyh+2;
dnsdata_setup_derivatives_22=1;if(dnsdata_setup_derivatives_22<dnsdata_setup_derivatives_20M)dnsdata_setup_derivatives_22=dnsdata_setup_derivatives_20M;dnsdata_setup_derivatives_23=ny_-1;if(dnsdata_setup_derivatives_23>dnsdata_setup_derivatives_21m)dnsdata_setup_derivatives_23=dnsdata_setup_derivatives_21m; {int iy_=dnsdata_setup_derivatives_22  ;while(iy_<=dnsdata_setup_derivatives_23 ){{
  struct dnsdata_s12 *dnsdata_setup_derivatives_24w;
dnsdata_setup_derivatives_24w=(struct dnsdata_s12 *)(iy_*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_);
 {int i_=0  ;do{ {int j_=0  ;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+dnsdata_setup_derivatives_M))=pow(((*(double *)((iy_-2+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_+=1;}while(j_<=4);}i_+=1;}while(i_<=4 );}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),dnsdata_setup_derivatives_M);
  memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(dnsdata_setup_derivatives_t))=24.;
  {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d4_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d4_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d4_-dnsdata_13st));};}
   {int i_=0  ;do{ {int j_=0  ;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+dnsdata_setup_derivatives_M))=(double)((5-i_)*(6-i_)*(7-i_)*(8-i_))*pow(((*(double *)((iy_-2+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_+=1;}while(j_<=4);}i_+=1;}while(i_<=4 );}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),dnsdata_setup_derivatives_M);
   {int i_=0  ;do{{  (*(double *)(i_*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=0.; {int j_= - 2  ;do{{(*(double *)(i_*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))+=((*(double *)(j_*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d4_-dnsdata_13st))*pow(((*(double *)((iy_+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(8-i_))) ;}j_+=1;}while(j_<=2 );}}i_+=1;}while(i_<=4);}
  {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d0_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d0_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d0_-dnsdata_13st));};}
   {int i_=0  ;do{ {int j_=0  ;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+dnsdata_setup_derivatives_M))=pow(((*(double *)((iy_-2+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_+=1;}while(j_<=4);}i_+=1;}while(i_<=4 );}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),dnsdata_setup_derivatives_M);
  memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));   {int i_=0  ;do{{  (*(double *)(i_*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=0.; {int j_= - 2  ;do{{(*(double *)(i_*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))+=(*(double *)(j_*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d0_-dnsdata_13st))*(double)((4-i_))*(double)((3-i_))*pow(((*(double *)((iy_+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(2-i_) );}j_+=1;}while(j_<=2 );}}i_+=1;}while(i_<=2);}
  {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d2_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d2_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d2_-dnsdata_13st));};}
  memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));   {int i_=0  ;do{{  (*(double *)(i_*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=0.; {int j_= - 2  ;do{{(*(double *)(i_*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))+=(*(double *)(j_*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d0_-dnsdata_13st))*(double)((4-i_))*pow(((*(double *)((iy_+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(3-i_) );}j_+=1;}while(j_<=2 );}}i_+=1;}while(i_<=3);}
  {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d1_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d1_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d1_-dnsdata_13st));};}
}iy_+=1;};}
if( (prev_==NULL) ){
  memset(dnsdata_13st+d040_-((-2)*(ssize_t)sizeof(double)),0,(ssize_t)sizeof(double)*(2-(-2)+1));  (*(double *)(-(ssize_t)sizeof(double)+d040_-((-2)*(ssize_t)sizeof(double))))=1.;
   {int i_=0  ;do{ {int j_=0  ;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+dnsdata_setup_derivatives_M))=pow(((*(double *)((-1+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(y_))),(4-i_) );}j_+=1;}while(j_<=4);}i_+=1;}while(i_<=4 );}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),dnsdata_setup_derivatives_M);
  memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(3*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=1.;
  {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))));};}
  memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(2*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=2.;
  {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d240_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d240_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d240_-((-2)*(ssize_t)sizeof(double))));};}
  memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(3*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=6.;
  {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d340_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d340_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d340_-((-2)*(ssize_t)sizeof(double))));};}
   {int i_=0  ;do{ {int j_=0  ;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+dnsdata_setup_derivatives_M))=pow(((*(double *)((-1+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(-(ssize_t)sizeof(double)+y_))),(4-i_) );}j_+=1;}while(j_<=4);}i_+=1;}while(i_<=4 );}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),dnsdata_setup_derivatives_M);
  memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(3*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=1.;
  {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14m1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14m1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14m1_-((-2)*(ssize_t)sizeof(double))));};}
  memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(2*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=2.;
  {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24m1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24m1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24m1_-((-2)*(ssize_t)sizeof(double))));};}
};
if( (next_==NULL) ){
  memset(dnsdata_13st+d04n_-((-2)*(ssize_t)sizeof(double)),0,(ssize_t)sizeof(double)*(2-(-2)+1));  (*(double *)((ssize_t)sizeof(double)+d04n_-((-2)*(ssize_t)sizeof(double))))=1.;
   {int i_=0  ;do{ {int j_=0  ;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+dnsdata_setup_derivatives_M))=pow(((*(double *)((ny_-3+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(ny_*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_+=1;}while(j_<=4);}i_+=1;}while(i_<=4 );}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),dnsdata_setup_derivatives_M);
  memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(3*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=1.;
  {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))));};}
  memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(2*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=2.;
  {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24n_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24n_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24n_-((-2)*(ssize_t)sizeof(double))));};}
   {int i_=0  ;do{ {int j_=0  ;do{{ (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(4+1)+dnsdata_setup_derivatives_M))=pow(((*(double *)((ny_-3+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)((ny_+1)*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_+=1;}while(j_<=4);}i_+=1;}while(i_<=4 );}  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),dnsdata_setup_derivatives_M);
  memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(3*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=1.;
  {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14np1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14np1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14np1_-((-2)*(ssize_t)sizeof(double))));};}
  memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  (*(double *)(2*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=2.;
  {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24np1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24np1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24np1_-((-2)*(ssize_t)sizeof(double))));};}
};
setup_derivatives_exit:;

dnsdata_25l= - nz_;
dnsdata_26h=nz_;
dnsdata_27i=(ssize_t)sizeof(double)*(2-(-2)+1)*((dnsdata_5nyh+2)-dnsdata_4nyl+1);
dnsdata_28i=dnsdata_27i*(dnsdata_26h-dnsdata_25l+1);
dnsdata_29st=dnsdata_4nyl*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st;
dnsdata_30st=dnsdata_25l*dnsdata_27i+dnsdata_29st;

D2vmat_=malloc(dnsdata_28i);if(D2vmat_==NULL)errmalloc();D2vmat_-=dnsdata_30st;atblockexit(D2vmat_f,free,D2vmat_+dnsdata_30st);memset(dnsdata_30st+D2vmat_,0,dnsdata_28i);
etamat_=malloc(dnsdata_28i);if(etamat_==NULL)errmalloc();etamat_-=dnsdata_30st;atblockexit(etamat_f,free,etamat_+dnsdata_30st);memset(dnsdata_30st+etamat_,0,dnsdata_28i);
D0mat_=malloc(dnsdata_27i);if(D0mat_==NULL)errmalloc();D0mat_-=dnsdata_29st;atblockexit(D0mat_f,free,D0mat_+dnsdata_29st);memset(dnsdata_29st+D0mat_,0,dnsdata_27i);{char *dnsdata_32_;

dnsdata_32_=dnsdata_4nyl*(ssize_t)sizeof(struct dnsdata_s12)+(char*)(*(struct dnsdata_s12*)(derivatives_)).d0_-dnsdata_13st; {char *dnsdata_31_=dnsdata_4nyl*(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_;int dnsdata_31_1=dnsdata_5nyh-dnsdata_4nyl; do{{ memcpy(dnsdata_13st+dnsdata_31_,dnsdata_13st+dnsdata_32_,(ssize_t)sizeof(double)*(2-(-2)+1)); dnsdata_32_ =(ssize_t)sizeof(struct dnsdata_s12)+dnsdata_32_;}dnsdata_31_+=(ssize_t)sizeof(double)*(2-(-2)+1);dnsdata_31_1--;}while(dnsdata_31_1>=0);}}rbmatmod_1LUdecompStep(dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),D0mat_);

dnsdata_33st=(-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st;
memset(dnsdata_33st+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),0,(ssize_t)sizeof(double)*(2-(-2)+1)*(-(-1)+1));memset(dnsdata_13st+vnbc_-dnsdata_13st,0,(ssize_t)sizeof(double)*(2-(-2)+1)*(1+1));memset(dnsdata_33st+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),0,(ssize_t)sizeof(double)*(2-(-2)+1)*(-(-1)+1));memset(dnsdata_13st+etanbc_-dnsdata_13st,0,(ssize_t)sizeof(double)*(2-(-2)+1)*(1+1));memset(dnsdata_33st+phi0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),0,(ssize_t)sizeof(double)*(2-(-2)+1)*(-(-1)+1));memset(dnsdata_13st+phinbc_-dnsdata_13st,0,(ssize_t)sizeof(double)*(2-(-2)+1)*(1+1));if( (prev_==NULL) ){
  memcpy(dnsdata_13st+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),dnsdata_13st+d040_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  memcpy(dnsdata_13st-(ssize_t)sizeof(double)*(2-(-2)+1)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),dnsdata_13st+d140_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  memcpy(dnsdata_13st+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),dnsdata_13st+d040_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));
  memcpy(dnsdata_13st-(ssize_t)sizeof(double)*(2-(-2)+1)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),dnsdata_13st+(*(struct dnsdata_s12*)((ssize_t)sizeof(struct dnsdata_s12)+derivatives_)).d4_-dnsdata_13st,(ssize_t)sizeof(double)*(2-(-2)+1));
  memcpy(dnsdata_13st+phi0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),dnsdata_13st+d040_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  memcpy(dnsdata_13st-(ssize_t)sizeof(double)*(2-(-2)+1)+phi0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),dnsdata_13st+(*(struct dnsdata_s12*)((ssize_t)sizeof(struct dnsdata_s12)+derivatives_)).d4_-dnsdata_13st/*!Dirichlet*/,(ssize_t)sizeof(double)*(2-(-2)+1));
/*! phi0bc(0)=d140; phi0bc(-1)=derivatives(1).d4 !Neumann*/
   {int i_=  - 1  ;do{{ (*(double *)(i_*(ssize_t)sizeof(double)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))-=(*(double *)((-2)*(ssize_t)sizeof(double)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))*(*(double *)(i_*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))/(*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)) );}i_+=1;}while(i_<=2);}
   {int i_=  - 1  ;do{{ (*(double *)(i_*(ssize_t)sizeof(double)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))-=(*(double *)((-2)*(ssize_t)sizeof(double)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))*(*(double *)(i_*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))/(*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)) );}i_+=1;}while(i_<=2);}
   {int i_=  - 1  ;do{{ (*(double *)(i_*(ssize_t)sizeof(double)+phi0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))-=(*(double *)((-2)*(ssize_t)sizeof(double)+phi0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))*(*(double *)(i_*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+phi0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))/(*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+phi0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)) );}i_+=1;}while(i_<=2);}
};
if( (next_==NULL) ){
/*! vnbc(0)=d04n; vnbc(1)=d24n; etanbc(0)=d14n !Boundary layer*/
  memcpy(dnsdata_13st+vnbc_-dnsdata_13st,dnsdata_13st+d04n_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  memcpy(dnsdata_13st+(ssize_t)sizeof(double)*(2-(-2)+1)+vnbc_-dnsdata_13st,dnsdata_13st+d14n_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  memcpy(dnsdata_13st+etanbc_-dnsdata_13st,dnsdata_13st+d04n_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));
  memcpy(dnsdata_13st+(ssize_t)sizeof(double)*(2-(-2)+1)+etanbc_-dnsdata_13st,dnsdata_13st+(*(struct dnsdata_s12*)((ny_-1)*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_)).d4_-dnsdata_13st,(ssize_t)sizeof(double)*(2-(-2)+1));
  memcpy(dnsdata_13st+phinbc_-dnsdata_13st,dnsdata_13st+d04n_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  memcpy(dnsdata_13st+(ssize_t)sizeof(double)*(2-(-2)+1)+phinbc_-dnsdata_13st,dnsdata_13st+(*(struct dnsdata_s12*)((ny_-1)*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_)).d4_-dnsdata_13st/*!Dirichlet*/,(ssize_t)sizeof(double)*(2-(-2)+1));
/*! phinbc(0)=d04n; phinbc(1)=d14n                 !Dirichlet+Neumann*/
   {int i_=  - 2  ;do{{ (*(double *)(i_*(ssize_t)sizeof(double)+vnbc_-dnsdata_13st))-=(*(double *)(2*(ssize_t)sizeof(double)+vnbc_-dnsdata_13st))*(*(double *)(i_*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+vnbc_-dnsdata_13st))/(*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+vnbc_-dnsdata_13st) );}i_+=1;}while(i_<=1);}
   {int i_=  - 2  ;do{{ (*(double *)(i_*(ssize_t)sizeof(double)+etanbc_-dnsdata_13st))-=(*(double *)(2*(ssize_t)sizeof(double)+etanbc_-dnsdata_13st))*(*(double *)(i_*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+etanbc_-dnsdata_13st))/(*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+etanbc_-dnsdata_13st) );}i_+=1;}while(i_<=1);}
   {int i_=  - 2  ;do{{ (*(double *)(i_*(ssize_t)sizeof(double)+phinbc_-dnsdata_13st))-=(*(double *)(2*(ssize_t)sizeof(double)+phinbc_-dnsdata_13st))*(*(double *)(i_*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+phinbc_-dnsdata_13st))/(*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+phinbc_-dnsdata_13st) );}i_+=1;}while(i_<=1);}
};


/*! Boundary conditions*/
nxd_=(3*nx_ / 2 )- 1;{do{  nxd_ +=1;}while(!(fft_9FFTfit(nxd_)));}
nzd_=3*nz_ - 1;{do{  nzd_ +=1;}while(!(fft_9FFTfit(nzd_)));}
dnsdata_39h=nxd_-1;
dnsdata_40h=nzd_-1;
dnsdata_41i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)*(dnsdata_40h+1);
dnsdata_42i=dnsdata_41i*(dnsdata_39h+1);

Vd_=mmap(NULL,dnsdata_42i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(Vd_==MAP_FAILED)errmalloc();atblockexit(Vd_f,Vd_free,(void*)Vd_);dnsdata_43h=nxd_-1;
dnsdata_44h=nzd_-1;
dnsdata_45i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)*(4+1)*(dnsdata_44h+1);
dnsdata_46i=dnsdata_45i*(dnsdata_43h+1);

VVd_=mmap(NULL,dnsdata_46i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(VVd_==MAP_FAILED)errmalloc();atblockexit(VVd_f,VVd_free,(void*)VVd_);dnsdata_47h=nx_;
dnsdata_48l= - nz_;
dnsdata_49h=nz_;
dnsdata_50i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)*((dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1);
dnsdata_51i=dnsdata_50i*(dnsdata_49h-dnsdata_48l+1);
dnsdata_52i=dnsdata_51i*(dnsdata_47h+1);
dnsdata_53st=(dnsdata_4nyl-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);
dnsdata_54st=dnsdata_48l*dnsdata_50i+dnsdata_53st;

V_=mmap(NULL,dnsdata_52i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(V_==MAP_FAILED)errmalloc();V_-=dnsdata_54st;atblockexit(V_f,V_free,(void*)V_);dnsdata_55h=nx_;
dnsdata_56l= - nz_;
dnsdata_57h=nz_;
dnsdata_58M=dnsdata_4nyl-2;
dnsdata_59l=1;if(dnsdata_59l<dnsdata_58M)dnsdata_59l=dnsdata_58M;dnsdata_60m=dnsdata_5nyh+2;
dnsdata_61h=ny_-1;if(dnsdata_61h>dnsdata_60m)dnsdata_61h=dnsdata_60m;dnsdata_62i=(ssize_t)sizeof(struct rhstype_)*(dnsdata_61h-dnsdata_59l+1);
dnsdata_63i=dnsdata_62i*(dnsdata_57h-dnsdata_56l+1);
dnsdata_64i=dnsdata_63i*(dnsdata_55h+1);
dnsdata_65st=dnsdata_59l*(ssize_t)sizeof(struct rhstype_)+(ssize_t)sizeof(struct rhstype_);
dnsdata_66st=dnsdata_56l*dnsdata_62i+dnsdata_65st;

oldrhs_=mmap(NULL,dnsdata_64i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(oldrhs_==MAP_FAILED)errmalloc();oldrhs_-=dnsdata_66st;atblockexit(oldrhs_f,oldrhs_free,(void*)oldrhs_);dnsdata_67h=nx_;
dnsdata_68l= - nz_;
dnsdata_69h=nz_;
dnsdata_70i=(ssize_t)sizeof(struct rhstype_)*(2+1);
dnsdata_71i=dnsdata_70i*(dnsdata_69h-dnsdata_68l+1);
dnsdata_72i=dnsdata_71i*(dnsdata_67h+1);
dnsdata_73st=dnsdata_68l*dnsdata_70i;

memrhs_=malloc(dnsdata_72i);if(memrhs_==NULL)errmalloc();memrhs_-=dnsdata_73st;atblockexit(memrhs_f,free,memrhs_+dnsdata_73st);u1zero_=0.;w1zero_=0.;dnsdata_74h=ny_+1;
dnsdata_75h=nx_;
dnsdata_76l= - nz_;
dnsdata_77h=nz_;
dnsdata_78i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)*(dnsdata_77h-dnsdata_76l+1);
dnsdata_79i=dnsdata_78i*(dnsdata_75h+1);
dnsdata_81i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)*(dnsdata_77h-dnsdata_76l+1);
dnsdata_82i=dnsdata_81i*(dnsdata_75h+1);
dnsdata_83i=dnsdata_82i*(dnsdata_74h-(-1)+1);
dnsdata_84st=dnsdata_76l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);
dnsdata_85st=(-1)*dnsdata_79i+dnsdata_84st;
diskimage_=NULL;atblockexit(diskimage_f,errfclose,&diskimage_);dnsdata_86h=ny_+1;
dnsdata_87h=ny_+1;
dnsdata_88h=nx_;
dnsdata_89l= - nz_;
dnsdata_90h=nz_;
dnsdata_91i=(ssize_t)sizeof(struct VETA_)*(dnsdata_90h-dnsdata_89l+1);
dnsdata_92i=dnsdata_91i*(dnsdata_88h+1);
dnsdata_94i=(ssize_t)sizeof(double)*(dnsdata_86h-(-1)+1);
dnsdata_95st=(-1)*(ssize_t)sizeof(double);
dnsdata_96i=(ssize_t)sizeof(struct VETA_)*(dnsdata_90h-dnsdata_89l+1);
dnsdata_97i=dnsdata_96i*(dnsdata_88h+1);
dnsdata_98i=dnsdata_97i*(dnsdata_87h-(-1)+1);
dnsdata_99st=dnsdata_89l*(ssize_t)sizeof(struct VETA_);
dnsdata_100st=(-1)*dnsdata_92i+dnsdata_99st;
diskfield_=NULL;atblockexit(diskfield_f,errfclose,&diskfield_);cont_=0;outcont_=1000;time_file_=NULL;atblockexit(time_file_f,errfclose,&time_file_);if( (next_==NULL) ){ errfopen(&time_file_,"Runtimedata_",O_RDWR|O_CREAT|O_TRUNC);};
if( (prev_==NULL) ){ miny_=dnsdata_4nyl-2; maxy_=dnsdata_5nyh   ;}else{ miny_=dnsdata_4nyl;};
if( (next_==NULL)  ){ miny_=dnsdata_4nyl;   maxy_=dnsdata_5nyh+2 ;}else{ maxy_=dnsdata_5nyh;};
if( ((prev_==NULL) )&&( (next_==NULL) )){ miny_=dnsdata_4nyl-2; maxy_=dnsdata_5nyh+2;};

cfl_=0.;cflm_=0.;dnsdata_102h=nx_;
dnsdata_103l= - nz_;
dnsdata_104h=nz_;
dnsdata_105i=(ssize_t)sizeof(struct VETA_)*(dnsdata_104h-dnsdata_103l+1);
dnsdata_106i=dnsdata_105i*(dnsdata_102h+1);
dnsdata_107st=dnsdata_103l*(ssize_t)sizeof(struct VETA_);

fieldbuf_=malloc(dnsdata_106i);if(fieldbuf_==NULL)errmalloc();fieldbuf_-=dnsdata_107st;atblockexit(fieldbuf_f,free,fieldbuf_+dnsdata_107st);dnsdata_108h=nx_;
dnsdata_109l= - nz_;
dnsdata_110h=nz_;
dnsdata_111i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)*(dnsdata_110h-dnsdata_109l+1);
dnsdata_112i=dnsdata_111i*(dnsdata_108h+1);
dnsdata_113st=dnsdata_109l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);

velbuf_=malloc(dnsdata_112i);if(velbuf_==NULL)errmalloc();velbuf_-=dnsdata_113st;atblockexit(velbuf_f,free,velbuf_+dnsdata_113st);dnsdata_119RK1_rai_coeff=120./32.;
dnsdata_121RK2_rai_coeff=120./8.;
dnsdata_123RK3_rai_coeff=120./20.;
dnsdata_125RK1_kom_coeff=1020./240.;
dnsdata_127RK2_kom_coeff=1020./32.;
dnsdata_129RK3_kom_coeff=1020./68.;
dnsdata_131RK4_kom_coeff=1020./170.;

dnsdirect_1h=nx_;
dnsdirect_2l= - nz_;
dnsdirect_3h=nz_;
dnsdirect_5i=(ssize_t)sizeof(struct dnsdirect_s4)*(dnsdirect_3h-dnsdirect_2l+1);
dnsdirect_6i=dnsdirect_5i*(dnsdirect_1h+1);
dnsdirect_7st=dnsdirect_2l*(ssize_t)sizeof(struct dnsdirect_s4);

bc0_=malloc(dnsdirect_6i);if(bc0_==NULL)errmalloc();bc0_-=dnsdirect_7st;atblockexit(bc0_f,free,bc0_+dnsdirect_7st);memset(dnsdirect_7st+bc0_,0,dnsdirect_6i);
bcn_=malloc(dnsdirect_6i);if(bcn_==NULL)errmalloc();bcn_-=dnsdirect_7st;atblockexit(bcn_f,free,bcn_+dnsdirect_7st);memset(dnsdirect_7st+bcn_,0,dnsdirect_6i);dnsdirect: 

dnsdirect_exit:;

convenience_3i=(ssize_t)sizeof(struct convenience_s2)*((dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1);
convenience_4st=(dnsdata_4nyl-2)*(ssize_t)sizeof(struct convenience_s2);

derivs_standalone_=malloc(convenience_3i);if(derivs_standalone_==NULL)errmalloc();derivs_standalone_-=convenience_4st;atblockexit(derivs_standalone_f,free,derivs_standalone_+convenience_4st);convenience_5M=dnsdata_4nyl-2;
convenience_6m=dnsdata_5nyh+2;
convenience_7=1;if(convenience_7<convenience_5M)convenience_7=convenience_5M;convenience_8=ny_-1;if(convenience_8>convenience_6m)convenience_8=convenience_6m; {int iy_=convenience_7  ;while(iy_<=convenience_8 ){{
  struct convenience_s2 *convenience_9w;
char matder_[(ssize_t)sizeof(double)*(4+1)*(4+1)];

  char tnder_[(ssize_t)sizeof(double)*(4+1)];

  convenience_9w=(struct convenience_s2 *)(iy_*(ssize_t)sizeof(struct convenience_s2)+derivs_standalone_);
memset(matder_,0,(ssize_t)sizeof(double)*(4+1)*(4+1));memset(tnder_,0,(ssize_t)sizeof(double)*(4+1)); {int ic_=0  ;do{ {int ir_=0  ;do{{  (*(double *)(ic_*(ssize_t)sizeof(double)+ir_*(ssize_t)sizeof(double)*(4+1)+matder_) )= pow(((*(double *)((iy_-2+ic_)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(4-ir_) );}ir_+=1;}while(ir_<=4);}ic_+=1;}while(ic_<=4 );}
  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),matder_);
  memset(dnsdata_13st+(*convenience_9w).d1_-dnsdata_13st,0,(ssize_t)sizeof(double)*(2-(-2)+1));  memset(tnder_,0,(ssize_t)sizeof(double)*(4+1));   (*(double *)(3*(ssize_t)sizeof(double)+tnder_) )= 1.;
   {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*convenience_9w).d1_-dnsdata_13st ),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(matder_),0,4,(ssize_t)sizeof(double),(tnder_)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*convenience_9w).d1_-dnsdata_13st ),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(matder_),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*convenience_9w).d1_-dnsdata_13st ));};}
  memset(dnsdata_13st+(*convenience_9w).d2_-dnsdata_13st,0,(ssize_t)sizeof(double)*(2-(-2)+1));  memset(tnder_,0,(ssize_t)sizeof(double)*(4+1));   (*(double *)(2*(ssize_t)sizeof(double)+tnder_) )= 2.;
   {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*convenience_9w).d2_-dnsdata_13st ),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(matder_),0,4,(ssize_t)sizeof(double),(tnder_)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*convenience_9w).d2_-dnsdata_13st ),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(matder_),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*convenience_9w).d2_-dnsdata_13st ));};}
}iy_+=1;};}
if( (prev_==NULL) ){ { memcpy(dnsdata_13st-(ssize_t)sizeof(struct convenience_s2)+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d1_-dnsdata_13st,dnsdata_13st+d14m1_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1)); memcpy(dnsdata_13st-(ssize_t)sizeof(struct convenience_s2)+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d2_-dnsdata_13st,dnsdata_13st+d24m1_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1)); memcpy(dnsdata_13st+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d1_-dnsdata_13st,dnsdata_13st+d140_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1)); memcpy(dnsdata_13st+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d2_-dnsdata_13st,dnsdata_13st+d240_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));}};
if( (next_==NULL)  ){ { memcpy(dnsdata_13st+ny_*(ssize_t)sizeof(struct convenience_s2)+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d1_-dnsdata_13st,dnsdata_13st+d14n_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  memcpy(dnsdata_13st+ny_*(ssize_t)sizeof(struct convenience_s2)+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d2_-dnsdata_13st,dnsdata_13st+d24n_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  memcpy(dnsdata_13st+(ny_+1)*(ssize_t)sizeof(struct convenience_s2)+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d1_-dnsdata_13st,dnsdata_13st+d14np1_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1)); memcpy(dnsdata_13st+(ny_+1)*(ssize_t)sizeof(struct convenience_s2)+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d2_-dnsdata_13st,dnsdata_13st+d24np1_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));}};

convenience: 

convenience_exit:;


fieldname_=0;atblockexit(fieldname_f,condfree,fieldname_); if(!((fputs("nfmin? ",stderr),fflush(stderr),scanrec(stdin," %d",&nfmin_)>0) &&(fputs("nfmax? ",stderr),fflush(stderr),scanrec(stdin," %d",&nfmax_)>0) &&(fputs("dn? ",stderr),fflush(stderr),scanrec(stdin," %d",&dn_)>0)))ioerr(stdin);while(getc(stdin)!='\n'){};
nftot_=(((nfmax_-nfmin_) / dn_))+1;
outfile_=NULL;atblockexit(outfile_f,errfclose,&outfile_);post_1h=nzd_-1;
post_2h=ny_+1;
post_3i=(ssize_t)sizeof(double)*9*(post_2h-(-1)+1);
post_4i=post_3i*(post_1h+1);
post_5st=(-1)*(ssize_t)sizeof(double)*9+(ssize_t)sizeof(double);

meangrad_=mmap(NULL,post_4i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(meangrad_==MAP_FAILED)errmalloc();meangrad_-=post_5st;atblockexit(meangrad_f,meangrad_free,(void*)meangrad_);memset(post_5st+meangrad_,0,post_4i);post_6h=nzd_-1;
post_7h=ny_+1;
post_8i=(ssize_t)sizeof(double)*3*(post_7h-(-1)+1);
post_9i=post_8i*(post_6h+1);
post_10st=(-1)*(ssize_t)sizeof(double)*3+(ssize_t)sizeof(double);

mean_=mmap(NULL,post_9i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(mean_==MAP_FAILED)errmalloc();mean_-=post_10st;atblockexit(mean_f,mean_free,(void*)mean_);memset(post_10st+mean_,0,post_9i);post_11h=nzd_-1;
post_12h=ny_+1;
post_13i=(ssize_t)sizeof(double)*3*(post_12h-(-1)+1);
post_14i=post_13i*(post_11h+1);

meanF_=mmap(NULL,post_14i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(meanF_==MAP_FAILED)errmalloc();meanF_-=post_10st;atblockexit(meanF_f,meanF_free,(void*)meanF_);memset(post_10st+meanF_,0,post_14i);post_15h=nzd_-1;
post_16h=ny_+1;
post_17i=(ssize_t)sizeof(double)*6*(post_16h-(-1)+1);
post_18i=post_17i*(post_15h+1);
post_19st=(-1)*(ssize_t)sizeof(double)*6+(ssize_t)sizeof(double);

var_=mmap(NULL,post_18i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(var_==MAP_FAILED)errmalloc();var_-=post_19st;atblockexit(var_f,var_free,(void*)var_);memset(post_19st+var_,0,post_18i);post_20h=nx_;
post_21l= - nz_;
post_22h=nz_;
post_23i=(ssize_t)sizeof(struct COMPLEX_)*(2+1)*((dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1);
post_24i=post_23i*(post_22h-post_21l+1);
post_25i=post_24i*(post_20h+1);
post_26st=(dnsdata_4nyl-2)*(ssize_t)sizeof(struct COMPLEX_)*(2+1);
post_27st=post_21l*post_23i+post_26st;

F_=mmap(NULL,post_25i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(F_==MAP_FAILED)errmalloc();F_-=post_27st;atblockexit(F_f,F_free,(void*)F_);memset(post_27st+F_,0,post_25i);post_28h=nxd_-1;
post_29h=nzd_-1;
post_30i=(ssize_t)sizeof(struct COMPLEX_)*(2+1)*(post_29h+1);
post_31i=post_30i*(post_28h+1);

Fd_=mmap(NULL,post_31i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(Fd_==MAP_FAILED)errmalloc();atblockexit(Fd_f,Fd_free,(void*)Fd_);memset(Fd_,0,post_31i);post_32h=nx_;
post_33l= - nz_;
post_34h=nz_;
post_35i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1)*((dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1);
post_36i=post_35i*(post_34h-post_33l+1);
post_37i=post_36i*(post_32h+1);
post_38st=(dnsdata_4nyl-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1);
post_39st=post_33l*post_35i+post_38st;

Vder_=mmap(NULL,post_37i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(Vder_==MAP_FAILED)errmalloc();Vder_-=post_39st;atblockexit(Vder_f,Vder_free,(void*)Vder_);memset(post_39st+Vder_,0,post_37i);post_40h=nxd_-1;
post_41h=nzd_-1;
post_42i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1)*(post_41h+1);
post_43i=post_42i*(post_40h+1);

Vderd_=mmap(NULL,post_43i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(Vderd_==MAP_FAILED)errmalloc();atblockexit(Vderd_f,Vderd_free,(void*)Vderd_);memset(Vderd_,0,post_43i);files:;  {int n_=nfmin_  ;while(n_<=nfmax_){
  ssize_t post_45i;
struct freefunc post_44f;char *post_44;
ssize_t post_47i;
struct freefunc post_46f;char *post_46;
post_45i=(snprintf(NULL,0,"""Dati.cart.""%d"".out""",n_)+1+1);

post_44=malloc(post_45i);if(post_44==NULL)errmalloc();atblockexit(post_44f,free,post_44);snprintf(post_44,snprintf(NULL,0,"""Dati.cart.""%d"".out""",n_)+1+1,"""Dati.cart.""%d"".out""",n_);  if(fieldname_ )free(fieldname_ );fieldname_ =strndup(post_44,snprintf(NULL,0,"""Dati.cart.""%d"".out""",n_)+1+1);
  convenience_13read_field_fortran(fieldname_,0,dnsdata_47h,dnsdata_51i,dnsdata_48l,dnsdata_49h,dnsdata_50i,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),0,((0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/,(ssize_t)sizeof(struct COMPLEX_),V_);
  convenience_16velocity_gradient(0,post_32h,post_36i,post_33l,post_34h,post_35i,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),Vder_);
  post_47i=(snprintf(NULL,0,"""Force.cart.""%d"".out""",n_)+1+1);

post_46=malloc(post_47i);if(post_46==NULL)errmalloc();atblockexit(post_46f,free,post_46);snprintf(post_46,snprintf(NULL,0,"""Force.cart.""%d"".out""",n_)+1+1,"""Force.cart.""%d"".out""",n_);  if(fieldname_ )free(fieldname_ );fieldname_ =strndup(post_46,snprintf(NULL,0,"""Force.cart.""%d"".out""",n_)+1+1);
  convenience_13read_field_fortran(fieldname_,0,post_20h,post_24i,post_21l,post_22h,post_23i,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*(2+1),0,2,(ssize_t)sizeof(struct COMPLEX_),F_);
  fflush(NULL); ismp_=0  ;while(ismp_<4-1&&fork()){ismp_+=1;;};{

   {int iy_=dnsdata_4nyl-2  ;while(iy_<=dnsdata_5nyh+2){
     {int ix_=(ismp_*(nx_+1) / 4 ) ;while(ix_<=((ismp_+1)*(nx_+1) / 4 )-1){
      int post_48h;
int post_49h;
        int post_52l;
int post_53h;
ssize_t post_54st;
ssize_t post_55i;
int post_56l;
int post_57l;

      int post_61h;
int post_62h;
        int post_65l;
int post_66h;
ssize_t post_67st;
ssize_t post_68i;
int post_69l;
int post_70l;

      int post_73h;
int post_74h;
  int post_77l;
int post_78h;
ssize_t post_79st;
ssize_t post_80i;
int post_81l;
int post_82l;

      post_48h=nz_;
post_49h=nz_;
{char *post_51_;

post_51_=iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+ix_*dnsdata_51i+V_; {char *post_50_=ix_*dnsdata_41i+Vd_;int post_50_1=post_48h; do{{ memcpy(post_50_,post_51_,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)); post_51_ =dnsdata_50i+post_51_;}post_50_+=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);post_50_1--;}while(post_50_1>=0);}}post_52l=nz_+1;
post_53h=nzd_-nz_-1;
post_54st=post_52l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);
post_55i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)*(post_53h-post_52l+1);
memset(post_54st+ix_*dnsdata_41i+Vd_,0,post_55i);     post_56l= - nz_;
post_57l= - nz_;
{char *post_59_;

post_59_=post_56l*dnsdata_50i+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+ix_*dnsdata_51i+V_; {char *post_58_=post_56l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+nzd_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+ix_*dnsdata_41i+Vd_;int post_58_1=(-1)-post_56l; do{{ memcpy(post_58_,post_59_,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)); post_59_ =dnsdata_50i+post_59_;}post_58_+=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);post_58_1--;}while(post_58_1>=0);}}{    char *post_60w;
post_60w=ix_*dnsdata_41i+Vd_;
{  {fft_1IFT(0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+post_60w),0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+post_60w));};  }{  {fft_1IFT(0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+post_60w),0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+post_60w));};  }{  {fft_1IFT(0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_60w),0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_60w));};  }}
      post_61h=nz_;
post_62h=nz_;
{char *post_64_;

post_64_=iy_*(ssize_t)sizeof(struct COMPLEX_)*(2+1)+ix_*post_24i+F_; {char *post_63_=ix_*post_30i+Fd_;int post_63_1=post_61h; do{{ memcpy(post_63_,post_64_,(ssize_t)sizeof(struct COMPLEX_)*(2+1)); post_64_ =post_23i+post_64_;}post_63_+=(ssize_t)sizeof(struct COMPLEX_)*(2+1);post_63_1--;}while(post_63_1>=0);}}post_65l=nz_+1;
post_66h=nzd_-nz_-1;
post_67st=post_65l*(ssize_t)sizeof(struct COMPLEX_)*(2+1);
post_68i=(ssize_t)sizeof(struct COMPLEX_)*(2+1)*(post_66h-post_65l+1);
memset(post_67st+ix_*post_30i+Fd_,0,post_68i);     post_69l= - nz_;
post_70l= - nz_;
{char *post_72_;

post_72_=post_69l*post_23i+iy_*(ssize_t)sizeof(struct COMPLEX_)*(2+1)+ix_*post_24i+F_; {char *post_71_=post_69l*(ssize_t)sizeof(struct COMPLEX_)*(2+1)+nzd_*(ssize_t)sizeof(struct COMPLEX_)*(2+1)+ix_*post_30i+Fd_;int post_71_1=(-1)-post_69l; do{{ memcpy(post_71_,post_72_,(ssize_t)sizeof(struct COMPLEX_)*(2+1)); post_72_ =post_23i+post_72_;}post_71_+=(ssize_t)sizeof(struct COMPLEX_)*(2+1);post_71_1--;}while(post_71_1>=0);}} {int i_=0  ;do{{ {fft_1IFT(0,post_29h,(ssize_t)sizeof(struct COMPLEX_)*(2+1),(i_*(ssize_t)sizeof(struct COMPLEX_)+ix_*post_30i+Fd_),0,post_29h,(ssize_t)sizeof(struct COMPLEX_)*(2+1),(i_*(ssize_t)sizeof(struct COMPLEX_)+ix_*post_30i+Fd_));} ;}i_+=1;}while(i_<=2 );}
      post_73h=nz_;
post_74h=nz_;
{char *post_76_;

post_76_=iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1)+ix_*post_36i+Vder_; {char *post_75_=ix_*post_42i+Vderd_;int post_75_1=post_73h; do{{ memcpy(post_75_,post_76_,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1)); post_76_ =post_35i+post_76_;}post_75_+=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1);post_75_1--;}while(post_75_1>=0);}}post_77l=nz_+1;
post_78h=nzd_-nz_-1;
post_79st=post_77l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1);
post_80i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1)*(post_78h-post_77l+1);
memset(post_79st+ix_*post_42i+Vderd_,0,post_80i);  post_81l= - nz_;
post_82l= - nz_;
{char *post_84_;

post_84_=post_81l*post_35i+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1)+ix_*post_36i+Vder_; {char *post_83_=post_81l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1)+nzd_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1)+ix_*post_42i+Vderd_;int post_83_1=(-1)-post_81l; do{{ memcpy(post_83_,post_84_,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1)); post_84_ =post_35i+post_84_;}post_83_+=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1);post_83_1--;}while(post_83_1>=0);}}{ char *post_85w;
post_85w=ix_*post_42i+Vderd_;
{  {fft_1IFT(0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+post_85w),0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+post_85w));};  }{  {fft_1IFT(0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_85w),0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_85w));};  }{  {fft_1IFT(0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_85w),0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_85w));};  }{  {fft_1IFT(0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+post_85w),0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+post_85w));};  }{  {fft_1IFT(0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_85w),0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_85w));};  }{  {fft_1IFT(0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_85w),0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_85w));};  }{  {fft_1IFT(0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_85w),0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_85w));};  }{  {fft_1IFT(0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_85w),0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_85w));};  }{  {fft_1IFT(0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_85w),0,post_41h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_85w));};  }}
    ix_+=1;};}
    if( ismp_==0 ){ int post_86l;
int post_87h;
ssize_t post_88st;
ssize_t post_89i;
int post_90l;
int post_91h;
ssize_t post_92st;
ssize_t post_93i;
int post_94l;
int post_95h;
ssize_t post_96st;
ssize_t post_97i;
post_86l=nx_+1;
post_87h=nxd_-1;
post_88st=post_86l*dnsdata_41i;
post_89i=dnsdata_41i*(post_87h-post_86l+1);
memset(post_88st+Vd_,0,post_89i); post_90l=nx_+1;
post_91h=nxd_-1;
post_92st=post_90l*post_42i;
post_93i=post_42i*(post_91h-post_90l+1);
memset(post_92st+Vderd_,0,post_93i); post_94l=nx_+1;
post_95h=nxd_-1;
post_96st=post_94l*post_30i;
post_97i=post_30i*(post_95h-post_94l+1);
memset(post_96st+Fd_,0,post_97i);};
    {
  register int md98;
while(!((*barrier_)==(ismp_)))sigsuspend(&oldmask);
  (*barrier_)=(md98=((ismp_)+1) % (4),md98>=0?md98:md98+(4));  kill(0,SIGUSR1);
  while(!((*barrier_)<=(ismp_)))sigsuspend(&oldmask);
};
     {int iz_=(ismp_*(post_41h+1) / 4 ) ;do{{
      double post_101;
double post_102;
double post_103;
double post_105;
double post_107;
double post_109;
double post_110;
double post_111;
double post_112;
{ char *post_99w;
post_99w=iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1)+Vderd_;
{  {fft_3RFT(0,post_40h,post_42i,(0+post_99w),0,post_40h,post_42i,(0+post_99w));};  }{  {fft_3RFT(0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_99w),0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_99w));};  }{  {fft_3RFT(0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_99w),0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_99w));};  }{  {fft_3RFT(0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+post_99w),0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+post_99w));};  }{  {fft_3RFT(0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_99w),0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_99w));};  }{  {fft_3RFT(0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_99w),0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_99w));};  }{  {fft_3RFT(0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_99w),0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_99w));};  }{  {fft_3RFT(0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_99w),0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_99w));};  }{  {fft_3RFT(0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_99w),0,post_40h,post_42i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_99w));};  }}
       {int i_=0  ;do{{ {fft_3RFT(0,post_28h,post_30i,(i_*(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*(2+1)+Fd_),0,post_28h,post_30i,(i_*(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*(2+1)+Fd_));} ;}i_+=1;}while(i_<=2 );}
      {    char *post_100w;
post_100w=iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+Vd_;
{  {fft_3RFT(0,dnsdata_39h,dnsdata_41i,(0+post_100w),0,dnsdata_39h,dnsdata_41i,(0+post_100w));};  }{  {fft_3RFT(0,dnsdata_39h,dnsdata_41i,(0+(ssize_t)sizeof(struct COMPLEX_)+post_100w),0,dnsdata_39h,dnsdata_41i,(0+(ssize_t)sizeof(struct COMPLEX_)+post_100w));};  }{  {fft_3RFT(0,dnsdata_39h,dnsdata_41i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_100w),0,dnsdata_39h,dnsdata_41i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+post_100w));};  }}
       post_101=0.; {int ix_=0  ;do{{(*&post_101)+=(*fft_15REALIFIED(0,dnsdata_39h,dnsdata_41i,0+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+Vd_,ix_) );}ix_+=1;}while(ix_<=2*nxd_-1);}(*(double *)((ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*3+iz_*post_8i+mean_))+=post_101/(double)((2*nxd_));
       post_102=0.; {int ix_=0  ;do{{(*&post_102)+=(*fft_15REALIFIED(0,dnsdata_39h,dnsdata_41i,0+(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+Vd_,ix_) );}ix_+=1;}while(ix_<=2*nxd_-1);}(*(double *)(2*(ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*3+iz_*post_8i+mean_))+=post_102/(double)((2*nxd_));
       post_103=0.; {int ix_=0  ;do{{(*&post_103)+=(*fft_15REALIFIED(0,dnsdata_39h,dnsdata_41i,0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+Vd_,ix_) );}ix_+=1;}while(ix_<=2*nxd_-1);}(*(double *)(3*(ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*3+iz_*post_8i+mean_))+=post_103/(double)((2*nxd_));
       post_105=0.; {int ix_=0  ;do{{double *post_104q;
post_104q=fft_15REALIFIED(0,dnsdata_39h,dnsdata_41i,0+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+Vd_,ix_);
(*&post_105)+=((*post_104q)*(*post_104q));}ix_+=1;}while(ix_<=2*nxd_-1);}(*(double *)((ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*6+iz_*post_17i+var_))+=post_105/(double)((2*nxd_));
       post_107=0.; {int ix_=0  ;do{{double *post_106q;
post_106q=fft_15REALIFIED(0,dnsdata_39h,dnsdata_41i,0+(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+Vd_,ix_);
(*&post_107)+=((*post_106q)*(*post_106q));}ix_+=1;}while(ix_<=2*nxd_-1);}(*(double *)(2*(ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*6+iz_*post_17i+var_))+=post_107/(double)((2*nxd_));
       post_109=0.; {int ix_=0  ;do{{double *post_108q;
post_108q=fft_15REALIFIED(0,dnsdata_39h,dnsdata_41i,0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+Vd_,ix_);
(*&post_109)+=((*post_108q)*(*post_108q));}ix_+=1;}while(ix_<=2*nxd_-1);}(*(double *)(3*(ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*6+iz_*post_17i+var_))+=post_109/(double)((2*nxd_));
       post_110=0.; {int ix_=0  ;do{{(*&post_110)+=(*fft_15REALIFIED(0,dnsdata_39h,dnsdata_41i,0+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+Vd_,ix_))*(*fft_15REALIFIED(0,dnsdata_39h,dnsdata_41i,0+(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+Vd_,ix_) );}ix_+=1;}while(ix_<=2*nxd_-1);}(*(double *)(4*(ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*6+iz_*post_17i+var_))+=post_110/(double)((2*nxd_));
       post_111=0.; {int ix_=0  ;do{{(*&post_111)+=(*fft_15REALIFIED(0,dnsdata_39h,dnsdata_41i,0+(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+Vd_,ix_))*(*fft_15REALIFIED(0,dnsdata_39h,dnsdata_41i,0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+Vd_,ix_) );}ix_+=1;}while(ix_<=2*nxd_-1);}(*(double *)(5*(ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*6+iz_*post_17i+var_))+=post_111/(double)((2*nxd_));
       post_112=0.; {int ix_=0  ;do{{(*&post_112)+=(*fft_15REALIFIED(0,dnsdata_39h,dnsdata_41i,0+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+Vd_,ix_))*(*fft_15REALIFIED(0,dnsdata_39h,dnsdata_41i,0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+Vd_,ix_) );}ix_+=1;}while(ix_<=2*nxd_-1);}(*(double *)(6*(ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*6+iz_*post_17i+var_))+=post_112/(double)((2*nxd_));
       {int iii_=0  ;do{{ double post_113;
 post_113=0.; {int ix_=0  ;do{{(*&post_113)+=(*fft_15REALIFIED(0,post_40h,post_42i,iii_*(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA1*/+1)+Vderd_,ix_) );}ix_+=1;}while(ix_<=2*nxd_-1);}(*(double *)((iii_+1)*(ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*9+iz_*post_3i+meangrad_))+=post_113/(double)((2*nxd_));}iii_+=1;}while(iii_<=8);}
       {int iii_=0  ;do{{ double post_114;
 post_114=0.; {int ix_=0  ;do{{(*&post_114)+=(*fft_15REALIFIED(0,post_28h,post_30i,iii_*(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*(2+1)+Fd_,ix_) );}ix_+=1;}while(ix_<=2*nxd_-1);}(*(double *)((iii_+1)*(ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*3+iz_*post_13i+meanF_))+=post_114/(double)((2*nxd_));}iii_+=1;}while(iii_<=2);}
    }iz_+=1;}while(iz_<=((ismp_+1)*(post_41h+1) / 4 )-1);}
    {
  register int md115;
while(!((*barrier_)==(ismp_)))sigsuspend(&oldmask);
  (*barrier_)=(md115=((ismp_)+1) % (4),md115>=0?md115:md115+(4));  kill(0,SIGUSR1);
  while(!((*barrier_)<=(ismp_)))sigsuspend(&oldmask);
};
  iy_+=1;};}
  } if(ismp_<4-1)exit(0);;
 ismp_=0  ;while(ismp_<4-1){if(wait(NULL)<0)traphandler("wait");ismp_+=1;;};
freemem(&Vderd_f);n_+=1;};}files_exit:;
post_116m=1./(double)(nftot_);
{  {int _117i_=post_6h;do{{int _118i_=(-1);do{{int _119i_=1;do{{(*(double *)(_119i_*(ssize_t)sizeof(double)+_118i_*(ssize_t)sizeof(double)*3+_117i_*post_8i+mean_))*=post_116m ;}_119i_++;}while(_119i_<=3);}_118i_++;}while(_118i_<=post_7h);}_117i_--;}while(_117i_>=0);}}  post_120m=1./(double)(nftot_);
{  {int _121i_=post_15h;do{{int _122i_=(-1);do{{int _123i_=1;do{{(*(double *)(_123i_*(ssize_t)sizeof(double)+_122i_*(ssize_t)sizeof(double)*6+_121i_*post_17i+var_))*=post_120m ;}_123i_++;}while(_123i_<=6);}_122i_++;}while(_122i_<=post_16h);}_121i_--;}while(_121i_>=0);}}  post_124m=1./(double)(nftot_);
{  {int _125i_=post_1h;do{{int _126i_=(-1);do{{int _127i_=1;do{{(*(double *)(_127i_*(ssize_t)sizeof(double)+_126i_*(ssize_t)sizeof(double)*9+_125i_*post_3i+meangrad_))*=post_124m ;}_127i_++;}while(_127i_<=9);}_126i_++;}while(_126i_<=post_2h);}_125i_--;}while(_125i_>=0);}}  post_128m=1./(double)(nftot_);
{  {int _129i_=post_11h;do{{int _130i_=(-1);do{{int _131i_=1;do{{(*(double *)(_131i_*(ssize_t)sizeof(double)+_130i_*(ssize_t)sizeof(double)*3+_129i_*post_13i+meanF_))*=post_128m ;}_131i_++;}while(_131i_<=3);}_130i_++;}while(_130i_<=post_12h);}_129i_--;}while(_129i_>=0);}}
errfopen(&outfile_,"post.bin",O_RDWR|O_CREAT|O_TRUNC);
fwrite132_=4;fwrite133_=3;fwrite134_=ny_+3;fwrite135_=3;fwrite136_=3;fwrite137_=ny_+3;fwrite138_=6;fwrite139_=3;fwrite140_=ny_+3;fwrite141_=9;fwrite142_=3;fwrite143_=ny_+3;fwrite144_=3;fwrite(&fwrite132_,(ssize_t)sizeof(int),1,outfile_);fwrite(&fwrite133_,(ssize_t)sizeof(int),1,outfile_);fwrite(&nzd_,(ssize_t)sizeof(int),1,outfile_);fwrite(&fwrite134_,(ssize_t)sizeof(int),1,outfile_);fwrite(&fwrite135_,(ssize_t)sizeof(int),1,outfile_); fwrite(&fwrite136_,(ssize_t)sizeof(int),1,outfile_);fwrite(&nzd_,(ssize_t)sizeof(int),1,outfile_);fwrite(&fwrite137_,(ssize_t)sizeof(int),1,outfile_);fwrite(&fwrite138_,(ssize_t)sizeof(int),1,outfile_); fwrite(&fwrite139_,(ssize_t)sizeof(int),1,outfile_);fwrite(&nzd_,(ssize_t)sizeof(int),1,outfile_);fwrite(&fwrite140_,(ssize_t)sizeof(int),1,outfile_);fwrite(&fwrite141_,(ssize_t)sizeof(int),1,outfile_); fwrite(&fwrite142_,(ssize_t)sizeof(int),1,outfile_);fwrite(&nzd_,(ssize_t)sizeof(int),1,outfile_);fwrite(&fwrite143_,(ssize_t)sizeof(int),1,outfile_);fwrite(&fwrite144_,(ssize_t)sizeof(int),1,outfile_);
fwrite(post_10st+mean_,post_9i,1,outfile_);
fwrite(post_19st+var_,post_18i,1,outfile_);
fwrite(post_5st+meangrad_,post_4i,1,outfile_);
fwrite(post_10st+meanF_,post_14i,1,outfile_);
freemem(es);return 0;}
