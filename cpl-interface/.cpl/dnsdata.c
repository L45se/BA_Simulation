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


/**/
/*nsmp=4*/



/*! Parallel - initialization*/
int iproc_;
int nproc_;

/*bufsize=800*/
  /*baseport=(IPPORT_USERRESERVED+111)*/

struct freefunc prev_f;FILE *prev_;
struct freefunc next_f;FILE *next_;

    


void rbmatmod_1LUdecompStep(const int A_l,const int A_h,const ssize_t A_i,char *A__);
void rbmatmod_2LeftLUDivStep1(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,char *A__,const int t_l,const int t_h,const ssize_t t_i,char *t__);
void rbmatmod_3LeftLUDivStep2(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,char *A__);
void rbmatmod_4RightLUDivStep1(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,const int A_l,const int A_h,const ssize_t A_i,char *A__);
void rbmatmod_5RightLUDivStep2(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,char *A__);
int ny_;
int nx_;
int nz_;

double alfa0_;
double beta0_;
double a_;
double ymin_;
double ymax_;
double t_max_;
double dt_field_;
double dt_save_;

double u_conv_;
double u0_;
double un_;
double w_conv_;
double w0_;
double wn_;
double t0_;
double tn_;

double ni_;
double pr_;
double gr_;
double meanpx_;
double meanpz_;
double meanflowx_;
double meanflowz_;
double px_;
double corrpx_;
double pz_;
double corrpz_;
double flowx_;
double flowz_;
double deltat_;
double cflmax_;
double time_;

int time_from_restart_;

struct freefunc restart_file_f;char *restart_file_;



void dnsdata_1read_initial_data(){{struct freefunc* es=freestack;
 struct freefunc in_data_f;FILE *in_data_;

 in_data_=NULL;atblockexit(in_data_f,errfclose,&in_data_);errfopen(&in_data_,"dns.in",O_RDWR|O_CREAT); if(!(scanrec( in_data_ ," %d",&nx_)>0&&scanrec( in_data_ ," %d",&ny_)>0&&scanrec( in_data_ ," %d",&nz_)>0))ioerr( in_data_ );
  if(!(scanrec( in_data_ ," %lg",&alfa0_)>0&&scanrec( in_data_ ," %lg",&beta0_)>0))ioerr( in_data_ );
  if(!(scanrec( in_data_ ," %lg",&ni_)>0))ioerr( in_data_ );  ni_=1./ni_;  pr_=1.0;  gr_=1.0 /*! XXX ADD SCALAR SOONER OR LATER*/;
  if(!(scanrec( in_data_ ," %lg",&a_)>0 &&scanrec( in_data_ ," %lg",&ymin_)>0 &&scanrec( in_data_ ," %lg",&ymax_)>0))ioerr( in_data_ );
  if(!(scanrec( in_data_ ," %lg",&meanpx_)>0 &&scanrec( in_data_ ," %lg",&meanpz_)>0))ioerr( in_data_ );
  if(!(scanrec( in_data_ ," %lg",&meanflowx_)>0 &&scanrec( in_data_ ," %lg",&meanflowz_)>0))ioerr( in_data_ );
  if(!(scanrec( in_data_ ," %lg",&deltat_)>0 &&scanrec( in_data_ ," %lg",&cflmax_)>0 &&scanrec( in_data_ ," %lg",&time_)>0))ioerr( in_data_ );
 
 u_conv_=0.0;  w_conv_=0.0;
 u0_=0.0;  un_=0.0;  w0_=0.0;  wn_=0.0;  t0_=0.0;  tn_=0.0;
 t_max_=100.;  time_from_restart_=0;  dt_field_=100.;  dt_save_=100.;
 if(restart_file_)free(restart_file_);restart_file_=strndup("Dati.cart.out",(int)(strlen("Dati.cart.out")-1)+1);
 errfclose(&in_data_);
 if( (next_==NULL) ){
      fprintf(stdout,"""nproc=""");fprintf(stdout,"%d",nproc_);fprintf(stdout,"\t");fprintf(stdout,"""nsmp=""");fprintf(stdout,"%d",4);putc('\n',stdout);
      fprintf(stdout,"""nx=""");fprintf(stdout,"%d",nx_);fprintf(stdout,"\t" );fprintf(stdout,"""nz=""");fprintf(stdout,"%d",nz_);fprintf(stdout,"\t" );fprintf(stdout,"""ny=""");fprintf(stdout,"%d",ny_);fprintf(stdout,"\t" );fprintf(stdout,"""time=""");fprintf(stdout,"%g",time_);putc('\n',stdout);
      fprintf(stdout,"""meanflowx=""");fprintf(stdout,"%g",meanflowx_);fprintf(stdout,"\t" );fprintf(stdout,"""meanpx=""");fprintf(stdout,"%g",meanpx_);fprintf(stdout,"\t" );fprintf(stdout,"""meanflowz=""");fprintf(stdout,"%g",meanflowz_);fprintf(stdout,"\t" );fprintf(stdout,"""meanpz=""");fprintf(stdout,"%g",meanpz_);putc('\n',stdout);
      fprintf(stdout,"""ymin=""");fprintf(stdout,"%g",ymin_);fprintf(stdout,"\t" );fprintf(stdout,"""ymax=""");fprintf(stdout,"%g",ymax_);fprintf(stdout,"\t" );fprintf(stdout,"""a=""");fprintf(stdout,"%g",a_);fprintf(stdout,"\t" );fprintf(stdout,"""alfa0=""");fprintf(stdout,"%g",alfa0_);fprintf(stdout,"\t" );fprintf(stdout,"""beta0=""");fprintf(stdout,"%g",beta0_);fprintf(stdout,"\t" );fprintf(stdout,"""1/ni=""");fprintf(stdout,"%g",1./ni_);fprintf(stdout,"\t" );fprintf(stdout,"""1/pr=""");fprintf(stdout,"%g",1./pr_);putc('\n',stdout);
      fprintf(stdout,"""u_conv=""");fprintf(stdout,"%g",u_conv_);fprintf(stdout,"\t" );fprintf(stdout,"""u0=""");fprintf(stdout,"%g",u0_);fprintf(stdout,"\t" );fprintf(stdout,"""un=""");fprintf(stdout,"%g",un_);fprintf(stdout,"\t" );fprintf(stdout,"""w_conv=""");fprintf(stdout,"%g",w_conv_);fprintf(stdout,"\t" );fprintf(stdout,"""w0=""");fprintf(stdout,"%g",w0_);fprintf(stdout,"\t" );fprintf(stdout,"""wn=""");fprintf(stdout,"%g",wn_);fprintf(stdout,"\t" );fprintf(stdout,"""t0=""");fprintf(stdout,"%g",t0_);fprintf(stdout,"\t" );fprintf(stdout,"""tn=""");fprintf(stdout,"%g",tn_);putc('\n',stdout);
      fprintf(stdout,"""deltat=""");fprintf(stdout,"%g",deltat_);fprintf(stdout,"\t" );fprintf(stdout,"""cflmax=""");fprintf(stdout,"%g",cflmax_);fprintf(stdout,"\t" );fprintf(stdout,"""t_max=""");fprintf(stdout,"%g",t_max_);fprintf(stdout,"\t" );fprintf(stdout,"""dt_save=""");fprintf(stdout,"%g",dt_save_);fprintf(stdout,"\t" );fprintf(stdout,"""dt_field=""");fprintf(stdout,"%g",dt_field_);putc('\n',stdout);
      fprintf(stdout,"""restart_file=""");fprintf(stdout,"%s",restart_file_);putc('\n',stdout);
 };
freemem(es);}}

int reread_;

void dnsdata_2kill_received(int signum_){{struct freefunc* es=freestack;
 reread_=1;
}}

int dnsdata_4nyl;
/*nyl=dnsdata_4nyl*/
  int dnsdata_5nyh;
/*nyh=dnsdata_5nyh*/

int dnsdata_6M;
int dnsdata_7l;
int dnsdata_8m;
int dnsdata_9h;
ssize_t dnsdata_10i;
ssize_t dnsdata_11st;
struct freefunc y_f;char *y_;

/*!DO y(i)=ymin+(ymax-ymin)*i/ny FOR ALL i !Mesh equispaziata*/
ssize_t dnsdata_13st;
struct dnsdata_s12{char d0_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d1_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d2_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d4_[(ssize_t)sizeof(double)*(2-(-2)+1)];};int dnsdata_14M;
int dnsdata_15l;
int dnsdata_16m;
int dnsdata_17h;
ssize_t dnsdata_18i;
ssize_t dnsdata_19st;
struct freefunc derivatives_f;char *derivatives_;

