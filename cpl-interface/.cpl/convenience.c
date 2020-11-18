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

extern char errortemp_[(80+1)];
struct arrptr{int l,h; ssize_t i; char *a;};struct dynptr{void* p; int t;};extern char INTERRUPT;extern void (*traphandler)(const char *);struct freefunc{struct freefunc *next; void (*f)(void *); void *ptr;};extern struct freefunc *freestack;
#define freemem(upto) while(freestack!=upto){freestack->f(freestack->ptr); freestack=freestack->next;}

#define atblockexit(name,func,p) name.f=func;name.ptr=p;name.next=freestack;freestack=&name

#define mmovefrom(var,buf,type) *(type *)(buf)=*var

#define mmoveto(var,buf,type) *var=*(type *)(buf)

#define mainstart void default_traphandler(const char *errormessage){   freemem(NULL);   if(errormessage[0]){     printERR;     exit(EXIT_FAILURE);   }else exit(EXIT_SUCCESS); } int main(int argc, char **argv){ struct freefunc* es; {void (*sig)(int); if((sig=signal(SIGSEGV,trapsignal))!=SIG_DFL)signal(SIGSEGV,sig); if((sig=signal(SIGFPE,trapsignal))!=SIG_DFL)signal(SIGFPE,sig); if((sig=signal(SIGILL,trapsignal))!=SIG_DFL)signal(SIGILL,sig); if((sig=signal(SIGINT,trapsignal))!=SIG_DFL)signal(SIGINT,sig); else {traphandler=default_traphandler;       freestack=NULL;       feenableexcept(fpe);      }; } es=freestack;
extern void traprestore(void *ptr);extern void condfree(void *ptr);extern int dynptrerr(int type);extern void *errmalloc();extern void ioerr(FILE *fil);extern void errfclose(void *voidf);extern void errfopen(FILE **f, const char *name, int mode);extern int scanrec(FILE *f, const char *format, void *var) ;extern int myfgets(char *name, char *var, char *varend, FILE *f) ;extern int mygetline(char *name, char **var, FILE *f) ;extern void trapsignal(int signum);

extern double gamma_;
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
/*** # error "Adjust your <bits/endian.h> defines"
uint16_t window ununderstood ***/
/*** enum ununderstood ***/
/*** {
 TCP_NO_QUEUE,
 TCP_RECV_QUEUE,
 TCP_SEND_QUEUE,
 TCP_QUEUES_NR,
}; ununderstood ***/

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
/**/

struct DERPRODS_{struct COMPLEX_ ux2_;struct COMPLEX_ vx2_;struct COMPLEX_ wx2_;struct COMPLEX_ uy2_;struct COMPLEX_ vy2_;struct COMPLEX_ wy2_;struct COMPLEX_ uz2_;struct COMPLEX_ vz2_;struct COMPLEX_ wz2_;};
struct DERPRODSEXT_{struct COMPLEX_ ux2_;struct COMPLEX_ vx2_;struct COMPLEX_ wx2_;struct COMPLEX_ uy2_;struct COMPLEX_ vy2_;struct COMPLEX_ wy2_;struct COMPLEX_ uz2_;struct COMPLEX_ vz2_;struct COMPLEX_ wz2_;struct COMPLEX_ uxvx_;struct COMPLEX_ uyvy_;struct COMPLEX_ uzvz_;struct COMPLEX_ uxwx_;struct COMPLEX_ uywy_;struct COMPLEX_ uzwz_;struct COMPLEX_ vxwx_;struct COMPLEX_ vywy_;struct COMPLEX_ vzwz_;};

struct convenience_s2{char d1_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d2_[(ssize_t)sizeof(double)*(2-(-2)+1)];};ssize_t convenience_3i;
ssize_t convenience_4st;
struct freefunc derivs_standalone_f;char *derivs_standalone_;





int convenience_5M;
int convenience_6m;
int convenience_7;
int convenience_8;
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

void convenience_10ByteSwap(float *xxx_){{struct freefunc* es=freestack;

  register char a;
  register char * b = (char *) xxx_;
  register int  i = 0;
  register int  j = sizeof(*xxx_)-1;
  while (i<j)
    {
     a = b[i];
     b[i] = b[j];
     b[j] = a;
     i++, j--;
     }

  
}}

void convenience_11fourier2physical(const int plane_l,const int plane_h,const ssize_t plane_i,const int plane__l,const int plane__h,const ssize_t plane__i,char *plane___,const int planed_l,const int planed_h,const ssize_t planed_i,const int planed__l,const int planed__h,const ssize_t planed__i,char *planed___){{struct freefunc* es=freestack;
   {int ix_=  0  ;while(ix_<=nx_){
    int _20h;
int _21h;

    int _24l;
int _25l;

    _20h=nz_;
_21h=nz_;
{char *_23_;

_23_=ix_*plane_i+plane___; {char *_22_=ix_*planed_i+planed___;int _22_1=_20h; do{{ {register double temp=(*(struct COMPLEX_*)(_23_)).REAL_;(*(struct COMPLEX_ *)(_22_)).IMAG_=(*(struct COMPLEX_*)(_23_)).IMAG_;(*(struct COMPLEX_ *)(_22_)).REAL_=temp;}; _23_ =plane__i+_23_;}_22_+=planed__i;_22_1--;}while(_22_1>=0);}}_24l= - nz_;
_25l= - nz_;
{char *_27_;

_27_=_24l*plane__i+ix_*plane_i+plane___; {char *_26_=_24l*planed__i+nzd_*planed__i+ix_*planed_i+planed___;int _26_1=(-1)-_24l; do{{ {register double temp=(*(struct COMPLEX_*)(_27_)).REAL_;(*(struct COMPLEX_ *)(_26_)).IMAG_=(*(struct COMPLEX_*)(_27_)).IMAG_;(*(struct COMPLEX_ *)(_26_)).REAL_=temp;}; _27_ =plane__i+_27_;}_26_+=planed__i;_26_1--;}while(_26_1>=0);}}{fft_1IFT(planed__l,planed__h,planed__i,(ix_*planed_i+planed___),planed__l,planed__h,planed__i,(ix_*planed_i+planed___));};
  ix_+=1;};}
    {int iz_=planed__l;do{{ {fft_3RFT(planed_l,planed_h,planed_i,(iz_*planed__i+planed___),planed_l,planed_h,planed_i,(iz_*planed__i+planed___));} ;}iz_++;}while(iz_<=planed__h);}
}}