char d040_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d140_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d240_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d340_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d14m1_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d24m1_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d04n_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d14n_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d24n_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d14np1_[(ssize_t)sizeof(double)*(2-(-2)+1)];
char d24np1_[(ssize_t)sizeof(double)*(2-(-2)+1)];


char dnsdata_setup_derivatives_M[(ssize_t)sizeof(double)*(4+1)*(4+1)];
char dnsdata_setup_derivatives_t[(ssize_t)sizeof(double)*(4+1)];

int dnsdata_setup_derivatives_20M;
int dnsdata_setup_derivatives_21m;
int dnsdata_setup_derivatives_22;
int dnsdata_setup_derivatives_23;
int dnsdata_25l;
int dnsdata_26h;
ssize_t dnsdata_27i;
ssize_t dnsdata_28i;
ssize_t dnsdata_29st;
ssize_t dnsdata_30st;
struct freefunc D2vmat_f;char *D2vmat_;
struct freefunc etamat_f;char *etamat_;

struct freefunc D0mat_f;char *D0mat_;

  char v0bc_[(ssize_t)sizeof(double)*(2-(-2)+1)*(-(-1)+1)];
ssize_t dnsdata_33st;
char vnbc_[(ssize_t)sizeof(double)*(2-(-2)+1)*(1+1)];
char eta0bc_[(ssize_t)sizeof(double)*(2-(-2)+1)*(-(-1)+1)];
char etanbc_[(ssize_t)sizeof(double)*(2-(-2)+1)*(1+1)];
char phi0bc_[(ssize_t)sizeof(double)*(2-(-2)+1)*(-(-1)+1)];
char phinbc_[(ssize_t)sizeof(double)*(2-(-2)+1)*(1+1)];


void dnsdata_34applybc_0(const int eq_l,const int eq_h,const ssize_t eq_i,const int eq__l,const int eq__h,const ssize_t eq__i,char *eq___,char *bc_){{struct freefunc* es=freestack;
   {int i_= - 1  ;do{{ (*(double *)(i_*eq__i+eq_i+eq___))-=(*(double *)((-2)*eq__i+eq_i+eq___))*(*(double *)(i_*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+bc_))/(*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+bc_)) ;}i_+=1;}while(i_<=2);}
   {int i_=0  ;do{{ (*(double *)(i_*eq__i+eq_i+eq___))-=(*(double *)(-eq__i+eq_i+eq___))*(*(double *)(i_*(ssize_t)sizeof(double)+bc_))/(*(double *)(-(ssize_t)sizeof(double)+bc_)) ;}i_+=1;}while(i_<=2);}
   {int i_=0  ;do{{ (*(double *)((i_-1)*eq__i+2*eq_i+eq___))-=(*(double *)((-2)*eq__i+2*eq_i+eq___))*(*(double *)(i_*(ssize_t)sizeof(double)+bc_))/(*(double *)(-(ssize_t)sizeof(double)+bc_)) ;}i_+=1;}while(i_<=2);}
}}
void dnsdata_35applybc_n(const int eq_l,const int eq_h,const ssize_t eq_i,const int eq__l,const int eq__h,const ssize_t eq__i,char *eq___,char *bc_){{struct freefunc* es=freestack;
   {int i_= - 2  ;do{{ (*(double *)(i_*eq__i+(ny_-1)*eq_i+eq___))-=(*(double *)(2*eq__i+(ny_-1)*eq_i+eq___))*(*(double *)(i_*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+bc_))/(*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+bc_)) ;}i_+=1;}while(i_<=1);}
   {int i_= - 2  ;do{{ (*(double *)(i_*eq__i+(ny_-1)*eq_i+eq___))-=(*(double *)(eq__i+(ny_-1)*eq_i+eq___))*(*(double *)(i_*(ssize_t)sizeof(double)+bc_))/(*(double *)((ssize_t)sizeof(double)+bc_)) ;}i_+=1;}while(i_<=0);}
   {int i_= - 2  ;do{{ (*(double *)((i_+1)*eq__i+(ny_-2)*eq_i+eq___))-=(*(double *)(2*eq__i+(ny_-2)*eq_i+eq___))*(*(double *)(i_*(ssize_t)sizeof(double)+bc_))/(*(double *)((ssize_t)sizeof(double)+bc_)) ;}i_+=1;}while(i_<=0);}
}}

/*! Integral in y direction*/
void dnsdata_36yintegr(double *RESULT_,const int f_l,const int f_h,const ssize_t f_i,char *f__){{struct freefunc* es=freestack;
   {int iy_=((dnsdata_4nyl / 2))*2+1  ;while(iy_<=dnsdata_5nyh ){
   double _37yp1;
/*yp1=_37yp1*/
  double _38ym1;
/*ym1=_38ym1*/

   double _39a1;
/*a1=_39a1*/

   double _40a3;
/*a3=_40a3*/

   double _41a2;
/*a2=_41a2*/

   _37yp1=(*(double *)((iy_+1)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_));
_38ym1=(*(double *)((iy_-1)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_));
_39a1=-1./3.*_38ym1+1./6.*_37yp1+1./6.*_37yp1*_37yp1/_38ym1;
_40a3=1./3.*_37yp1-1./6.*_38ym1-1./6.*_38ym1*_38ym1/_37yp1;
_41a2=_37yp1-_38ym1-_39a1-_40a3;
(*RESULT_)+=_39a1*(*(double *)((iy_-1)*f_i+f__)) + _41a2*(*(double *)(iy_*f_i+f__)) + _40a3*(*(double *)((iy_+1)*f_i+f__));
  iy_+= 2;};}
}}






int nxd_;
  int nzd_;
  int dnsdata_39h;
int dnsdata_40h;
ssize_t dnsdata_41i;
ssize_t dnsdata_42i;
void Vd_free(void * ptr){munmap((char*)ptr,dnsdata_42i);}struct freefunc Vd_f;char *Vd_;

int dnsdata_43h;
int dnsdata_44h;
ssize_t dnsdata_45i;
ssize_t dnsdata_46i;
void VVd_free(void * ptr){munmap((char*)ptr,dnsdata_46i);}struct freefunc VVd_f;char *VVd_;

/*maxtimelevels=1*/

struct rhstype_{struct COMPLEX_ eta_;struct COMPLEX_ D2v_;};
struct VETA_{struct COMPLEX_ v_;struct COMPLEX_ eta_;};
int dnsdata_47h;
int dnsdata_48l;
int dnsdata_49h;
ssize_t dnsdata_50i;
ssize_t dnsdata_51i;
ssize_t dnsdata_52i;
ssize_t dnsdata_53st;
ssize_t dnsdata_54st;
void V_free(void * ptr){munmap((char*)ptr+dnsdata_54st,dnsdata_52i);}struct freefunc V_f;char *V_;

int dnsdata_55h;
int dnsdata_56l;
int dnsdata_57h;
int dnsdata_58M;
int dnsdata_59l;
int dnsdata_60m;
int dnsdata_61h;
ssize_t dnsdata_62i;
ssize_t dnsdata_63i;
ssize_t dnsdata_64i;
ssize_t dnsdata_65st;
ssize_t dnsdata_66st;
void oldrhs_free(void * ptr){munmap((char*)ptr+dnsdata_66st,dnsdata_64i);}struct freefunc oldrhs_f;char *oldrhs_;

int dnsdata_67h;
int dnsdata_68l;
int dnsdata_69h;
ssize_t dnsdata_70i;
ssize_t dnsdata_71i;
ssize_t dnsdata_72i;
ssize_t dnsdata_73st;
struct freefunc memrhs_f;char *memrhs_;



double u1zero_;
double w1zero_;
double phi1zero_;


int ismp_;


int dnsdata_74h;
int dnsdata_75h;
int dnsdata_76l;
int dnsdata_77h;
off_t dnsdata_78i;
off_t dnsdata_79i;
off_t dnsdata_81i;
off_t dnsdata_82i;
off_t dnsdata_83i;
off_t dnsdata_84st;
off_t dnsdata_85st;
struct dnsdata_s80{char header_[(1023+1)];};struct freefunc diskimage_f;FILE *diskimage_;

int dnsdata_86h;
int dnsdata_87h;
int dnsdata_88h;
int dnsdata_89l;
int dnsdata_90h;
off_t dnsdata_91i;
off_t dnsdata_92i;
off_t dnsdata_94i;
off_t dnsdata_95st;
off_t dnsdata_96i;
off_t dnsdata_97i;
off_t dnsdata_98i;
off_t dnsdata_99st;
off_t dnsdata_100st;
struct dnsdata_s93{int nyimage_;int nximage_;int nzimage_;double timage_;double yminimage_;double ymaximage_;double aimage_;double alfa0image_;double beta0image_;double niimage_;};struct freefunc diskfield_f;FILE *diskfield_;

int cont_;
int outcont_;

struct freefunc time_file_f;FILE *time_file_;
  int miny_;
int maxy_;

double cfl_;
double cflm_;

void dnsdata_101getcfl(){{struct freefunc* es=freestack;
/*!nx OPPURE nxd?? Check tesi Ferro*/
double _102dx;
/*dx=_102dx*/
  double _103dz;
/*dz=_103dz*/

_102dx=3.14159265358979323846/(alfa0_*(double)(nxd_));
_103dz=2.*3.14159265358979323846/(beta0_*(double)(nzd_));
cfl_=0.;
 {int iy_=dnsdata_4nyl  ;while(iy_<=dnsdata_5nyh){
  double dy_;

  double _133;
double _134;
double _135;
double _136M;
dy_=0.5*((*(double *)((iy_+1)*(ssize_t)sizeof(double)+y_))-(*(double *)((iy_-1)*(ssize_t)sizeof(double)+y_)));fflush(NULL); ismp_=0  ;while(ismp_<4-1&&fork()){ismp_+=1;;};{

     {int ix_=ismp_  ;while(ix_<=nx_ ){
      int _104h;
int _105h;

      int _108l;
int _109h;
ssize_t _110st;
ssize_t _111i;
int _112l;
int _113l;

      _104h=nz_;
_105h=nz_;
{char *_107_;

_107_=iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+ix_*dnsdata_51i+V_; {char *_106_=ix_*dnsdata_41i+Vd_;int _106_1=_104h; do{{ memcpy(_106_,_107_,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)); _107_ =dnsdata_50i+_107_;}_106_+=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);_106_1--;}while(_106_1>=0);}}_108l=nz_+1;
_109h=nzd_-nz_-1;
_110st=_108l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);
_111i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)*(_109h-_108l+1);
memset(_110st+ix_*dnsdata_41i+Vd_,0,_111i);
      _112l= - nz_;
_113l= - nz_;
{char *_115_;

_115_=_112l*dnsdata_50i+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+ix_*dnsdata_51i+V_; {char *_114_=_112l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+nzd_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+ix_*dnsdata_41i+Vd_;int _114_1=(-1)-_112l; do{{ memcpy(_114_,_115_,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)); _115_ =dnsdata_50i+_115_;}_114_+=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);_114_1--;}while(_114_1>=0);}}{ char *_116w;
_116w=ix_*dnsdata_41i+Vd_;
{fft_1IFT(0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+_116w),0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+_116w));}; {fft_1IFT(0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+_116w),0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+_116w));}; {fft_1IFT(0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w),0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w));};}
    ix_+= 4;};}
    if( ismp_==0 ){ int _117l;
int _118h;
ssize_t _119st;
ssize_t _120i;
_117l=nx_+1;
_118h=nxd_-1;
_119st=_117l*dnsdata_41i;
_120i=dnsdata_41i*(_118h-_117l+1);
memset(_119st+Vd_,0,_120i);};
    {
  register int md121;
while(!((*barrier_)==(ismp_)))sigsuspend(&oldmask);
  (*barrier_)=(md121=((ismp_)+1) % (4),md121>=0?md121:md121+(4));  kill(0,SIGUSR1);
  while(!((*barrier_)<=(ismp_)))sigsuspend(&oldmask);
};
     {int iz_=ismp_  ;do{{ { char *_122w;
_122w=iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+Vd_;
{fft_3RFT(0,dnsdata_39h,dnsdata_41i,(0+_122w),0,dnsdata_39h,dnsdata_41i,(0+_122w));}; {fft_3RFT(0,dnsdata_39h,dnsdata_41i,(0+(ssize_t)sizeof(struct COMPLEX_)+_122w),0,dnsdata_39h,dnsdata_41i,(0+(ssize_t)sizeof(struct COMPLEX_)+_122w));}; {fft_3RFT(0,dnsdata_39h,dnsdata_41i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_122w),0,dnsdata_39h,dnsdata_41i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_122w));} ;}}iz_+= 4;}while(iz_<=dnsdata_40h );}
    {
  register int md123;
while(!((*barrier_)==(ismp_)))sigsuspend(&oldmask);
  (*barrier_)=(md123=((ismp_)+1) % (4),md123>=0?md123:md123+(4));  kill(0,SIGUSR1);
  while(!((*barrier_)<=(ismp_)))sigsuspend(&oldmask);
};
  } if(ismp_<4-1)exit(0);;
 ismp_=0  ;while(ismp_<4-1){if(wait(NULL)<0)traphandler("wait");ismp_+=1;;};
  /*! Un campione ogni due*/
   _133=-DBL_MAX;  {int _124i_=dnsdata_39h;do{{int _125i_=dnsdata_40h;do{{double _126M;
_126M=fabs((*(double *)(_125i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_124i_*dnsdata_41i+(char*)&(*(struct COMPLEX_*)(Vd_)).IMAG_))) ;
if(_133<_126M)_133=_126M;}_125i_--;}while(_125i_>=0);}_124i_--;}while(_124i_>=0);} _134=-DBL_MAX;  {int _127i_=dnsdata_39h;do{{int _128i_=dnsdata_40h;do{{double _129M;
_129M=fabs((*(double *)(_128i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_127i_*dnsdata_41i+(char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+Vd_)).IMAG_))) ;
if(_134<_129M)_134=_129M;}_128i_--;}while(_128i_>=0);}_127i_--;}while(_127i_>=0);} _135=-DBL_MAX;  {int _130i_=dnsdata_39h;do{{int _131i_=dnsdata_40h;do{{double _132M;
_132M=fabs((*(double *)(_131i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_130i_*dnsdata_41i+(char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+Vd_)).IMAG_))) ;
if(_135<_132M)_135=_132M;}_131i_--;}while(_131i_>=0);}_130i_--;}while(_130i_>=0);}_136M=_133/_102dx+_134/dy_+_135/_103dz;
cfl_=cfl_;if(cfl_<_136M)cfl_=_136M;
iy_+=1;};}
}}

double energy_;
double slice_energy_;
double diss_;
double slice_diss_;

struct COMPLEX_ dudy_;
struct COMPLEX_ dvdy_;
struct COMPLEX_ dwdy_;

int dnsdata_102h;
int dnsdata_103l;
int dnsdata_104h;
ssize_t dnsdata_105i;
ssize_t dnsdata_106i;
ssize_t dnsdata_107st;
struct freefunc fieldbuf_f;char *fieldbuf_;

int dnsdata_108h;
int dnsdata_109l;
int dnsdata_110h;
ssize_t dnsdata_111i;
ssize_t dnsdata_112i;
ssize_t dnsdata_113st;
struct freefunc velbuf_f;char *velbuf_;