double convenience_18yintf(const int f_l,const int f_h,const ssize_t f_i,char *f__){{struct freefunc* es=freestack;double RESULT_;
  RESULT_=0.;
  /*! Change to adapt to both cases nproc=1 and nproc>1 in the same run*/
   {int iy_=((dnsdata_4nyl / 2))*2+1  ;while(iy_<=dnsdata_5nyh ){
   double _20yp1;
/*yp1=_20yp1*/
  double _21ym1;
/*ym1=_21ym1*/

   double _22a1;
/*a1=_22a1*/

   double _23a3;
/*a3=_23a3*/

   double _24a2;
/*a2=_24a2*/

   _20yp1=(*(double *)((iy_+1)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_));
_21ym1=(*(double *)((iy_-1)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_));
_22a1=-1./3.*_21ym1+1./6.*_20yp1+1./6.*_20yp1*_20yp1/_21ym1;
_23a3=1./3.*_20yp1-1./6.*_21ym1-1./6.*_21ym1*_21ym1/_20yp1;
_24a2=_20yp1-_21ym1-_22a1-_23a3;
RESULT_+=_22a1*(*(double *)((iy_-1)*f_i+f__)) + _24a2*(*(double *)(iy_*f_i+f__)) + _23a3*(*(double *)((iy_+1)*f_i+f__));
  iy_+= 2;};}
return RESULT_;}}