void dnsdata_114outstats(){{struct freefunc* es=freestack;
outcont_+=1; 
if( outcont_>0 ){
	outcont_=0;  dnsdata_101getcfl();  cflm_=0.;  energy_=0.;  slice_energy_=0.;  diss_=0.;  slice_diss_=0.;

	 {int iy_=dnsdata_4nyl  ;do{  {int ix_=dnsdata_47h;do{{int iz_=dnsdata_48l;do{ if(!( (ix_==0 )&&( iz_==0))){ {
	char *_115w;
_115w=iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_;
 slice_energy_ +=  1./2.* (((*(struct COMPLEX_*)(_115w)).REAL_*(*(struct COMPLEX_*)(_115w)).REAL_+(*(struct COMPLEX_*)(_115w)).IMAG_*(*(struct COMPLEX_*)(_115w)).IMAG_)+((*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+_115w)).REAL_*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+_115w)).REAL_+(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+_115w)).IMAG_*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+_115w)).IMAG_)+((*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_115w)).REAL_*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_115w)).REAL_+(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_115w)).IMAG_*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_115w)).IMAG_))*(double)((ix_==0?1:2))*((*(double *)((iy_+1)*(ssize_t)sizeof(double)+y_))-(*(double *)((iy_-1)*(ssize_t)sizeof(double)+y_)))*0.5 ;}}iz_++;}while(iz_<=dnsdata_49h);}ix_--;}while(ix_>=0);}iy_+=1;}while(iy_<=dnsdata_5nyh );}

	 {int iy_=dnsdata_4nyl  ;while(iy_<=dnsdata_5nyh){
		 {int ix_=1  ;while(ix_<=nx_ ){  {int iz_=dnsdata_48l;do{ {
			char *_116w;
double _117k2;
/*k2=_117k2*/

			double _118r;
double _119i;
double _120r;
double _121r;
double _122i;
double _123r;
double _124r;
double _125i;
double _126r;
double _127i;
double _128r;
double _129r;
double _130i;
double _131r;
double _132r;
double _133i;
double _134r;
double _135i;
double _136r;
double _137r;
double _138i;
double _139r;
double _140r;
double _141i;
_116w=iz_*dnsdata_50i+ix_*dnsdata_51i+V_;
_117k2=pow((alfa0_*(double)(ix_)),2 )+ pow((beta0_*(double)(iz_)),2);
_118r=((*(struct COMPLEX_*)((iy_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_116w)).REAL_-((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_116w)).REAL_));
_119i=((*(struct COMPLEX_*)((iy_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_116w)).IMAG_-((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_116w)).IMAG_));
_120r=(1./(((*(double *)((iy_+1)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))) ));
_121r=((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_116w)).REAL_-((*(struct COMPLEX_*)((iy_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_116w)).REAL_));
_122i=((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_116w)).IMAG_-((*(struct COMPLEX_*)((iy_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_116w)).IMAG_));
_123r=(1./(((*(double *)(iy_*(ssize_t)sizeof(double)+y_))-(*(double *)((iy_-1)*(ssize_t)sizeof(double)+y_)))));
_124r=((_118r*_120r)+(_121r*_123r));
_125i=((_119i*_120r)+(_122i*_123r));
 {register double temp=(0.5*_124r);dudy_ .IMAG_=(0.5*_125i);dudy_ .REAL_=temp;};
			_126r=((*(struct COMPLEX_*)((iy_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).REAL_-((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).REAL_));
_127i=((*(struct COMPLEX_*)((iy_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).IMAG_-((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).IMAG_));
_128r=(1./(((*(double *)((iy_+1)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))) ));
_129r=((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).REAL_-((*(struct COMPLEX_*)((iy_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).REAL_));
_130i=((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).IMAG_-((*(struct COMPLEX_*)((iy_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).IMAG_));
_131r=(1./(((*(double *)(iy_*(ssize_t)sizeof(double)+y_))-(*(double *)((iy_-1)*(ssize_t)sizeof(double)+y_)))));
_132r=((_126r*_128r)+(_129r*_131r));
_133i=((_127i*_128r)+(_130i*_131r));
 {register double temp=(0.5*_132r);dvdy_ .IMAG_=(0.5*_133i);dvdy_ .REAL_=temp;};
			_134r=((*(struct COMPLEX_*)((iy_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).REAL_-((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).REAL_));
_135i=((*(struct COMPLEX_*)((iy_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).IMAG_-((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).IMAG_));
_136r=(1./(((*(double *)((iy_+1)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))) ));
_137r=((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).REAL_-((*(struct COMPLEX_*)((iy_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).REAL_));
_138i=((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).IMAG_-((*(struct COMPLEX_*)((iy_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).IMAG_));
_139r=(1./(((*(double *)(iy_*(ssize_t)sizeof(double)+y_))-(*(double *)((iy_-1)*(ssize_t)sizeof(double)+y_)))));
_140r=((_134r*_136r)+(_137r*_139r));
_141i=((_135i*_136r)+(_138i*_139r));
 {register double temp=(0.5*_140r);dwdy_ .IMAG_=(0.5*_141i);dwdy_ .REAL_=temp;};
			 slice_diss_ +=  2.* 0.5*( _117k2*(((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_116w)).REAL_*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_116w)).REAL_+(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_116w)).IMAG_*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_116w)).IMAG_)+((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).REAL_*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).REAL_+(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).IMAG_*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).IMAG_)+((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).REAL_*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).REAL_+(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).IMAG_*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).IMAG_)) + (dudy_.REAL_*dudy_.REAL_+dudy_.IMAG_*dudy_.IMAG_)+(dvdy_.REAL_*dvdy_.REAL_+dvdy_.IMAG_*dvdy_.IMAG_)+(dwdy_.REAL_*dwdy_.REAL_+dwdy_.IMAG_*dwdy_.IMAG_) ) * ((*(double *)((iy_+1)*(ssize_t)sizeof(double)+y_))-(*(double *)((iy_-1)*(ssize_t)sizeof(double)+y_)))*0.5;
		}iz_++;}while(iz_<=dnsdata_49h);}ix_+=1;};}
		  {int iz_=dnsdata_48l;do{ if(!(iz_==0 )){{
			char *_142w;
double _143k2;
/*k2=_143k2*/

			double _144r;
double _145i;
double _146r;
double _147r;
double _148i;
double _149r;
double _150r;
double _151i;
double _152r;
double _153i;
double _154r;
double _155r;
double _156i;
double _157r;
double _158r;
double _159i;
double _160r;
double _161i;
double _162r;
double _163r;
double _164i;
double _165r;
double _166r;
double _167i;
_142w=iz_*dnsdata_50i+V_;
_143k2=pow((beta0_*(double)(iz_)),2);
_144r=((*(struct COMPLEX_*)((iy_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_142w)).REAL_-((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_142w)).REAL_));
_145i=((*(struct COMPLEX_*)((iy_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_142w)).IMAG_-((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_142w)).IMAG_));
_146r=(1./(((*(double *)((iy_+1)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))) ));
_147r=((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_142w)).REAL_-((*(struct COMPLEX_*)((iy_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_142w)).REAL_));
_148i=((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_142w)).IMAG_-((*(struct COMPLEX_*)((iy_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_142w)).IMAG_));
_149r=(1./(((*(double *)(iy_*(ssize_t)sizeof(double)+y_))-(*(double *)((iy_-1)*(ssize_t)sizeof(double)+y_)))));
_150r=((_144r*_146r)+(_147r*_149r));
_151i=((_145i*_146r)+(_148i*_149r));
 {register double temp=(0.5*_150r);dudy_ .IMAG_=(0.5*_151i);dudy_ .REAL_=temp;};
			_152r=((*(struct COMPLEX_*)((iy_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).REAL_-((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).REAL_));
_153i=((*(struct COMPLEX_*)((iy_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).IMAG_-((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).IMAG_));
_154r=(1./(((*(double *)((iy_+1)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))) ));
_155r=((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).REAL_-((*(struct COMPLEX_*)((iy_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).REAL_));
_156i=((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).IMAG_-((*(struct COMPLEX_*)((iy_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).IMAG_));
_157r=(1./(((*(double *)(iy_*(ssize_t)sizeof(double)+y_))-(*(double *)((iy_-1)*(ssize_t)sizeof(double)+y_)))));
_158r=((_152r*_154r)+(_155r*_157r));
_159i=((_153i*_154r)+(_156i*_157r));
 {register double temp=(0.5*_158r);dvdy_ .IMAG_=(0.5*_159i);dvdy_ .REAL_=temp;};
			_160r=((*(struct COMPLEX_*)((iy_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).REAL_-((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).REAL_));
_161i=((*(struct COMPLEX_*)((iy_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).IMAG_-((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).IMAG_));
_162r=(1./(((*(double *)((iy_+1)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))) ));
_163r=((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).REAL_-((*(struct COMPLEX_*)((iy_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).REAL_));
_164i=((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).IMAG_-((*(struct COMPLEX_*)((iy_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).IMAG_));
_165r=(1./(((*(double *)(iy_*(ssize_t)sizeof(double)+y_))-(*(double *)((iy_-1)*(ssize_t)sizeof(double)+y_)))));
_166r=((_160r*_162r)+(_163r*_165r));
_167i=((_161i*_162r)+(_164i*_165r));
 {register double temp=(0.5*_166r);dwdy_ .IMAG_=(0.5*_167i);dwdy_ .REAL_=temp;};
			 slice_diss_ +=  0.5*( _143k2*(((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_142w)).REAL_*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_142w)).REAL_+(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_142w)).IMAG_*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_142w)).IMAG_)+((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).REAL_*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).REAL_+(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).IMAG_*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).IMAG_)+((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).REAL_*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).REAL_+(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).IMAG_*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_142w)).IMAG_)) + (dudy_.REAL_*dudy_.REAL_+dudy_.IMAG_*dudy_.IMAG_)+(dvdy_.REAL_*dvdy_.REAL_+dvdy_.IMAG_*dvdy_.IMAG_)+(dwdy_.REAL_*dwdy_.REAL_+dwdy_.IMAG_*dwdy_.IMAG_) ) * ((*(double *)((iy_+1)*(ssize_t)sizeof(double)+y_))-(*(double *)((iy_-1)*(ssize_t)sizeof(double)+y_)))*0.5;
		}}iz_++;}while(iz_<=dnsdata_49h);}
	iy_+=1;};}
	if( !(prev_==NULL) ){
		  if(!(fread(0+&energy_,(ssize_t)sizeof(double),1, prev_ )==1&& fread(0+&cflm_,(ssize_t)sizeof(double),1, prev_ )==1&& fread(0+&diss_,(ssize_t)sizeof(double),1, prev_ )==1))ioerr( prev_ );  fflush(prev_);
		energy_+=slice_energy_;  diss_+=slice_diss_;  /*!cflm=MAX(cfl,cflm)*/
		if( cfl_ >cflm_ ){  cflm_ = cfl_; };
  	}else{
		energy_=slice_energy_;  diss_=slice_diss_;  cflm_=cfl_;
	};
	if( !(next_==NULL) ){ fwrite(&energy_,(ssize_t)sizeof(double),1,next_); fwrite(&cflm_,(ssize_t)sizeof(double),1,next_); fwrite(&diss_,(ssize_t)sizeof(double),1,next_); fflush(next_);};
	if( cflmax_>0.){
		deltat_=cflmax_/cflm_;
		if( !(next_==NULL) ){   if(!(fread(0+&deltat_,(ssize_t)sizeof(double),1, next_ )==1))ioerr( next_ ); fflush(next_);};
		if( !(prev_==NULL) ){ fwrite(&deltat_,(ssize_t)sizeof(double),1,prev_); fflush(prev_);};
	};

	if( (next_==NULL) ){
	  double _168;
double _169;
double _170;
double _171;
 _168=0.; {int i_= - 2  ;do{{(*&_168)+= - (*(double *)(i_*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))))*(*(struct COMPLEX_ *)(0+(ny_-1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_)).REAL_ ;}i_+=1;}while(i_<=2 );} _169=0.; {int i_= - 2  ;do{{(*&_169)+= - (*(double *)(i_*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))))*(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ny_-1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_)).REAL_ ;}i_+=1;}while(i_<=2 );} fprintf(stdout,"%1.9g\t%1.9g\t%1.9g\t%1.9g\t%1.9g\t%g\t%g\t%g\t%g\t%g\t%g\t%g\t%g",time_ ,u1zero_ ,_168
        	,w1zero_  ,_169
		,flowx_,px_+corrpx_,flowz_,pz_+corrpz_,cflm_*deltat_,deltat_,energy_,diss_);putc('\n',stdout);
	   _170=0.; {int i_= - 2  ;do{{(*&_170)+= - (*(double *)(i_*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))))*(*(struct COMPLEX_ *)(0+(ny_-1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_)).REAL_ ;}i_+=1;}while(i_<=2 );} _171=0.; {int i_= - 2  ;do{{(*&_171)+= - (*(double *)(i_*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))))*(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ny_-1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_)).REAL_ ;}i_+=1;}while(i_<=2 );} fprintf( time_file_ ,"%1.9g\t%1.9g\t%1.9g\t%1.9g\t%1.9g\t%g\t%g\t%g\t%g\t%g\t%g\t%g\t%g",time_
        	,u1zero_ ,_170
	        ,w1zero_  ,_171
	        ,flowx_,px_+corrpx_,flowz_,pz_+corrpz_,cflm_*deltat_,deltat_,energy_,diss_);putc('\n', time_file_ );  fflush(time_file_);
};
};

if( (time_>0.)&&( (int)floor((time_+0.5*deltat_)/dt_save_) >(int)floor((time_-0.5*deltat_)/dt_save_) )){
    {int iy_=(dnsdata_4nyl-2);do{{ { char *_172w;
_172w=iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_;
{register double temp=(*(struct COMPLEX_*)(_172w)).REAL_-u_conv_;(*(struct COMPLEX_ *)(0+_172w)).IMAG_=(*(struct COMPLEX_*)(_172w)).IMAG_;(*(struct COMPLEX_ *)(0+_172w)).REAL_=temp;}; {register double temp=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_172w)).REAL_-w_conv_;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_172w)).IMAG_=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_172w)).IMAG_;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_172w)).REAL_=temp;};}}iy_++;}while(iy_<=(dnsdata_5nyh+2));}
  if( !(prev_==NULL) ){  while(!feof( prev_)&&getc( prev_)!='\n'){};};
   errfopen(&diskimage_ ,"Dati.cart.out",O_RDWR|O_CREAT);
  {
    if( (next_==NULL) ){
      char *_173; fprintf(stdout,"""Writing Dati.cart.out at time""\t%g" ,time_);putc('\n',stdout);
      fseeko(diskimage_,(-(0))+(ssize_t)(*(struct dnsdata_s80 *)(0)).header_ ,SEEK_SET);_173=malloc(snprintf(NULL,0,"         ny=""%d""       nx=""%d""       nz=""%d""\n"
"	 alfa0=""%g""     beta0=""%g""\n"
"         ymin=""%g""        ymax=""%g""          a=""%g""\n"
"         ni=""%g""       time=""%g""\n"
"         """,ny_,nx_,nz_,alfa0_,beta0_,ymin_,ymax_,a_,1./ni_,time_)+1);sprintf(_173,"         ny=""%d""       nx=""%d""       nz=""%d""\n"
"	 alfa0=""%g""     beta0=""%g""\n"
"         ymin=""%g""        ymax=""%g""          a=""%g""\n"
"         ni=""%g""       time=""%g""\n"
"         """,ny_,nx_,nz_,alfa0_,beta0_,ymin_,ymax_,a_,1./ni_,time_); fprintf( diskimage_,"%s",_173);putc('\n', diskimage_);
    free(_173);};

    {int iy_=  miny_  ;while(iy_<=maxy_){
       {int iz_=dnsdata_109l;do{{ int _174h;
int _175h;
_174h=nx_;
_175h=nx_;
{char *_177_;

_177_=iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+V_; {char *_176_=iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+velbuf_;int _176_1=_174h; do{{ memcpy(_176_,_177_,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)); _177_ =dnsdata_51i+_177_;}_176_+=dnsdata_111i;_176_1--;}while(_176_1>=0);}} }iz_++;}while(iz_<=dnsdata_110h);}
        {int _178i_=dnsdata_75h;do{{if((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)==(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)&&(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)==(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)){if(!(fseeko(diskimage_,_178i_*(off_t)dnsdata_78i+iy_*(off_t)dnsdata_79i+(off_t)((ssize_t)sizeof(struct dnsdata_s80)-dnsdata_85st+(ssize_t)(char*)(struct dnsdata_s80*)(0))+dnsdata_84st,SEEK_SET)==0&&fwrite(_178i_*dnsdata_111i+velbuf_+dnsdata_84st,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),dnsdata_77h-dnsdata_76l+1,diskimage_)==dnsdata_77h-dnsdata_76l+1))ioerr(diskimage_);}else{  {int _179i_=dnsdata_76l;do{{if((ssize_t)sizeof(struct COMPLEX_)==(ssize_t)sizeof(struct COMPLEX_)&&(ssize_t)sizeof(struct COMPLEX_)==(ssize_t)sizeof(struct COMPLEX_)){if(!(fseeko(diskimage_,_179i_*(off_t)(ssize_t)sizeof(struct COMPLEX_)*(off_t)((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_178i_*(off_t)dnsdata_78i+iy_*(off_t)dnsdata_79i+(off_t)((ssize_t)sizeof(struct dnsdata_s80)-dnsdata_85st+(ssize_t)(char*)(struct dnsdata_s80*)(0)),SEEK_SET)==0&&fwrite(_179i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_178i_*dnsdata_111i+velbuf_,(ssize_t)sizeof(struct COMPLEX_),(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1,diskimage_)==(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1))ioerr(diskimage_);}else{  {int _180i_=((0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/;do{{if(!(fseeko(diskimage_,_180i_*(off_t)(ssize_t)sizeof(struct COMPLEX_)+_179i_*(off_t)(ssize_t)sizeof(struct COMPLEX_)*(off_t)((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_178i_*(off_t)dnsdata_78i+iy_*(off_t)dnsdata_79i+(off_t)((ssize_t)sizeof(struct dnsdata_s80)-dnsdata_85st+(ssize_t)(char*)(struct dnsdata_s80*)(0)),SEEK_SET)==0&&fwrite((struct COMPLEX_*)(_180i_*(ssize_t)sizeof(struct COMPLEX_)+_179i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_178i_*dnsdata_111i+velbuf_),(ssize_t)sizeof(struct COMPLEX_),1,diskimage_)==1))ioerr(diskimage_);}_180i_--;}while(_180i_>=0);}};}_179i_++;}while(_179i_<=dnsdata_77h);}};}_178i_--;}while(_178i_>=0);}
iy_+=1;};}

  errfclose(&diskimage_);
  if( !(next_==NULL) ){  putc('\n', next_);};
    {int iy_=(dnsdata_4nyl-2);do{{ { char *_181w;
_181w=iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_;
{register double temp=(*(struct COMPLEX_*)(_181w)).REAL_+u_conv_;(*(struct COMPLEX_ *)(0+_181w)).IMAG_=(*(struct COMPLEX_*)(_181w)).IMAG_;(*(struct COMPLEX_ *)(0+_181w)).REAL_=temp;}; {register double temp=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_181w)).REAL_+w_conv_;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_181w)).IMAG_=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_181w)).IMAG_;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_181w)).REAL_=temp;};}}iy_++;}while(iy_<=(dnsdata_5nyh+2));}
}};