void convenience_13read_field_fortran(char *field_name_,const int R_l,const int R_h,const ssize_t R_i,const int R__l,const int R__h,const ssize_t R__i,const int R___l,const int R___h,const ssize_t R___i,const int R____l,const int R____h,const ssize_t R____i,char *R_____){{struct freefunc* es=freestack;
  int sz_;

  struct freefunc headerf_f;FILE *headerf_; 

  int dum_;
  double timei_;

  int _24h;
int _25h;
int _26l;
int _27h;
int _28h;
off_t _29i;
off_t _30i;
off_t _31i;
off_t _33i;
off_t _34i;
off_t _35i;
off_t _36i;
off_t _37i;
off_t _38st;
off_t _39st;
struct freefunc diskffield_f;FILE *diskffield_;

  int _40l;
int _41h;
int _42h;
ssize_t _43i;
ssize_t _44i;
ssize_t _45i;
ssize_t _46st;
struct freefunc fbuf_f;char *fbuf_;

  sz_=(ssize_t)sizeof(int)*3+(ssize_t)sizeof(double)*7;headerf_=NULL;atblockexit(headerf_f,errfclose,&headerf_); errfopen(&headerf_,field_name_,O_RDONLY); {int _t20=3 ;do{{   if(!(fread(0+&dum_ ,(ssize_t)sizeof(int),1, headerf_ )==1))ioerr( headerf_ );}_t20--;}while(_t20>0);}
   {int _t22=7 ;do{{   if(!(fread(0+&timei_ ,(ssize_t)sizeof(double),1, headerf_ )==1))ioerr( headerf_ );}_t22--;}while(_t22>0);}
  if( (next_==NULL) ){  fprintf(stdout,"""Reading field_file""\t%s\t""at time""\t%g",field_name_  ,timei_);putc('\n',stdout);};
  errfclose(&headerf_);
  _24h=sz_-1;
_25h=nx_;
_26l= - nz_;
_27h=nz_;
_28h=ny_+1;
_29i=(ssize_t)sizeof(struct COMPLEX_)*(_28h-(-1)+1);
_30i=_29i*(_27h-_26l+1);
_31i=_30i*(_25h+1);
_33i=(_24h+1);
_34i=(ssize_t)sizeof(struct COMPLEX_)*(_28h-(-1)+1);
_35i=_34i*(_27h-_26l+1);
_36i=_35i*(_25h+1);
_37i=_36i*(2+1);
_38st=(-1)*(ssize_t)sizeof(struct COMPLEX_);
_39st=_26l*_29i+_38st;
diskffield_=NULL;atblockexit(diskffield_f,errfclose,&diskffield_);errfopen(&diskffield_,field_name_,O_RDONLY);
  _40l= - nz_;
_41h=nz_;
_42h=ny_+1;
_43i=(ssize_t)sizeof(struct COMPLEX_)*(_42h-(-1)+1);
_44i=_43i*(_41h-_40l+1);
_45i=_44i*(2+1);
_46st=_40l*_43i+_38st;

fbuf_=malloc(_45i);if(fbuf_==NULL)errmalloc();fbuf_-=_46st;atblockexit(fbuf_f,free,fbuf_+_46st); {int ix_=0  ;do{{ { 
    int _49l;
int _50h;

    int _55l;
int _56h;

    int _61l;
int _62h;

   {int i_=0  ;do{{   {int _47i_=_40l;do{{if((ssize_t)sizeof(struct COMPLEX_)==(ssize_t)sizeof(struct COMPLEX_)&&(ssize_t)sizeof(struct COMPLEX_)==(ssize_t)sizeof(struct COMPLEX_)){if(!(fseeko(diskffield_,_47i_*(off_t)_29i+ix_*(off_t)_30i+i_*(off_t)_31i+(off_t)(_33i-_39st+(ssize_t)(char*)(void*)(0))+_38st,SEEK_SET)==0&&fread(_47i_*_43i+i_*_44i+fbuf_+_38st,(ssize_t)sizeof(struct COMPLEX_),_42h-(-1)+1,diskffield_)==_42h-(-1)+1))ioerr(diskffield_);}else{  {int _48i_=(-1);do{{if(!(fseeko(diskffield_,_48i_*(off_t)(ssize_t)sizeof(struct COMPLEX_)+_47i_*(off_t)_29i+ix_*(off_t)_30i+i_*(off_t)_31i+(off_t)(_33i-_39st+(ssize_t)(char*)(void*)(0)) ,SEEK_SET)==0&&fread((struct COMPLEX_ *)(_48i_*(ssize_t)sizeof(struct COMPLEX_)+_47i_*_43i+i_*_44i+fbuf_),(ssize_t)sizeof(struct COMPLEX_),1,diskffield_)==1))ioerr(diskffield_);}_48i_++;}while(_48i_<=_42h);}};}_47i_++;}while(_47i_<=_41h);}}i_+=1;}while(i_<=2);}
    _49l= - nz_;
_50h=nz_;
{char *_52_;

_52_=_49l*_43i+fbuf_; {char *_51_=_49l*R__i+ix_*R_i+R_____;int _51_1=_50h-_49l; do{{  {char *_54_;

_54_=(dnsdata_4nyl-2)*(ssize_t)sizeof(struct COMPLEX_)+_52_; {char *_53_=(dnsdata_4nyl-2)*R___i+_51_;int _53_1=(dnsdata_5nyh+2)-(dnsdata_4nyl-2); do{{ {register double temp=(*(struct COMPLEX_*)(_54_)).REAL_;(*(struct COMPLEX_ *)(_53_)).IMAG_=(*(struct COMPLEX_*)(_54_)).IMAG_;(*(struct COMPLEX_ *)(_53_)).REAL_=temp;}; _54_ =(ssize_t)sizeof(struct COMPLEX_)+_54_;}_53_+=R___i;_53_1--;}while(_53_1>=0);}}_52_ =_43i+_52_;}_51_+=R__i;_51_1--;}while(_51_1>=0);}}_55l= - nz_;
_56h=nz_;
{char *_58_;

_58_=_55l*_43i+_44i+fbuf_; {char *_57_=_55l*R__i+R____i+ix_*R_i+R_____;int _57_1=_56h-_55l; do{{  {char *_60_;

_60_=(dnsdata_4nyl-2)*(ssize_t)sizeof(struct COMPLEX_)+_58_; {char *_59_=(dnsdata_4nyl-2)*R___i+_57_;int _59_1=(dnsdata_5nyh+2)-(dnsdata_4nyl-2); do{{ {register double temp=(*(struct COMPLEX_*)(_60_)).REAL_;(*(struct COMPLEX_ *)(_59_)).IMAG_=(*(struct COMPLEX_*)(_60_)).IMAG_;(*(struct COMPLEX_ *)(_59_)).REAL_=temp;}; _60_ =(ssize_t)sizeof(struct COMPLEX_)+_60_;}_59_+=R___i;_59_1--;}while(_59_1>=0);}}_58_ =_43i+_58_;}_57_+=R__i;_57_1--;}while(_57_1>=0);}}_61l= - nz_;
_62h=nz_;
{char *_64_;

_64_=_61l*_43i+2*_44i+fbuf_; {char *_63_=_61l*R__i+2*R____i+ix_*R_i+R_____;int _63_1=_62h-_61l; do{{  {char *_66_;

_66_=(dnsdata_4nyl-2)*(ssize_t)sizeof(struct COMPLEX_)+_64_; {char *_65_=(dnsdata_4nyl-2)*R___i+_63_;int _65_1=(dnsdata_5nyh+2)-(dnsdata_4nyl-2); do{{ {register double temp=(*(struct COMPLEX_*)(_66_)).REAL_;(*(struct COMPLEX_ *)(_65_)).IMAG_=(*(struct COMPLEX_*)(_66_)).IMAG_;(*(struct COMPLEX_ *)(_65_)).REAL_=temp;}; _66_ =(ssize_t)sizeof(struct COMPLEX_)+_66_;}_65_+=R___i;_65_1--;}while(_65_1>=0);}}_64_ =_43i+_64_;}_63_+=R__i;_63_1--;}while(_63_1>=0);}}}}ix_+=1;}while(ix_<=nx_);}
freemem(es);}}

void convenience_12read_field_parallel(char *field_name_){{struct freefunc* es=freestack;
  if( (next_==NULL) ){  fprintf(stdout,"""Reading field_file""\t%s",field_name_);putc('\n',stdout);};
  if( !(prev_==NULL) ){  while(!feof( prev_)&&getc( prev_)!='\n'){};};
    errfopen(&diskfield_,field_name_,O_RDWR|O_CREAT);
    {
     ssize_t _20st;
_20st=(dnsdata_4nyl-2)*(ssize_t)sizeof(double);
if((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(diskfield_,(off_t)((ssize_t)sizeof(struct dnsdata_s93)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+_20st,SEEK_SET)==0&&fread((char*)&(*(struct COMPLEX_*)(V_)).REAL_+_20st,(ssize_t)sizeof(double),(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1,diskfield_)==(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1))ioerr(diskfield_);}else{  {int _21i_=(dnsdata_4nyl-2);do{{if(!(fseeko(diskfield_,_21i_*(off_t)(ssize_t)sizeof(double)+(off_t)((ssize_t)sizeof(struct dnsdata_s93)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0)) ,SEEK_SET)==0&&fread((double *)(_21i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)(V_)).REAL_),(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_);}_21i_++;}while(_21i_<=(dnsdata_5nyh+2));}};
     if((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(diskfield_,(off_t)(((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+_20st,SEEK_SET)==0&&fread((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_+_20st,(ssize_t)sizeof(double),(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1,diskfield_)==(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1))ioerr(diskfield_);}else{  {int _22i_=(dnsdata_4nyl-2);do{{if(!(fseeko(diskfield_,_22i_*(off_t)(ssize_t)sizeof(double)+(off_t)(((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0)) ,SEEK_SET)==0&&fread((double *)(_22i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_),(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_);}_22i_++;}while(_22i_<=(dnsdata_5nyh+2));}};
      {int iy_=dnsdata_4nyl-2  ;while(iy_<=dnsdata_5nyh+2){
          {int ix_=dnsdata_47h;do{{int iz_=dnsdata_48l;do{ if(!( (ix_==0 )&&( iz_==0))){ if(!(fseeko(diskfield_,iz_*(off_t)(ssize_t)sizeof(struct VETA_)+ix_*(off_t)dnsdata_91i+iy_*(off_t)dnsdata_92i+(off_t)((((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)+dnsdata_94i)-dnsdata_100st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+(ssize_t)&(*(struct VETA_ *)(0)).v_ ,SEEK_SET)==0&&fread((struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_),(ssize_t)sizeof(struct COMPLEX_),1,diskfield_)==1))ioerr(diskfield_);}iz_++;}while(iz_<=dnsdata_49h);}ix_--;}while(ix_>=0);}
          {int ix_=dnsdata_47h;do{{int iz_=dnsdata_48l;do{ if(!( (ix_==0 )&&( iz_==0))){ if(!(fseeko(diskfield_,iz_*(off_t)(ssize_t)sizeof(struct VETA_)+ix_*(off_t)dnsdata_91i+iy_*(off_t)dnsdata_92i+(off_t)((((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)+dnsdata_94i)-dnsdata_100st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+(ssize_t)&(*(struct VETA_ *)(0)).eta_ ,SEEK_SET)==0&&fread((struct COMPLEX_ *)(0+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_),(ssize_t)sizeof(struct COMPLEX_),1,diskfield_)==1))ioerr(diskfield_);}iz_++;}while(iz_<=dnsdata_49h);}ix_--;}while(ix_>=0);}
     iy_+=1;};}
     errfclose(&diskfield_);
  if( !(next_==NULL) ){  putc('\n', next_);};
  dnsdirect_10vetaTOuvw();
  if( !(prev_==NULL) ){  while(!feof( prev_)&&getc( prev_)!='\n'){};};
    errfopen(&diskfield_,field_name_,O_RDWR|O_CREAT);
    {
     if((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(diskfield_,(off_t)((ssize_t)sizeof(struct dnsdata_s93)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+_20st,SEEK_SET)==0&&fread((char*)&(*(struct COMPLEX_*)(V_)).REAL_+_20st,(ssize_t)sizeof(double),(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1,diskfield_)==(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1))ioerr(diskfield_);}else{  {int _23i_=(dnsdata_4nyl-2);do{{if(!(fseeko(diskfield_,_23i_*(off_t)(ssize_t)sizeof(double)+(off_t)((ssize_t)sizeof(struct dnsdata_s93)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0)) ,SEEK_SET)==0&&fread((double *)(_23i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)(V_)).REAL_),(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_);}_23i_++;}while(_23i_<=(dnsdata_5nyh+2));}};
     if((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(diskfield_,(off_t)(((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+_20st,SEEK_SET)==0&&fread((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_+_20st,(ssize_t)sizeof(double),(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1,diskfield_)==(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1))ioerr(diskfield_);}else{  {int _24i_=(dnsdata_4nyl-2);do{{if(!(fseeko(diskfield_,_24i_*(off_t)(ssize_t)sizeof(double)+(off_t)(((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0)) ,SEEK_SET)==0&&fread((double *)(_24i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_),(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_);}_24i_++;}while(_24i_<=(dnsdata_5nyh+2));}};
     errfclose(&diskfield_);
  if( !(next_==NULL) ){  putc('\n', next_);};
}}}}

void convenience_14read_field(char *field_name_){{struct freefunc* es=freestack;
  if( (next_==NULL) ){  fprintf(stdout,"""Reading field_file""\t%s",field_name_);putc('\n',stdout);};
  if( !(prev_==NULL) ){  while(!feof( prev_)&&getc( prev_)!='\n'){};};
    errfopen(&diskfield_,field_name_,O_RDWR|O_CREAT);
    {
     ssize_t _20st;
_20st=(dnsdata_4nyl-2)*(ssize_t)sizeof(double);
if((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(diskfield_,(off_t)((ssize_t)sizeof(struct dnsdata_s93)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+_20st,SEEK_SET)==0&&fread((char*)&(*(struct COMPLEX_*)(V_)).REAL_+_20st,(ssize_t)sizeof(double),(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1,diskfield_)==(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1))ioerr(diskfield_);}else{  {int _21i_=(dnsdata_4nyl-2);do{{if(!(fseeko(diskfield_,_21i_*(off_t)(ssize_t)sizeof(double)+(off_t)((ssize_t)sizeof(struct dnsdata_s93)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0)) ,SEEK_SET)==0&&fread((double *)(_21i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)(V_)).REAL_),(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_);}_21i_++;}while(_21i_<=(dnsdata_5nyh+2));}};
     if((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(diskfield_,(off_t)(((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+_20st,SEEK_SET)==0&&fread((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_+_20st,(ssize_t)sizeof(double),(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1,diskfield_)==(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1))ioerr(diskfield_);}else{  {int _22i_=(dnsdata_4nyl-2);do{{if(!(fseeko(diskfield_,_22i_*(off_t)(ssize_t)sizeof(double)+(off_t)(((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0)) ,SEEK_SET)==0&&fread((double *)(_22i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_),(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_);}_22i_++;}while(_22i_<=(dnsdata_5nyh+2));}};
      {int iy_=dnsdata_4nyl-2  ;while(iy_<=dnsdata_5nyh+2){
          {int ix_=dnsdata_47h;do{{int iz_=dnsdata_48l;do{ if(!( (ix_==0 )&&( iz_==0))){ if(!(fseeko(diskfield_,iz_*(off_t)(ssize_t)sizeof(struct VETA_)+ix_*(off_t)dnsdata_91i+iy_*(off_t)dnsdata_92i+(off_t)((((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)+dnsdata_94i)-dnsdata_100st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+(ssize_t)&(*(struct VETA_ *)(0)).v_ ,SEEK_SET)==0&&fread((struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_),(ssize_t)sizeof(struct COMPLEX_),1,diskfield_)==1))ioerr(diskfield_);}iz_++;}while(iz_<=dnsdata_49h);}ix_--;}while(ix_>=0);}
          {int ix_=dnsdata_47h;do{{int iz_=dnsdata_48l;do{ if(!( (ix_==0 )&&( iz_==0))){ if(!(fseeko(diskfield_,iz_*(off_t)(ssize_t)sizeof(struct VETA_)+ix_*(off_t)dnsdata_91i+iy_*(off_t)dnsdata_92i+(off_t)((((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)+dnsdata_94i)-dnsdata_100st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+(ssize_t)&(*(struct VETA_ *)(0)).eta_ ,SEEK_SET)==0&&fread((struct COMPLEX_ *)(0+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_),(ssize_t)sizeof(struct COMPLEX_),1,diskfield_)==1))ioerr(diskfield_);}iz_++;}while(iz_<=dnsdata_49h);}ix_--;}while(ix_>=0);}
     iy_+=1;};}
     errfclose(&diskfield_);
  if( !(next_==NULL) ){  putc('\n', next_);};
}}}

void convenience_15read_field_uvw(char *field_name_){{struct freefunc* es=freestack;
   fprintf(stdout,"""Reading field_file""\t%s",field_name_);putc('\n',stdout);
  errfopen(&diskfield_,field_name_,O_RDWR|O_CREAT);
  {
    ssize_t _23st;
 {int iy_=  dnsdata_4nyl-2  ;while(iy_<=dnsdata_5nyh+2){
        {int ix_=dnsdata_47h;do{{ ssize_t _20st;
_20st=dnsdata_48l*(ssize_t)sizeof(struct COMPLEX_);
if(dnsdata_50i==(ssize_t)sizeof(struct COMPLEX_)&&(ssize_t)sizeof(struct VETA_)==(ssize_t)sizeof(struct COMPLEX_)){if(!(fseeko(diskfield_,ix_*(off_t)dnsdata_91i+iy_*(off_t)dnsdata_92i+(off_t)((((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)+dnsdata_94i)-dnsdata_100st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+(ssize_t)&(*(struct VETA_*)(0)).v_+_20st,SEEK_SET)==0&&fread((ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+ix_*dnsdata_51i+V_+_20st,(ssize_t)sizeof(struct COMPLEX_),dnsdata_49h-dnsdata_48l+1,diskfield_)==dnsdata_49h-dnsdata_48l+1))ioerr(diskfield_);}else{  {int _21i_=dnsdata_48l;do{{if(!(fseeko(diskfield_,_21i_*(off_t)(ssize_t)sizeof(struct VETA_)+ix_*(off_t)dnsdata_91i+iy_*(off_t)dnsdata_92i+(off_t)((((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)+dnsdata_94i)-dnsdata_100st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+(ssize_t)&(*(struct VETA_*)(0)).v_ ,SEEK_SET)==0&&fread((struct COMPLEX_ *)(_21i_*dnsdata_50i+(ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+ix_*dnsdata_51i+V_),(ssize_t)sizeof(struct COMPLEX_),1,diskfield_)==1))ioerr(diskfield_);}_21i_++;}while(_21i_<=dnsdata_49h);}};  if(dnsdata_50i==(ssize_t)sizeof(struct COMPLEX_)&&(ssize_t)sizeof(struct VETA_)==(ssize_t)sizeof(struct COMPLEX_)){if(!(fseeko(diskfield_,ix_*(off_t)dnsdata_91i+iy_*(off_t)dnsdata_92i+(off_t)((((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)+dnsdata_94i)-dnsdata_100st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+(ssize_t)&(*(struct VETA_*)(0)).eta_+_20st,SEEK_SET)==0&&fread(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+ix_*dnsdata_51i+V_+_20st,(ssize_t)sizeof(struct COMPLEX_),dnsdata_49h-dnsdata_48l+1,diskfield_)==dnsdata_49h-dnsdata_48l+1))ioerr(diskfield_);}else{  {int _22i_=dnsdata_48l;do{{if(!(fseeko(diskfield_,_22i_*(off_t)(ssize_t)sizeof(struct VETA_)+ix_*(off_t)dnsdata_91i+iy_*(off_t)dnsdata_92i+(off_t)((((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)+dnsdata_94i)-dnsdata_100st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+(ssize_t)&(*(struct VETA_*)(0)).eta_ ,SEEK_SET)==0&&fread((struct COMPLEX_ *)(_22i_*dnsdata_50i+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+ix_*dnsdata_51i+V_),(ssize_t)sizeof(struct COMPLEX_),1,diskfield_)==1))ioerr(diskfield_);}_22i_++;}while(_22i_<=dnsdata_49h);}};}ix_--;}while(ix_>=0);}
    iy_+=1;};}
    _23st=(dnsdata_4nyl-2)*(ssize_t)sizeof(double);
if((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(diskfield_,(off_t)((ssize_t)sizeof(struct dnsdata_s93)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+_23st,SEEK_SET)==0&&fread((char*)&(*(struct COMPLEX_*)(V_)).REAL_+_23st,(ssize_t)sizeof(double),(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1,diskfield_)==(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1))ioerr(diskfield_);}else{  {int _24i_=(dnsdata_4nyl-2);do{{if(!(fseeko(diskfield_,_24i_*(off_t)(ssize_t)sizeof(double)+(off_t)((ssize_t)sizeof(struct dnsdata_s93)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0)) ,SEEK_SET)==0&&fread((double *)(_24i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)(V_)).REAL_),(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_);}_24i_++;}while(_24i_<=(dnsdata_5nyh+2));}};
    if((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(diskfield_,(off_t)(((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+_23st,SEEK_SET)==0&&fread((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_+_23st,(ssize_t)sizeof(double),(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1,diskfield_)==(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1))ioerr(diskfield_);}else{  {int _25i_=(dnsdata_4nyl-2);do{{if(!(fseeko(diskfield_,_25i_*(off_t)(ssize_t)sizeof(double)+(off_t)(((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0)) ,SEEK_SET)==0&&fread((double *)(_25i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_),(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_);}_25i_++;}while(_25i_<=(dnsdata_5nyh+2));}};
    dnsdirect_10vetaTOuvw();
    if((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(diskfield_,(off_t)((ssize_t)sizeof(struct dnsdata_s93)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+_23st,SEEK_SET)==0&&fread((char*)&(*(struct COMPLEX_*)(V_)).REAL_+_23st,(ssize_t)sizeof(double),(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1,diskfield_)==(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1))ioerr(diskfield_);}else{  {int _26i_=(dnsdata_4nyl-2);do{{if(!(fseeko(diskfield_,_26i_*(off_t)(ssize_t)sizeof(double)+(off_t)((ssize_t)sizeof(struct dnsdata_s93)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0)) ,SEEK_SET)==0&&fread((double *)(_26i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)(V_)).REAL_),(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_);}_26i_++;}while(_26i_<=(dnsdata_5nyh+2));}};
    if((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(diskfield_,(off_t)(((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+_23st,SEEK_SET)==0&&fread((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_+_23st,(ssize_t)sizeof(double),(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1,diskfield_)==(dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1))ioerr(diskfield_);}else{  {int _27i_=(dnsdata_4nyl-2);do{{if(!(fseeko(diskfield_,_27i_*(off_t)(ssize_t)sizeof(double)+(off_t)(((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0)) ,SEEK_SET)==0&&fread((double *)(_27i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_),(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_);}_27i_++;}while(_27i_<=(dnsdata_5nyh+2));}};
  errfclose(&diskfield_);
}}}

void convenience_16velocity_gradient(const int Vder_l,const int Vder_h,const ssize_t Vder_i,const int Vder__l,const int Vder__h,const ssize_t Vder__i,const int Vder___l,const int Vder___h,const ssize_t Vder___i,char *Vder____){{struct freefunc* es=freestack;
   {int ix_=0  ;while(ix_<=nx_){
    double _20r;
double _22r_21ialfa;
double _23i_21ialfa;
/*ialfa=_22r_21ialfa,_23i_21ialfa*/

    _20r=alfa0_*(double)(ix_);
_22r_21ialfa=0.;
_23i_21ialfa=_20r;
 {int iz_= - nz_  ;while(iz_<=nz_ ){{
      char *_24w;
char *_25w;
double _26r;
double _28r_27ibeta;
double _29i_27ibeta;
/*ibeta=_28r_27ibeta,_29i_27ibeta*/

      _24w=iz_*Vder__i+ix_*Vder_i+Vder____;
_25w=iz_*dnsdata_50i+ix_*dnsdata_51i+V_;
_26r=beta0_*(double)(iz_);
_28r_27ibeta=0.;
_29i_27ibeta=_26r;
{  {int _30i_=Vder___l;do{{double _31r;
double _32i;
_31r=(*(struct COMPLEX_*)(_30i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_25w)).REAL_;
_32i=(*(struct COMPLEX_*)(_30i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_25w)).IMAG_ ;
{register double temp=(_22r_21ialfa*_31r-_23i_21ialfa*_32i);(*(struct COMPLEX_ *)(_30i_*Vder___i+_24w)).IMAG_=(_22r_21ialfa*_32i+_23i_21ialfa*_31r);(*(struct COMPLEX_ *)(_30i_*Vder___i+_24w)).REAL_=temp;};}_30i_++;}while(_30i_<=Vder___h);}}  {  {int _33i_=Vder___l;do{{double _34r;
double _35i;
_34r=(*(struct COMPLEX_*)(_33i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_25w)).REAL_;
_35i=(*(struct COMPLEX_*)(_33i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_25w)).IMAG_ ;
{register double temp=(_22r_21ialfa*_34r-_23i_21ialfa*_35i);(*(struct COMPLEX_ *)(_33i_*Vder___i+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).IMAG_=(_22r_21ialfa*_35i+_23i_21ialfa*_34r);(*(struct COMPLEX_ *)(_33i_*Vder___i+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).REAL_=temp;};}_33i_++;}while(_33i_<=Vder___h);}}  {  {int _36i_=Vder___l;do{{double _37r;
double _38i;
_37r=(*(struct COMPLEX_*)(_36i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_25w)).REAL_;
_38i=(*(struct COMPLEX_*)(_36i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_25w)).IMAG_ ;
{register double temp=(_22r_21ialfa*_37r-_23i_21ialfa*_38i);(*(struct COMPLEX_ *)(_36i_*Vder___i+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).IMAG_=(_22r_21ialfa*_38i+_23i_21ialfa*_37r);(*(struct COMPLEX_ *)(_36i_*Vder___i+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).REAL_=temp;};}_36i_++;}while(_36i_<=Vder___h);}}
      {  {int _39i_=Vder___l;do{{double _40r;
double _41i;
_40r=(*(struct COMPLEX_*)(_39i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_25w)).REAL_;
_41i=(*(struct COMPLEX_*)(_39i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_25w)).IMAG_ ;
{register double temp=(_28r_27ibeta*_40r-_29i_27ibeta*_41i);(*(struct COMPLEX_ *)(_39i_*Vder___i+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).IMAG_=(_28r_27ibeta*_41i+_29i_27ibeta*_40r);(*(struct COMPLEX_ *)(_39i_*Vder___i+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).REAL_=temp;};}_39i_++;}while(_39i_<=Vder___h);}}  {  {int _42i_=Vder___l;do{{double _43r;
double _44i;
_43r=(*(struct COMPLEX_*)(_42i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_25w)).REAL_;
_44i=(*(struct COMPLEX_*)(_42i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_25w)).IMAG_ ;
{register double temp=(_28r_27ibeta*_43r-_29i_27ibeta*_44i);(*(struct COMPLEX_ *)(_42i_*Vder___i+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).IMAG_=(_28r_27ibeta*_44i+_29i_27ibeta*_43r);(*(struct COMPLEX_ *)(_42i_*Vder___i+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).REAL_=temp;};}_42i_++;}while(_42i_<=Vder___h);}}  {  {int _45i_=Vder___l;do{{double _46r;
double _47i;
_46r=(*(struct COMPLEX_*)(_45i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_25w)).REAL_;
_47i=(*(struct COMPLEX_*)(_45i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_25w)).IMAG_ ;
{register double temp=(_28r_27ibeta*_46r-_29i_27ibeta*_47i);(*(struct COMPLEX_ *)(_45i_*Vder___i+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).IMAG_=(_28r_27ibeta*_47i+_29i_27ibeta*_46r);(*(struct COMPLEX_ *)(_45i_*Vder___i+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).REAL_=temp;};}_45i_++;}while(_45i_<=Vder___h);}}
      dnsdirect_14deriv((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+_25w)).REAL_,Vder___l,Vder___h,Vder___i,(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_24w)).REAL_);  dnsdirect_14deriv((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+_25w)).IMAG_,Vder___l,Vder___h,Vder___i,(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_24w)).IMAG_);
      dnsdirect_14deriv((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_25w)).REAL_,Vder___l,Vder___h,Vder___i,(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).REAL_);  dnsdirect_14deriv((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_25w)).IMAG_,Vder___l,Vder___h,Vder___i,(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).IMAG_);
      dnsdirect_14deriv((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_25w)).REAL_,Vder___l,Vder___h,Vder___i,(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).REAL_);  dnsdirect_14deriv((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_25w)).IMAG_,Vder___l,Vder___h,Vder___i,(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).IMAG_);
      rbmatmod_3LeftLUDivStep2(Vder___l,Vder___h,Vder___i,(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_24w)).REAL_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),D0mat_);  rbmatmod_3LeftLUDivStep2(Vder___l,Vder___h,Vder___i,(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_24w)).IMAG_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),D0mat_);
      rbmatmod_3LeftLUDivStep2(Vder___l,Vder___h,Vder___i,(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).REAL_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),D0mat_);  rbmatmod_3LeftLUDivStep2(Vder___l,Vder___h,Vder___i,(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).IMAG_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),D0mat_);
      rbmatmod_3LeftLUDivStep2(Vder___l,Vder___h,Vder___i,(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).REAL_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),D0mat_);  rbmatmod_3LeftLUDivStep2(Vder___l,Vder___h,Vder___i,(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_24w)).IMAG_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),D0mat_);
    }iz_+=1;};}
    {if( !(next_==NULL) ){ fflush(next_);};};
  ix_+=1;};}
}}

void convenience_17deriv2(const int f0_l,const int f0_h,const ssize_t f0_i,char *f0__,const int f2_l,const int f2_h,const ssize_t f2_i,char *f2__){{struct freefunc* es=freestack;
if( (prev_==NULL) ){
   (*(double *)(f2__))=0.; {int i_= - 2  ;do{{(*(double *)(f2__))+=(*(double *)(i_*(ssize_t)sizeof(double)+d240_-((-2)*(ssize_t)sizeof(double))))*(*(double *)((1+i_)*f0_i+f0__)) ;}i_+=1;}while(i_<=2);}
   (*(double *)(-f2_i+f2__))=0.; {int i_= - 2  ;do{{(*(double *)(-f2_i+f2__))+=(*(double *)(i_*(ssize_t)sizeof(double)+d24m1_-((-2)*(ssize_t)sizeof(double))))*(*(double *)((1+i_)*f0_i+f0__)) ;}i_+=1;}while(i_<=2);}
};
if( (next_==NULL) ){
   (*(double *)(ny_*f2_i+f2__))=0.; {int i_= - 2  ;do{{(*(double *)(ny_*f2_i+f2__))+=(*(double *)(i_*(ssize_t)sizeof(double)+d24n_-((-2)*(ssize_t)sizeof(double))))*(*(double *)((ny_-1+i_)*f0_i+f0__)) ;}i_+=1;}while(i_<=2);}
   (*(double *)((ny_+1)*f2_i+f2__))=0.; {int i_= - 2  ;do{{(*(double *)((ny_+1)*f2_i+f2__))+=(*(double *)(i_*(ssize_t)sizeof(double)+d24np1_-((-2)*(ssize_t)sizeof(double))))*(*(double *)((ny_-1+i_)*f0_i+f0__)) ;}i_+=1;}while(i_<=2);}
};
 {int iy_=dnsdata_4nyl  ;do{{ {struct dnsdata_s12 *_20w;
_20w=(struct dnsdata_s12 *)(iy_*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_) ;
  (*(double *)(iy_*f2_i+f2__) )=0.; {int i_= - 2  ;do{{(*(double *)(iy_*f2_i+f2__) )+=(*(double *)(i_*(ssize_t)sizeof(double)+(*_20w).d2_-dnsdata_13st))*(*(double *)((iy_+i_)*f0_i+f0__)) ;}i_+=1;}while(i_<=2);}}}iy_+=1;}while(iy_<=dnsdata_5nyh);}
if( (prev_==NULL) ){
  { struct dnsdata_s12 *_21w;
_21w=(struct dnsdata_s12 *)((ssize_t)sizeof(struct dnsdata_s12)+derivatives_);
(*(double *)(f2_i+f2__))-=((*(double *)(-(ssize_t)sizeof(double)+(*_21w).d0_-dnsdata_13st))*(*(double *)(f2__))+(*(double *)((-2)*(ssize_t)sizeof(double)+(*_21w).d0_-dnsdata_13st))*(*(double *)(-f2_i+f2__)));}
  { struct dnsdata_s12 *_22w;
_22w=(struct dnsdata_s12 *)(2*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_);
(*(double *)(2*f2_i+f2__))-=(*(double *)((-2)*(ssize_t)sizeof(double)+(*_22w).d0_-dnsdata_13st))*(*(double *)(f2__));}
};
if( (next_==NULL) ){
  { struct dnsdata_s12 *_23w;
_23w=(struct dnsdata_s12 *)((ny_-1)*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_);
(*(double *)((ny_-1)*f2_i+f2__))-=((*(double *)((ssize_t)sizeof(double)+(*_23w).d0_-dnsdata_13st))*(*(double *)(ny_*f2_i+f2__))+(*(double *)(2*(ssize_t)sizeof(double)+(*_23w).d0_-dnsdata_13st))*(*(double *)((ny_+1)*f2_i+f2__)));}
  { struct dnsdata_s12 *_24w;
_24w=(struct dnsdata_s12 *)((ny_-2)*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_);
(*(double *)((ny_-2)*f2_i+f2__))-=(*(double *)(2*(ssize_t)sizeof(double)+(*_24w).d0_-dnsdata_13st))*(*(double *)(ny_*f2_i+f2__));}
};
rbmatmod_2LeftLUDivStep1(f2_l,f2_h,f2_i,f2__,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),D0mat_,f2_l,f2_h,f2_i,f2__);
}}

void convenience_19convolution(const int h_l,const int h_h,const ssize_t h_i,char *h__,const int f_l,const int f_h,const ssize_t f_i,char *f__,const int g_l,const int g_h,const ssize_t g_i,char *g__,const int conv_l,const int conv_h,const ssize_t conv_i,const int conv__l,const int conv__h,const ssize_t conv__i,char *conv___){{struct freefunc* es=freestack;
   {int n_=0  ;while(n_<=f_h){
    int _20c;
/*c=_20c*/

    _20c=( n_==0  ?1  :2);
 {int m_=f_l  ;do{if(!( abs(n_-m_)>f_h)){ double _21r;
double _22i;
double _23r;
double _24i;
double _25r;
double _26i;
double _27r;
double _28i;
_21r=(*(struct COMPLEX_*)(n_*h_i+h__)).REAL_;
_22i=(*(struct COMPLEX_*)(n_*h_i+h__)).IMAG_;
_23r=(*(struct COMPLEX_*)(m_*f_i+f__)).REAL_;
_24i=(*(struct COMPLEX_*)(m_*f_i+f__)).IMAG_;
_25r=(*(struct COMPLEX_*)((n_-m_)*g_i+g__)).REAL_;
_26i=(*(struct COMPLEX_*)((n_-m_)*g_i+g__)).IMAG_;
_27r=(_23r*_25r-_24i*_26i);
_28i=(_23r*_26i+_24i*_25r);
(*(double *)(m_*conv__i+n_*conv_i+conv___))+=(double)(_20c)*(((_21r*_27r-_22i*_28i))) ;}m_+=1;}while(m_<=f_h );}
  n_+=1;};}
}}