if( (time_>0.)&&( (int)floor((time_+0.5*deltat_)/dt_field_) >(int)floor((time_-0.5*deltat_)/dt_field_) )){
  struct freefunc field_name_f;char *field_name_;

  cont_+=1;  field_name_=0;atblockexit(field_name_f,condfree,field_name_); {char *tmp; tmp=malloc(snprintf(NULL,0,"""Field""%d"".fld""",cont_)+1); sprintf(tmp,"""Field""%d"".fld""",cont_); if(field_name_ )free(field_name_ );field_name_ =tmp;}
    {int iy_=(dnsdata_4nyl-2);do{{ { char *_182w;
_182w=iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_;
{register double temp=(*(struct COMPLEX_*)(_182w)).REAL_-u_conv_;(*(struct COMPLEX_ *)(0+_182w)).IMAG_=(*(struct COMPLEX_*)(_182w)).IMAG_;(*(struct COMPLEX_ *)(0+_182w)).REAL_=temp;}; {register double temp=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_182w)).REAL_-w_conv_;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_182w)).IMAG_=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_182w)).IMAG_;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_182w)).REAL_=temp;};}}iy_++;}while(iy_<=(dnsdata_5nyh+2));}
  if( !(prev_==NULL) ){  while(!feof( prev_)&&getc( prev_)!='\n'){};};
   errfopen(&diskfield_ ,field_name_,O_RDWR|O_CREAT);
  {
    int _184l;
int _185h;
int _186l;
int _187h;
ssize_t _188st;
int _190l;
int _191h;
int _192l;
int _193h;
ssize_t _194st;
if( (next_==NULL) ){
      double fwrite183_;

     fprintf(stdout,"""Writing field_file""\t%d\t""at time""\t%g" ,cont_  ,time_);putc('\n',stdout);
      if(!(fseeko(diskfield_,(ssize_t)&(*(struct dnsdata_s93*)(0)).nyimage_,SEEK_SET)==0&&fwrite(&ny_,(ssize_t)sizeof(int),1,diskfield_)==1))ioerr(diskfield_); if(!(fseeko(diskfield_,(ssize_t)&(*(struct dnsdata_s93*)(0)).nximage_,SEEK_SET)==0&&fwrite(&nx_,(ssize_t)sizeof(int),1,diskfield_)==1))ioerr(diskfield_); if(!(fseeko(diskfield_,(ssize_t)&(*(struct dnsdata_s93*)(0)).nzimage_,SEEK_SET)==0&&fwrite(&nz_,(ssize_t)sizeof(int),1,diskfield_)==1))ioerr(diskfield_);
      if(!(fseeko(diskfield_,(ssize_t)&(*(struct dnsdata_s93*)(0)).timage_,SEEK_SET)==0&&fwrite(&time_,(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_); if(!(fseeko(diskfield_,(ssize_t)&(*(struct dnsdata_s93*)(0)).yminimage_,SEEK_SET)==0&&fwrite(&ymin_,(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_); if(!(fseeko(diskfield_,(ssize_t)&(*(struct dnsdata_s93*)(0)).ymaximage_,SEEK_SET)==0&&fwrite(&ymax_,(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_);
      if(!(fseeko(diskfield_,(ssize_t)&(*(struct dnsdata_s93*)(0)).aimage_,SEEK_SET)==0&&fwrite(&a_,(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_); if(!(fseeko(diskfield_,(ssize_t)&(*(struct dnsdata_s93*)(0)).alfa0image_,SEEK_SET)==0&&fwrite(&alfa0_,(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_); if(!(fseeko(diskfield_,(ssize_t)&(*(struct dnsdata_s93*)(0)).beta0image_,SEEK_SET)==0&&fwrite(&beta0_,(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_); fwrite183_=1./ni_;if(!(fseeko(diskfield_,(ssize_t)&(*(struct dnsdata_s93*)(0)).niimage_,SEEK_SET)==0&&fwrite(&fwrite183_,(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_);};
    _184l=miny_;
_185h=maxy_;
_186l=miny_;
_187h=maxy_;
_188st=_184l*(ssize_t)sizeof(double);
if((ssize_t)sizeof(double)==(ssize_t)sizeof(double)&&(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)==(ssize_t)sizeof(double)){if(!(fseeko(diskfield_,(off_t)((ssize_t)sizeof(struct dnsdata_s93)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+_188st,SEEK_SET)==0&&fwrite((char*)&(*(struct COMPLEX_*)(V_)).REAL_+_188st,(ssize_t)sizeof(double),_185h-_184l+1,diskfield_)==_185h-_184l+1))ioerr(diskfield_);}else{  {int _189i_=_184l;do{{if(!(fseeko(diskfield_,_189i_*(off_t)(ssize_t)sizeof(double)+(off_t)((ssize_t)sizeof(struct dnsdata_s93)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0)),SEEK_SET)==0&&fwrite((double*)(_189i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)(V_)).REAL_),(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_);}_189i_++;}while(_189i_<=_185h);}};
    _190l=miny_;
_191h=maxy_;
_192l=miny_;
_193h=maxy_;
_194st=_190l*(ssize_t)sizeof(double);
if((ssize_t)sizeof(double)==(ssize_t)sizeof(double)&&(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)==(ssize_t)sizeof(double)){if(!(fseeko(diskfield_,(off_t)(((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+_194st,SEEK_SET)==0&&fwrite((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_+_194st,(ssize_t)sizeof(double),_191h-_190l+1,diskfield_)==_191h-_190l+1))ioerr(diskfield_);}else{  {int _195i_=_190l;do{{if(!(fseeko(diskfield_,_195i_*(off_t)(ssize_t)sizeof(double)+(off_t)(((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)-dnsdata_95st+(ssize_t)(char*)(struct dnsdata_s93*)(0)),SEEK_SET)==0&&fwrite((double*)(_195i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_),(ssize_t)sizeof(double),1,diskfield_)==1))ioerr(diskfield_);}_195i_++;}while(_195i_<=_191h);}};

     {int iy_=  miny_  ;while(iy_<=maxy_){
       {int ix_=dnsdata_102h;do{{int iz_=dnsdata_103l;do{ {
      struct VETA_ *_196w;
double _197r;
double _199r_198ialfa;
double _200i_198ialfa;
/*ialfa=_199r_198ialfa,_200i_198ialfa*/
  double _201r;
double _203r_202ibeta;
double _204i_202ibeta;
/*ibeta=_203r_202ibeta,_204i_202ibeta*/

      _196w=(struct VETA_ *)(iz_*(ssize_t)sizeof(struct VETA_)+ix_*dnsdata_105i+fieldbuf_);
 {register double temp=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_;(*_196w).v_ .IMAG_=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_;(*_196w).v_ .REAL_=temp;};
      _197r=alfa0_*(double)(ix_);
_199r_198ialfa=0.;
_200i_198ialfa=_197r;
_201r=beta0_*(double)(iz_);
_203r_202ibeta=0.;
_204i_202ibeta=_201r;
 {register double temp=(_203r_202ibeta*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_-_204i_202ibeta*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_)-(_199r_198ialfa*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_-_200i_198ialfa*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_);(*_196w).eta_ .IMAG_=(_203r_202ibeta*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_+_204i_202ibeta*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_)-(_199r_198ialfa*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_+_200i_198ialfa*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_);(*_196w).eta_ .REAL_=temp;};
     }iz_++;}while(iz_<=dnsdata_104h);}ix_--;}while(ix_>=0);}
      {int _205i_=dnsdata_88h;do{{if((ssize_t)sizeof(struct VETA_)==(ssize_t)sizeof(struct VETA_)&&(ssize_t)sizeof(struct VETA_)==(ssize_t)sizeof(struct VETA_)){if(!(fseeko(diskfield_,_205i_*(off_t)dnsdata_91i+iy_*(off_t)dnsdata_92i+(off_t)((((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)+dnsdata_94i)-dnsdata_100st+(ssize_t)(char*)(struct dnsdata_s93*)(0))+dnsdata_99st,SEEK_SET)==0&&fwrite(_205i_*dnsdata_105i+fieldbuf_+dnsdata_99st,(ssize_t)sizeof(struct VETA_),dnsdata_90h-dnsdata_89l+1,diskfield_)==dnsdata_90h-dnsdata_89l+1))ioerr(diskfield_);}else{  {int _206i_=dnsdata_89l;do{{if(!(fseeko(diskfield_,_206i_*(off_t)(ssize_t)sizeof(struct VETA_)+_205i_*(off_t)dnsdata_91i+iy_*(off_t)dnsdata_92i+(off_t)((((ssize_t)sizeof(struct dnsdata_s93)+dnsdata_94i)+dnsdata_94i)-dnsdata_100st+(ssize_t)(char*)(struct dnsdata_s93*)(0)),SEEK_SET)==0&&fwrite((struct VETA_*)(_206i_*(ssize_t)sizeof(struct VETA_)+_205i_*dnsdata_105i+fieldbuf_),(ssize_t)sizeof(struct VETA_),1,diskfield_)==1))ioerr(diskfield_);}_206i_++;}while(_206i_<=dnsdata_90h);}};}_205i_--;}while(_205i_>=0);}
iy_+=1;};}

  errfclose(&diskfield_);
  if( !(next_==NULL) ){  putc('\n', next_);};
    {int iy_=(dnsdata_4nyl-2);do{{ { char *_207w;
_207w=iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_;
{register double temp=(*(struct COMPLEX_*)(_207w)).REAL_+u_conv_;(*(struct COMPLEX_ *)(0+_207w)).IMAG_=(*(struct COMPLEX_*)(_207w)).IMAG_;(*(struct COMPLEX_ *)(0+_207w)).REAL_=temp;}; {register double temp=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_207w)).REAL_+w_conv_;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_207w)).IMAG_=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_207w)).IMAG_;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_207w)).REAL_=temp;};}}iy_++;}while(iy_<=(dnsdata_5nyh+2));}
}freemem(es);};
}}

void dnsdata_115read_restart_file(){{struct freefunc* es=freestack;
if( restart_file_[0]==0 ){
  time_=0.;  memset(dnsdata_54st+V_,0,dnsdata_52i);
  if( (next_==NULL) ){  {int iy_=(dnsdata_5nyh+2)-10  ;while(iy_<=(dnsdata_5nyh+2)){
      {int ix_=dnsdata_47h;do{{int iz_=dnsdata_48l;do{{ { char *_116w;
double _117r;
struct COMPLEX_ _118;
double _119r;
struct COMPLEX_ _120;
double _121r;
struct COMPLEX_ _122;
_116w=iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_;
_117r=((double)(rand())/2147483647.)*2.*3.14159265358979323846;
complex_2EXP(&_118,0.,_117r);{register double temp=(0.00001*_118.REAL_);(*(struct COMPLEX_ *)(0+_116w)).IMAG_=(0.00001*_118.IMAG_);(*(struct COMPLEX_ *)(0+_116w)).REAL_=temp;}; _119r=((double)(rand())/2147483647.)*2.*3.14159265358979323846;
complex_2EXP(&_120,0.,_119r);{register double temp=(0.00001*_120.REAL_);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_116w)).IMAG_=(0.00001*_120.IMAG_);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_116w)).REAL_=temp;}; _121r=((double)(rand())/2147483647.)*2.*3.14159265358979323846;
complex_2EXP(&_122,0.,_121r);{register double temp=(0.00001*_122.REAL_);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).IMAG_=(0.00001*_122.IMAG_);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_116w)).REAL_=temp;};}}iz_++;}while(iz_<=dnsdata_49h);}ix_--;}while(ix_>=0);}
     {int iz_=1  ;do{{ {register double temp=(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+V_)).REAL_;(*(struct COMPLEX_ *)(0+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(-iz_)*dnsdata_50i+V_)).IMAG_=-((*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+V_)).IMAG_);(*(struct COMPLEX_ *)(0+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(-iz_)*dnsdata_50i+V_)).REAL_=temp;}; {register double temp=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+V_)).REAL_;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(-iz_)*dnsdata_50i+V_)).IMAG_=-((*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+V_)).IMAG_);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(-iz_)*dnsdata_50i+V_)).REAL_=temp;}; {register double temp=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+V_)).REAL_;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(-iz_)*dnsdata_50i+V_)).IMAG_=-((*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+V_)).IMAG_) ;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(-iz_)*dnsdata_50i+V_)).REAL_=temp;};}iz_+=1;}while(iz_<=nz_);}
  iy_+=1;};}};
   {int iy_=(dnsdata_4nyl-2)  ;do{{ { char *_123w;
_123w=iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_;
(*(struct COMPLEX_ *)(0+_123w)).REAL_=3./4.*(1.-pow((1.-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),2)); (*(struct COMPLEX_ *)(0+_123w)).IMAG_=0.; memset((struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_123w),0,(ssize_t)sizeof(struct COMPLEX_)); (*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_123w)).IMAG_=0.;}}iy_+=1;}while(iy_<=(dnsdata_5nyh+2));}
}else{
  if( (next_==NULL) ){  fprintf(stdout,"""Reading from restart_file: ""\t%s" ,restart_file_);putc('\n',stdout);};
   errfopen(&diskimage_ ,restart_file_,O_RDWR|O_CREAT);  {
    if( time_from_restart_ ){
      fseeko(diskimage_,(-(0))+(ssize_t)(*(struct dnsdata_s80 *)(0)).header_ ,SEEK_SET);   if(!(scanrec( diskimage_," ny = %d",&ny_)>0&&scanrec( diskimage_," nx = %d",&nx_)>0&&scanrec( diskimage_," nz = %d",&nz_)>0&&scanrec( diskimage_," alfa0 = %lg",&alfa0_)>0&&scanrec( diskimage_," beta0 = %lg",&beta0_)>0&&scanrec( diskimage_," ymin = %lg",&ymin_)>0&&scanrec( diskimage_," ymax = %lg",&ymax_)>0&&scanrec( diskimage_," a = %lg",&a_)>0&&scanrec( diskimage_," ni = %lg",&ni_)>0&&scanrec( diskimage_," time = %lg",&time_)>0))ioerr( diskimage_);  ni_=1./ni_;
      if( (next_==NULL) ){  fprintf(stdout,"""Starting at non-zero time=""%g",time_);putc('\n',stdout);};
    };
     {int iy_=  dnsdata_4nyl-2  ;while(iy_<=dnsdata_5nyh+2){
         {int _124i_=dnsdata_47h;do{{ssize_t _125st;
_125st=dnsdata_48l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);
if(dnsdata_50i==(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)&&(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)==(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)){if(!(fseeko(diskimage_,_124i_*(off_t)dnsdata_78i+iy_*(off_t)dnsdata_79i+(off_t)((ssize_t)sizeof(struct dnsdata_s80)-dnsdata_85st+(ssize_t)(char*)(struct dnsdata_s80*)(0))+_125st,SEEK_SET)==0&&fread(_124i_*dnsdata_51i+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_+_125st,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),dnsdata_49h-dnsdata_48l+1,diskimage_)==dnsdata_49h-dnsdata_48l+1))ioerr(diskimage_);}else{  {int _126i_=dnsdata_48l;do{{if((ssize_t)sizeof(struct COMPLEX_)==(ssize_t)sizeof(struct COMPLEX_)&&(ssize_t)sizeof(struct COMPLEX_)==(ssize_t)sizeof(struct COMPLEX_)){if(!(fseeko(diskimage_,_126i_*(off_t)(ssize_t)sizeof(struct COMPLEX_)*(off_t)((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_124i_*(off_t)dnsdata_78i+iy_*(off_t)dnsdata_79i+(off_t)((ssize_t)sizeof(struct dnsdata_s80)-dnsdata_85st+(ssize_t)(char*)(struct dnsdata_s80*)(0)),SEEK_SET)==0&&fread(_126i_*dnsdata_50i+_124i_*dnsdata_51i+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_,(ssize_t)sizeof(struct COMPLEX_),(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1,diskimage_)==(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1))ioerr(diskimage_);}else{  {int _127i_=((0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/;do{{if(!(fseeko(diskimage_,_127i_*(off_t)(ssize_t)sizeof(struct COMPLEX_)+_126i_*(off_t)(ssize_t)sizeof(struct COMPLEX_)*(off_t)((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_124i_*(off_t)dnsdata_78i+iy_*(off_t)dnsdata_79i+(off_t)((ssize_t)sizeof(struct dnsdata_s80)-dnsdata_85st+(ssize_t)(char*)(struct dnsdata_s80*)(0)) ,SEEK_SET)==0&&fread((struct COMPLEX_ *)(_127i_*(ssize_t)sizeof(struct COMPLEX_)+_126i_*dnsdata_50i+_124i_*dnsdata_51i+iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_),(ssize_t)sizeof(struct COMPLEX_),1,diskimage_)==1))ioerr(diskimage_);}_127i_--;}while(_127i_>=0);}};}_126i_++;}while(_126i_<=dnsdata_49h);}};}_124i_--;}while(_124i_>=0);}
iy_+=1;};}
  errfclose(&diskimage_);
}};
  {int iy_=(dnsdata_4nyl-2);do{{ { char *_128w;
_128w=iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_;
{register double temp=(*(struct COMPLEX_*)(_128w)).REAL_+u_conv_;(*(struct COMPLEX_ *)(0+_128w)).IMAG_=(*(struct COMPLEX_*)(_128w)).IMAG_;(*(struct COMPLEX_ *)(0+_128w)).REAL_=temp;}; {register double temp=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_128w)).REAL_+w_conv_;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_128w)).IMAG_=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_128w)).IMAG_;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_128w)).REAL_=temp;};}}iy_++;}while(iy_<=(dnsdata_5nyh+2));}
}}

void dnsdata_116simple(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG){{struct freefunc* es=freestack;
  double _117r;
_117r=(1./(deltat_));
{register double temp=(unkn_REAL*_117r)+expl_REAL;(*rhs_).IMAG_=(unkn_IMAG*_117r)+expl_IMAG;(*rhs_).REAL_=temp;};
}}


void dnsdata_117CN_AB(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG){{struct freefunc* es=freestack;
  double _118r;
_118r=2./deltat_;
{register double temp=(_118r*unkn_REAL)+impl_REAL+(3.*expl_REAL)-((*(struct COMPLEX_*)(old_i+old__)).REAL_);(*rhs_).IMAG_=(_118r*unkn_IMAG)+impl_IMAG+(3.*expl_IMAG)-((*(struct COMPLEX_*)(old_i+old__)).IMAG_);(*rhs_).REAL_=temp;};
  {register double temp=expl_REAL;(*(struct COMPLEX_ *)(old_i+old__)).IMAG_=expl_IMAG;(*(struct COMPLEX_ *)(old_i+old__)).REAL_=temp;};
}}


void dnsdata_118RK1_rai(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG){{struct freefunc* es=freestack;
  double _119r;
_119r=120./32./deltat_;
{register double temp=(_119r*unkn_REAL)+impl_REAL+(2.*expl_REAL);(*rhs_).IMAG_=(_119r*unkn_IMAG)+impl_IMAG+(2.*expl_IMAG);(*rhs_).REAL_=temp;};
  {register double temp=expl_REAL;(*(struct COMPLEX_ *)(old_i+old__)).IMAG_=expl_IMAG;(*(struct COMPLEX_ *)(old_i+old__)).REAL_=temp;};
}}
double dnsdata_119RK1_rai_coeff;


void dnsdata_120RK2_rai(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG){{struct freefunc* es=freestack;
  double _121r;
double _122r;
double _123r;
_121r=120./(8.*deltat_);
_122r=50./8.;
_123r=34./8.;
{register double temp=(_121r*unkn_REAL)+impl_REAL+(_122r*expl_REAL)-(_123r*(*(struct COMPLEX_*)(old_i+old__)).REAL_);(*rhs_).IMAG_=(_121r*unkn_IMAG)+impl_IMAG+(_122r*expl_IMAG)-(_123r*(*(struct COMPLEX_*)(old_i+old__)).IMAG_);(*rhs_).REAL_=temp;};
  {register double temp=expl_REAL;(*(struct COMPLEX_ *)(old_i+old__)).IMAG_=expl_IMAG;(*(struct COMPLEX_ *)(old_i+old__)).REAL_=temp;};
}}
double dnsdata_121RK2_rai_coeff;


void dnsdata_122RK3_rai(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG){{struct freefunc* es=freestack;
  double _123r;
double _124r;
double _125r;
_123r=120./(20.*deltat_);
_124r=90./20.;
_125r=50./20.;
{register double temp=(_123r*unkn_REAL)+impl_REAL+(_124r*expl_REAL)-(_125r*(*(struct COMPLEX_*)(old_i+old__)).REAL_);(*rhs_).IMAG_=(_123r*unkn_IMAG)+impl_IMAG+(_124r*expl_IMAG)-(_125r*(*(struct COMPLEX_*)(old_i+old__)).IMAG_);(*rhs_).REAL_=temp;};
}}
double dnsdata_123RK3_rai_coeff;


void dnsdata_124RK1_kom(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG){{struct freefunc* es=freestack;
  double _125r;
_125r=1020./240./deltat_;
{register double temp=(_125r*unkn_REAL)+impl_REAL+(2.*expl_REAL);(*rhs_).IMAG_=(_125r*unkn_IMAG)+impl_IMAG+(2.*expl_IMAG);(*rhs_).REAL_=temp;};
  {register double temp=expl_REAL;(*(struct COMPLEX_ *)(old_i+old__)).IMAG_=expl_IMAG;(*(struct COMPLEX_ *)(old_i+old__)).REAL_=temp;};
}}
double dnsdata_125RK1_kom_coeff;


void dnsdata_126RK2_kom(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG){{struct freefunc* es=freestack;
  double _127r;
double _128r;
double _129r;
_127r=1020./(32.*deltat_);
_128r=289./32.;
_129r=225./32.;
{register double temp=(_127r*unkn_REAL)+impl_REAL+(_128r*expl_REAL)-(_129r*(*(struct COMPLEX_*)(old_i+old__)).REAL_);(*rhs_).IMAG_=(_127r*unkn_IMAG)+impl_IMAG+(_128r*expl_IMAG)-(_129r*(*(struct COMPLEX_*)(old_i+old__)).IMAG_);(*rhs_).REAL_=temp;};
  {register double temp=expl_REAL;(*(struct COMPLEX_ *)(old_i+old__)).IMAG_=expl_IMAG;(*(struct COMPLEX_ *)(old_i+old__)).REAL_=temp;};
}}
double dnsdata_127RK2_kom_coeff;


void dnsdata_128RK3_kom(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG){{struct freefunc* es=freestack;
  double _129r;
double _130r;
double _131r;
_129r=1020./(68.*deltat_);
_130r=25./4.;
_131r=17./4.;
{register double temp=(_129r*unkn_REAL)+impl_REAL+(_130r*expl_REAL)-(_131r*(*(struct COMPLEX_*)(old_i+old__)).REAL_);(*rhs_).IMAG_=(_129r*unkn_IMAG)+impl_IMAG+(_130r*expl_IMAG)-(_131r*(*(struct COMPLEX_*)(old_i+old__)).IMAG_);(*rhs_).REAL_=temp;};
  {register double temp=expl_REAL;(*(struct COMPLEX_ *)(old_i+old__)).IMAG_=expl_IMAG;(*(struct COMPLEX_ *)(old_i+old__)).REAL_=temp;};
}}
double dnsdata_129RK3_kom_coeff;


void dnsdata_130RK4_kom(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unkn_REAL,double unkn_IMAG,double impl_REAL,double impl_IMAG,double expl_REAL,double expl_IMAG){{struct freefunc* es=freestack;
  double _131r;
double _132r;
double _133r;
_131r=1020./(170.*deltat_);
_132r=9./2.;
_133r=5./2.;
{register double temp=(_131r*unkn_REAL)+impl_REAL+(_132r*expl_REAL)-(_133r*(*(struct COMPLEX_*)(old_i+old__)).REAL_);(*rhs_).IMAG_=(_131r*unkn_IMAG)+impl_IMAG+(_132r*expl_IMAG)-(_133r*(*(struct COMPLEX_*)(old_i+old__)).IMAG_);(*rhs_).REAL_=temp;};
}}
double dnsdata_131RK4_kom_coeff;

