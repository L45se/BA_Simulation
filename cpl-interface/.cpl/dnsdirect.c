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
/**/
int dnsdirect_1h;
int dnsdirect_2l;
int dnsdirect_3h;
struct dnsdirect_s4{struct COMPLEX_ u_;struct COMPLEX_ v_;struct COMPLEX_ w_;struct COMPLEX_ vy_;struct COMPLEX_ eta_;struct COMPLEX_ ph_;};ssize_t dnsdirect_5i;
ssize_t dnsdirect_6i;
ssize_t dnsdirect_7st;
struct freefunc bc0_f;char *bc0_;
struct freefunc bcn_f;char *bcn_;

void dnsdirect_8buildrhs(void (*timescheme_)(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unknown_REAL,double unknown_IMAG,double implicit_part_REAL,double implicit_part_IMAG,double explicit_part_REAL,double explicit_part_IMAG));
void dnsdirect_9linsolve(double lambda_);
void dnsdirect_10vetaTOuvw();
void dnsdirect_11calcp0(struct COMPLEX_ *RESULT_,int ix_,int iz_);
void dnsdirect_12calcpn(struct COMPLEX_ *RESULT_,int ix_,int iz_);
void dnsdirect_13computeflowrate(double lambda_);
void dnsdirect_14deriv(const int f0_l,const int f0_h,const ssize_t f0_i,char *f0__,const int f1_l,const int f1_h,const ssize_t f1_i,char *f1__);
void dnsdirect_15convolutions(const int Vplane_l,const int Vplane_h,const ssize_t Vplane_i,const int Vplane__l,const int Vplane__h,const ssize_t Vplane__i,char *Vplane___,const int VVplane_l,const int VVplane_h,const ssize_t VVplane_i,const int VVplane__l,const int VVplane__h,const ssize_t VVplane__i,char *VVplane___);
void dnsdirect_15convolutions(const int Vplane_l,const int Vplane_h,const ssize_t Vplane_i,const int Vplane__l,const int Vplane__h,const ssize_t Vplane__i,char *Vplane___,const int VVplane_l,const int VVplane_h,const ssize_t VVplane_i,const int VVplane__l,const int VVplane__h,const ssize_t VVplane__i,char *VVplane___){{struct freefunc* es=freestack;
/*! LOOP FOR ix=ismp TO nx BY nsmp*/
   {int ix_=(ismp_*(nx_+1) / 4 ) ;while(ix_<=((ismp_+1)*(nx_+1) / 4 )-1){
    int _16h;
int _17h;

    int _20l;
int _21h;
ssize_t _22st;
ssize_t _23i;
int _24l;
int _25l;

    _16h=nz_;
_17h=nz_;
{char *_19_;

_19_=ix_*Vplane_i+Vplane___; {char *_18_=ix_*dnsdata_41i+Vd_;int _18_1=_16h; do{{ memcpy(_18_,_19_,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)); _19_ =Vplane__i+_19_;}_18_+=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);_18_1--;}while(_18_1>=0);}}_20l=nz_+1;
_21h=nzd_-nz_-1;
_22st=_20l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);
_23i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)*(_21h-_20l+1);
memset(_22st+ix_*dnsdata_41i+Vd_,0,_23i);
    _24l= - nz_;
_25l= - nz_;
{char *_27_;

_27_=_24l*Vplane__i+ix_*Vplane_i+Vplane___; {char *_26_=_24l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+nzd_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+ix_*dnsdata_41i+Vd_;int _26_1=(-1)-_24l; do{{ memcpy(_26_,_27_,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)); _27_ =Vplane__i+_27_;}_26_+=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);_26_1--;}while(_26_1>=0);}}{ char *_28w;
_28w=ix_*dnsdata_41i+Vd_;
{fft_5IFTU(0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+_28w),0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+_28w));}; {fft_5IFTU(0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+_28w),0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+_28w));}; {fft_5IFTU(0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_28w),0,dnsdata_40h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_28w));};}
  ix_+=1;};}
  if( ismp_==0 ){ int _29l;
int _30h;
ssize_t _31st;
ssize_t _32i;
_29l=nx_+1;
_30h=nxd_-1;
_31st=_29l*dnsdata_41i;
_32i=dnsdata_41i*(_30h-_29l+1);
memset(_31st+Vd_,0,_32i);};
  {
  register int md33;
while(!((*barrier_)==(ismp_)))sigsuspend(&oldmask);
  (*barrier_)=(md33=((ismp_)+1) % (4),md33>=0?md33:md33+(4));  kill(0,SIGUSR1);
  while(!((*barrier_)<=(ismp_)))sigsuspend(&oldmask);
};
   {int iz_=(ismp_*(dnsdata_40h+1) / 4 ) ;do{{
    { char *_34w;
_34w=iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+Vd_;
{fft_7RFTU(0,dnsdata_39h,dnsdata_41i,(0+_34w),0,dnsdata_39h,dnsdata_41i,(0+_34w));}; {fft_7RFTU(0,dnsdata_39h,dnsdata_41i,(0+(ssize_t)sizeof(struct COMPLEX_)+_34w),0,dnsdata_39h,dnsdata_41i,(0+(ssize_t)sizeof(struct COMPLEX_)+_34w));}; {fft_7RFTU(0,dnsdata_39h,dnsdata_41i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_34w),0,dnsdata_39h,dnsdata_41i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_34w));};}
      {int ix_=dnsdata_39h;do{{ {
      char *_35w;
char *_36w;
_35w=iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+ix_*dnsdata_41i+Vd_;
_36w=iz_*VVplane__i+ix_*VVplane_i+VVplane___;
(*(struct COMPLEX_ *)(0+_36w)).REAL_=(*(struct COMPLEX_ *)(0+_35w)).REAL_*(*(struct COMPLEX_ *)(0+_35w)).REAL_;  (*(struct COMPLEX_ *)(0+_36w)).IMAG_=(*(struct COMPLEX_ *)(0+_35w)).IMAG_*(*(struct COMPLEX_ *)(0+_35w)).IMAG_;
      (*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_36w)).REAL_=(*(struct COMPLEX_ *)(0+_35w)).REAL_*(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_35w)).REAL_;  (*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_36w)).IMAG_=(*(struct COMPLEX_ *)(0+_35w)).IMAG_*(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_35w)).IMAG_;
      (*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_36w)).REAL_=(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_35w)).REAL_*(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_35w)).REAL_;  (*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_36w)).IMAG_=(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_35w)).IMAG_*(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_35w)).IMAG_;
      (*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_36w)).REAL_=(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_35w)).REAL_*(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_35w)).REAL_;  (*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_36w)).IMAG_=(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_35w)).IMAG_*(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_35w)).IMAG_;
      (*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_36w)).REAL_=(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_35w)).REAL_*(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_35w)).REAL_;  (*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_36w)).IMAG_=(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_35w)).IMAG_*(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_35w)).IMAG_;
      (*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_36w)).REAL_=(*(struct COMPLEX_ *)(0+_35w)).REAL_*(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_35w)).REAL_;  (*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_36w)).IMAG_=(*(struct COMPLEX_ *)(0+_35w)).IMAG_*(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_35w)).IMAG_;
    }}ix_--;}while(ix_>=0);}
    { char *_37w;
_37w=iz_*VVplane__i+VVplane___;
{fft_8HFTU(VVplane_l,VVplane_h,VVplane_i,(0+_37w),VVplane_l,VVplane_h,VVplane_i,(0+_37w));}; {fft_8HFTU(VVplane_l,VVplane_h,VVplane_i,(0+(ssize_t)sizeof(struct COMPLEX_)+_37w),VVplane_l,VVplane_h,VVplane_i,(0+(ssize_t)sizeof(struct COMPLEX_)+_37w));}; {fft_8HFTU(VVplane_l,VVplane_h,VVplane_i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_37w),VVplane_l,VVplane_h,VVplane_i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_37w));}; {fft_8HFTU(VVplane_l,VVplane_h,VVplane_i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_37w),VVplane_l,VVplane_h,VVplane_i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_37w));}; {fft_8HFTU(VVplane_l,VVplane_h,VVplane_i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_37w),VVplane_l,VVplane_h,VVplane_i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_37w));}; {fft_8HFTU(VVplane_l,VVplane_h,VVplane_i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_37w),VVplane_l,VVplane_h,VVplane_i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_37w));};}
  /*! FOR iz=ismp TO HI BY nsmp*/
  }iz_+=1;}while(iz_<=((ismp_+1)*(dnsdata_40h+1) / 4 )-1);}
  {
  register int md38;
while(!((*barrier_)==(ismp_)))sigsuspend(&oldmask);
  (*barrier_)=(md38=((ismp_)+1) % (4),md38>=0?md38:md38+(4));  kill(0,SIGUSR1);
  while(!((*barrier_)<=(ismp_)))sigsuspend(&oldmask);
};
   {int ix_=(ismp_*(nx_+1) / 4 ) ;do{{ { char *_39w;
_39w=ix_*VVplane_i+VVplane___;
{fft_6FFTU(VVplane__l,VVplane__h,VVplane__i,(0+_39w),VVplane__l,VVplane__h,VVplane__i,(0+_39w));}; {fft_6FFTU(VVplane__l,VVplane__h,VVplane__i,(0+(ssize_t)sizeof(struct COMPLEX_)+_39w),VVplane__l,VVplane__h,VVplane__i,(0+(ssize_t)sizeof(struct COMPLEX_)+_39w));}; {fft_6FFTU(VVplane__l,VVplane__h,VVplane__i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_39w),VVplane__l,VVplane__h,VVplane__i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_39w));}; {fft_6FFTU(VVplane__l,VVplane__h,VVplane__i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_39w),VVplane__l,VVplane__h,VVplane__i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_39w));}; {fft_6FFTU(VVplane__l,VVplane__h,VVplane__i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_39w),VVplane__l,VVplane__h,VVplane__i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_39w));}; {fft_6FFTU(VVplane__l,VVplane__h,VVplane__i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_39w),VVplane__l,VVplane__h,VVplane__i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_39w));};}
  /*! FOR ix=ismp TO nx BY nsmp*/
  }ix_+=1;}while(ix_<=((ismp_+1)*(nx_+1) / 4 )-1);}

}}










void dnsdirect_8buildrhs(void (*timescheme_)(struct COMPLEX_ *rhs_,const int old_l,const int old_h,const ssize_t old_i,char *old__,double unknown_REAL,double unknown_IMAG,double implicit_part_REAL,double implicit_part_IMAG,double explicit_part_REAL,double explicit_part_IMAG)){{struct freefunc* es=freestack;
fflush(NULL); ismp_=0  ;while(ismp_<4-1&&fork()){ismp_+=1;;};{

  {int iy_=dnsdata_4nyl-4  ;while(iy_<=dnsdata_5nyh+2){
  if( iy_<=dnsdata_5nyh ){
register int md16;
dnsdirect_15convolutions(0,dnsdata_47h,dnsdata_51i,dnsdata_48l,dnsdata_49h,dnsdata_50i,(iy_+2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_,0,dnsdata_43h,dnsdata_45i,0,dnsdata_44h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)*(4+1),(md16=((iy_+2)+1000)%5,md16>=0?md16:md16+5)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)+VVd_);
if( iy_>=dnsdata_4nyl ){
    /*! WITH derivatives(iy) LOOP FOR ix=ismp TO nx BY nsmp AND iz=-nz TO nz*/
    {struct dnsdata_s12 *_17w;
_17w=(struct dnsdata_s12 *)(iy_*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_) ;
 {int ix_=(ismp_*(nx_+1) / 4 ) ;while(ix_<=((ismp_+1)*(nx_+1) / 4 )-1 ){ {int iz_= - nz_  ;while(iz_<=nz_){
      double _18alfa;
/*alfa=_18alfa*/
  double _19beta;
/*beta=_19beta*/

        
      double _20k2;
/*k2=_20k2*/

      char *VVm2_;
char *VVm1_;
char *VV0_;
char *VV1_;
char *VV2_;

      
      _18alfa=alfa0_*(double)(ix_);
_19beta=beta0_*(double)(iz_);
_20k2=(_18alfa*_18alfa)+(_19beta*_19beta);
if( iz_>=0 ){
        register int md21;
register int md22;
register int md23;
register int md24;
register int md25;
VVm2_=(md21=((iy_-2)+1000)%5,md21>=0?md21:md21+5)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)*(4+1)+ix_*dnsdata_45i+VVd_; VVm1_=(md22=((iy_-1)+1000)%5,md22>=0?md22:md22+5)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)*(4+1)+ix_*dnsdata_45i+VVd_; VV0_=(md23=(iy_+1000)%5,md23>=0?md23:md23+5)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)*(4+1)+ix_*dnsdata_45i+VVd_; VV1_=(md24=((iy_+1)+1000)%5,md24>=0?md24:md24+5)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)*(4+1)+ix_*dnsdata_45i+VVd_; VV2_=(md25=((iy_+2)+1000)%5,md25>=0?md25:md25+5)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)*(4+1)+ix_*dnsdata_45i+VVd_;
      }else{
        register int md26;
register int md27;
register int md28;
register int md29;
register int md30;
VVm2_=(md26=((iy_-2)+1000)%5,md26>=0?md26:md26+5)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)+(nzd_+iz_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)*(4+1)+ix_*dnsdata_45i+VVd_; VVm1_=(md27=((iy_-1)+1000)%5,md27>=0?md27:md27+5)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)+(nzd_+iz_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)*(4+1)+ix_*dnsdata_45i+VVd_; VV0_=(md28=(iy_+1000)%5,md28>=0?md28:md28+5)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)+(nzd_+iz_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)*(4+1)+ix_*dnsdata_45i+VVd_; VV1_=(md29=((iy_+1)+1000)%5,md29>=0?md29:md29+5)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)+(nzd_+iz_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)*(4+1)+ix_*dnsdata_45i+VVd_; VV2_=(md30=((iy_+2)+1000)%5,md30>=0?md30:md30+5)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)+(nzd_+iz_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)*(4+1)+ix_*dnsdata_45i+VVd_;
      };
{
      char *_31w;
double _32r;
double _33r;
double _34r;
double _35r;
double _36r;
double _38r_37D0_uw_;
double _39i_37D0_uw_;
/*D0_uw_=_38r_37D0_uw_,_39i_37D0_uw_*/

      double _40r;
double _41r;
double _42r;
double _43r;
double _44r;
double _46r_45D1_uw_;
double _47i_45D1_uw_;
/*D1_uw_=_46r_45D1_uw_,_47i_45D1_uw_*/

      double _48r;
double _49r;
double _50r;
double _51r;
double _52r;
double _53r;
double _54i;
double _55r;
double _56r;
double _57r;
double _58r;
double _59r;
double _61r_60rhsu;
double _62i_60rhsu;
/*rhsu=_61r_60rhsu,_62i_60rhsu*/

      double _63r;
double _64r;
double _65r;
double _66r;
double _67r;
double _68r;
double _69i;
double _70r;
double _71r;
double _72r;
double _73r;
double _74r;
double _75r;
double _76r;
double _77r;
double _78r;
double _79r;
double _80r;
double _81i;
double _83r_82rhsv;
double _84i_82rhsv;
/*rhsv=_83r_82rhsv,_84i_82rhsv*/

      double _85r;
double _86r;
double _87r;
double _88r;
double _89r;
double _90r;
double _91r;
double _92r;
double _93r;
double _94r;
double _95r;
double _96i;
double _98r_97rhsw;
double _99i_97rhsw;
/*rhsw=_98r_97rhsw,_99i_97rhsw*/


struct COMPLEX_ expl_; 
double _100r;
double _101r;
double _102r;
double _103r;
double _104r;
double _105r;
double _106i;
double _107r;
double _108r;
double _109r;
double _110r;
double _111r;
double _112r;
double _113i;
double _114r;
double _115r;
double _116r;
double _117r;
double _118r;
double _119r;
double _120r;
double _121r;
double _122r;
double _123r;
double _124r;
double _125i;
double _126r;
double _127i;


register int md128;
double _129r;
double _130r;
double _131r;
struct COMPLEX_ _133;
_31w=iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_;
_32r=(*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_33r=(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_34r=(*(double *)((*_17w).d0_-dnsdata_13st));
_35r=(*(double *)((ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_36r=(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_38r_37D0_uw_=((_32r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).REAL_)+(_33r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).REAL_)+(_34r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).REAL_)+(_35r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).REAL_)+(_36r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).REAL_));
_39i_37D0_uw_=((_32r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).IMAG_)+(_33r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).IMAG_)+(_34r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).IMAG_)+(_35r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).IMAG_)+(_36r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).IMAG_));
_40r=(*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_41r=(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_42r=(*(double *)((*_17w).d1_-dnsdata_13st));
_43r=(*(double *)((ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_44r=(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_46r_45D1_uw_=((_40r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).REAL_)+(_41r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).REAL_)+(_42r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).REAL_)+(_43r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).REAL_)+(_44r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).REAL_));
_47i_45D1_uw_=((_40r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).IMAG_)+(_41r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).IMAG_)+(_42r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).IMAG_)+(_43r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).IMAG_)+(_44r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).IMAG_));
_48r=(*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_49r=(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_50r=(*(double *)((*_17w).d0_-dnsdata_13st));
_51r=(*(double *)((ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_52r=(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_53r=((_48r*(*(struct COMPLEX_*)(VVm2_)).REAL_)+(_49r*(*(struct COMPLEX_*)(VVm1_)).REAL_)+(_50r*(*(struct COMPLEX_*)(VV0_)).REAL_)+(_51r*(*(struct COMPLEX_*)(VV1_)).REAL_)+(_52r*(*(struct COMPLEX_*)(VV2_)).REAL_));
_54i=((_48r*(*(struct COMPLEX_*)(VVm2_)).IMAG_)+(_49r*(*(struct COMPLEX_*)(VVm1_)).IMAG_)+(_50r*(*(struct COMPLEX_*)(VV0_)).IMAG_)+(_51r*(*(struct COMPLEX_*)(VV1_)).IMAG_)+(_52r*(*(struct COMPLEX_*)(VV2_)).IMAG_));
_55r=(*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_56r=(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_57r=(*(double *)((*_17w).d1_-dnsdata_13st));
_58r=(*(double *)((ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_59r=(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_61r_60rhsu=(_18alfa*_54i)-((_55r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VVm2_)).REAL_)+(_56r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VVm1_)).REAL_)+(_57r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV0_)).REAL_)+(_58r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV1_)).REAL_)+(_59r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV2_)).REAL_))-(-_19beta*_39i_37D0_uw_);
_62i_60rhsu=(-_18alfa*_53r)-((_55r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VVm2_)).IMAG_)+(_56r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VVm1_)).IMAG_)+(_57r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV0_)).IMAG_)+(_58r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV1_)).IMAG_)+(_59r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV2_)).IMAG_))-(_19beta*_38r_37D0_uw_);
_63r=(*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_64r=(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_65r=(*(double *)((*_17w).d0_-dnsdata_13st));
_66r=(*(double *)((ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_67r=(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_68r=((_63r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VVm2_)).REAL_)+(_64r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VVm1_)).REAL_)+(_65r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV0_)).REAL_)+(_66r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV1_)).REAL_)+(_67r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV2_)).REAL_));
_69i=((_63r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VVm2_)).IMAG_)+(_64r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VVm1_)).IMAG_)+(_65r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV0_)).IMAG_)+(_66r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV1_)).IMAG_)+(_67r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV2_)).IMAG_));
_70r=(*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_71r=(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_72r=(*(double *)((*_17w).d1_-dnsdata_13st));
_73r=(*(double *)((ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_74r=(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_75r=(*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_76r=(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_77r=(*(double *)((*_17w).d0_-dnsdata_13st));
_78r=(*(double *)((ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_79r=(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_80r=((_75r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).REAL_)+(_76r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).REAL_)+(_77r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).REAL_)+(_78r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).REAL_)+(_79r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).REAL_));
_81i=((_75r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).IMAG_)+(_76r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).IMAG_)+(_77r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).IMAG_)+(_78r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).IMAG_)+(_79r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).IMAG_));
_83r_82rhsv=(_18alfa*_69i)-((_70r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).REAL_)+(_71r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).REAL_)+(_72r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).REAL_)+(_73r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).REAL_)+(_74r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).REAL_))-(-_19beta*_81i);
_84i_82rhsv=(-_18alfa*_68r)-((_70r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).IMAG_)+(_71r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).IMAG_)+(_72r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).IMAG_)+(_73r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).IMAG_)+(_74r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).IMAG_))-(_19beta*_80r);
_85r=(*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_86r=(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_87r=(*(double *)((*_17w).d1_-dnsdata_13st));
_88r=(*(double *)((ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_89r=(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_90r=(*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_91r=(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_92r=(*(double *)((*_17w).d0_-dnsdata_13st));
_93r=(*(double *)((ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_94r=(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st));
_95r=((_90r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).REAL_)+(_91r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).REAL_)+(_92r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).REAL_)+(_93r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).REAL_)+(_94r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).REAL_));
_96i=((_90r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).IMAG_)+(_91r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).IMAG_)+(_92r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).IMAG_)+(_93r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).IMAG_)+(_94r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).IMAG_));
_98r_97rhsw=(_18alfa*_39i_37D0_uw_)-((_85r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).REAL_)+(_86r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).REAL_)+(_87r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).REAL_)+(_88r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).REAL_)+(_89r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).REAL_))-(-_19beta*_96i);
_99i_97rhsw=(-_18alfa*_38r_37D0_uw_)-((_85r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).IMAG_)+(_86r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).IMAG_)+(_87r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).IMAG_)+(_88r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).IMAG_)+(_89r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).IMAG_))-(_19beta*_95r);
_100r=(*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_101r=(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_102r=(*(double *)((*_17w).d1_-dnsdata_13st));
_103r=(*(double *)((ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_104r=(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_105r=((_100r*(*(struct COMPLEX_*)(VVm2_)).REAL_)+(_101r*(*(struct COMPLEX_*)(VVm1_)).REAL_)+(_102r*(*(struct COMPLEX_*)(VV0_)).REAL_)+(_103r*(*(struct COMPLEX_*)(VV1_)).REAL_)+(_104r*(*(struct COMPLEX_*)(VV2_)).REAL_));
_106i=((_100r*(*(struct COMPLEX_*)(VVm2_)).IMAG_)+(_101r*(*(struct COMPLEX_*)(VVm1_)).IMAG_)+(_102r*(*(struct COMPLEX_*)(VV0_)).IMAG_)+(_103r*(*(struct COMPLEX_*)(VV1_)).IMAG_)+(_104r*(*(struct COMPLEX_*)(VV2_)).IMAG_));
_107r=(*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st));
_108r=(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st));
_109r=(*(double *)((*_17w).d2_-dnsdata_13st));
_110r=(*(double *)((ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st));
_111r=(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st));
_112r=((-_18alfa*_106i)+((_107r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VVm2_)).REAL_)+(_108r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VVm1_)).REAL_)+(_109r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV0_)).REAL_)+(_110r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV1_)).REAL_)+(_111r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV2_)).REAL_))+(-_19beta*_47i_45D1_uw_));
_113i=((_18alfa*_105r)+((_107r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VVm2_)).IMAG_)+(_108r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VVm1_)).IMAG_)+(_109r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV0_)).IMAG_)+(_110r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV1_)).IMAG_)+(_111r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+VV2_)).IMAG_))+(_19beta*_46r_45D1_uw_));
_114r=(*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st));
_115r=(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st));
_116r=(*(double *)((*_17w).d2_-dnsdata_13st));
_117r=(*(double *)((ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st));
_118r=(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st));
_119r=(*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_120r=(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_121r=(*(double *)((*_17w).d1_-dnsdata_13st));
_122r=(*(double *)((ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_123r=(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d1_-dnsdata_13st));
_124r=((_119r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).REAL_)+(_120r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).REAL_)+(_121r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).REAL_)+(_122r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).REAL_)+(_123r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).REAL_));
_125i=((_119r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).IMAG_)+(_120r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).IMAG_)+(_121r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).IMAG_)+(_122r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).IMAG_)+(_123r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).IMAG_));
_126r=((-_18alfa*_47i_45D1_uw_)+((_114r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).REAL_)+(_115r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).REAL_)+(_116r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).REAL_)+(_117r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).REAL_)+(_118r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).REAL_))+(-_19beta*_125i));
_127i=((_18alfa*_46r_45D1_uw_)+((_114r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm2_)).IMAG_)+(_115r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VVm1_)).IMAG_)+(_116r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV0_)).IMAG_)+(_117r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV1_)).IMAG_)+(_118r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+VV2_)).IMAG_))+(_19beta*_124r));
 {register double temp=(-_18alfa*_113i)+(-_19beta*_127i)-(_20k2*_83r_82rhsv);expl_.IMAG_=(_18alfa*_112r)+(_19beta*_126r)-(_20k2*_84i_82rhsv);expl_.REAL_=temp;};_129r=( (*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double *)((-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double *)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).IMAG_)))+(*(double *)((*_17w).d2_-dnsdata_13st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double *)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double *)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).IMAG_))));
_130r=( (*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)((-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).IMAG_)))+(*(double *)((*_17w).d0_-dnsdata_13st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).IMAG_))));
_131r=( ((*(double*)((-2)*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)((-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).REAL_)))+(*(double*)((*_17w).d0_-dnsdata_13st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).REAL_)))));
 memset(&_133,0,(ssize_t)sizeof(struct COMPLEX_));  {int i_=(-2);do{{double _132r;
_132r=(ni_*((*(double *)(i_*(ssize_t)sizeof(double)+(*_17w).d4_-dnsdata_13st))-2.*_20k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))+_20k2*_20k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))));
{register double temp=(*&_133).REAL_+(_132r*(*(struct COMPLEX_*)(i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_31w)).REAL_);(*&_133).IMAG_=(*&_133).IMAG_+(_132r*(*(struct COMPLEX_*)(i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_31w)).IMAG_);(*&_133).REAL_=temp;};}i_++;}while(i_<=2);}(*timescheme_)(&(*((struct rhstype_ *)((md128=(iy_+1000)%3,md128>=0?md128:md128+3)*(ssize_t)sizeof(struct rhstype_)+iz_*dnsdata_70i+ix_*dnsdata_71i+memrhs_))).D2v_,1,1,(ssize_t)sizeof(struct rhstype_),(char*)&(*(struct rhstype_ *)(iy_*(ssize_t)sizeof(struct rhstype_)+iz_*dnsdata_62i+ix_*dnsdata_63i+oldrhs_)).D2v_,((*(double*)((-2)*(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double*)((-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double*)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).REAL_)))+(*(double*)((*_17w).d2_-dnsdata_13st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double*)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double*)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+_31w))).REAL_))))-(_20k2*_131r),_129r-(_20k2*_130r)
      		 ,_133.REAL_,_133.IMAG_,expl_.REAL_,expl_.IMAG_);
if( (ix_==0 )&&( iz_==0 )){
       /*! u media conservata in eta.REAL e w media in eta.IMAG*/

double _134r;
register int md135;
double _136r;
double _137r;
_134r=((_98r_97rhsw)+pz_);
 {register double temp=_61r_60rhsu+px_;expl_ .IMAG_=_134r;expl_ .REAL_=temp;};
_136r=( (*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)((-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w)).REAL_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w)).REAL_)))+(*(double *)((*_17w).d0_-dnsdata_13st))*(*(double *)(((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w)).REAL_)))+(*(double *)((ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w)).REAL_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w)).REAL_))));
_137r=ni_*( (*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double *)((-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w)).REAL_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double *)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w)).REAL_)))+(*(double *)((*_17w).d2_-dnsdata_13st))*(*(double *)(((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w)).REAL_)))+(*(double *)((ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double *)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w)).REAL_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double *)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w)).REAL_))));
(*timescheme_)(&(*((struct rhstype_ *)((md135=(iy_+1000)%3,md135>=0?md135:md135+3)*(ssize_t)sizeof(struct rhstype_)+memrhs_))).eta_,1,1,(ssize_t)sizeof(struct rhstype_),(char*)&(*(struct rhstype_ *)(iy_*(ssize_t)sizeof(struct rhstype_)+oldrhs_)).eta_,((*(double*)((-2)*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)((-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).REAL_)))+(*(double*)((*_17w).d0_-dnsdata_13st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(_31w)).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).REAL_)))),_136r
                  ,ni_*((*(double*)((-2)*(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double*)((-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double*)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).REAL_)))+(*(double*)((*_17w).d2_-dnsdata_13st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(_31w)).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double*)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))*(*(double*)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).REAL_)))),_137r
                  ,expl_.REAL_,expl_.IMAG_);
}else{

register int md138;
double _139r;
double _140r;
double _141r;
double _142r;
struct COMPLEX_ _146;
 {register double temp=(-_19beta*_62i_60rhsu)-(-_18alfa*_99i_97rhsw);expl_ .IMAG_=(_19beta*_61r_60rhsu)-(_18alfa*_98r_97rhsw);expl_ .REAL_=temp;};
_139r=( (*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)((-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).IMAG_)))+(*(double *)((*_17w).d0_-dnsdata_13st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(_31w)).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).IMAG_))));
_140r=( ((*(double*)((-2)*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)((-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).REAL_)))+(*(double*)((*_17w).d0_-dnsdata_13st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(_31w)).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(_31w)).REAL_)))));
_141r=( (*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)((-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w))).IMAG_)))+(*(double *)(-(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w))).IMAG_)))+(*(double *)((*_17w).d0_-dnsdata_13st))*(*(double *)(((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w))).IMAG_)))+(*(double *)((ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w))).IMAG_)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w))).IMAG_))));
_142r=( ((*(double*)((-2)*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)((-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w))).REAL_)))+(*(double*)(-(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w))).REAL_)))+(*(double*)((*_17w).d0_-dnsdata_13st))*(*(double*)(((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w))).REAL_)))+(*(double*)((ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w))).REAL_)))+(*(double*)(2*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double*)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((char*)&(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w))).REAL_)))));
 memset(&_146,0,(ssize_t)sizeof(struct COMPLEX_));  {int i_=(-2);do{{double _143r;
double _144r;
double _145i;
_143r=(ni_*((*(double *)(i_*(ssize_t)sizeof(double)+(*_17w).d2_-dnsdata_13st))-_20k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))));
_144r=((-_19beta*(*(struct COMPLEX_*)(i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_31w)).IMAG_)-(-_18alfa*(*(struct COMPLEX_*)(i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w)).IMAG_));
_145i=((_19beta*(*(struct COMPLEX_*)(i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_31w)).REAL_)-(_18alfa*(*(struct COMPLEX_*)(i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_31w)).REAL_)) ;
{register double temp=(*&_146).REAL_+(_143r*_144r);(*&_146).IMAG_=(*&_146).IMAG_+(_143r*_145i);(*&_146).REAL_=temp;};}i_++;}while(i_<=2);}(*timescheme_)(&(*((struct rhstype_ *)((md138=(iy_+1000)%3,md138>=0?md138:md138+3)*(ssize_t)sizeof(struct rhstype_)+iz_*dnsdata_70i+ix_*dnsdata_71i+memrhs_))).eta_,1,1,(ssize_t)sizeof(struct rhstype_),(char*)&(*(struct rhstype_ *)(iy_*(ssize_t)sizeof(struct rhstype_)+iz_*dnsdata_62i+ix_*dnsdata_63i+oldrhs_)).eta_,(-_19beta*_139r)-(-_18alfa*_141r),(_19beta*_140r)-(_18alfa*_142r)
        	   ,_146.REAL_,_146.IMAG_
                   ,expl_.REAL_,expl_.IMAG_);
};

}iz_+=1;};}ix_+=1;};}}
   };
  };
  if( iy_-2>=dnsdata_4nyl ){
     {int ix_=(ismp_*(nx_+1) / 4 ) ;do{  {int iz_=dnsdata_48l;do{{ register int md147;
/*! FOR ix=ismp TO nx BY nsmp AND ALL iz*/
    { char *_148w;
struct rhstype_ *_149w;
_148w=(iy_-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_;
_149w=((struct rhstype_ *)((md147=((iy_-2)+1000)%3,md147>=0?md147:md147+3)*(ssize_t)sizeof(struct rhstype_)+iz_*dnsdata_70i+ix_*dnsdata_71i+memrhs_));
{register double temp=(*_149w).eta_.REAL_;(*(struct COMPLEX_ *)(0+_148w)).IMAG_=(*_149w).eta_.IMAG_;(*(struct COMPLEX_ *)(0+_148w)).REAL_=temp;}; {register double temp=(*_149w).D2v_.REAL_;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_148w)).IMAG_=(*_149w).D2v_.IMAG_;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_148w)).REAL_=temp;};}
}iz_++;}while(iz_<=dnsdata_49h);}ix_+=1;}while(ix_<=((ismp_+1)*(nx_+1) / 4 )-1 );}
  };
 iy_+=1;};}
} if(ismp_<4-1)exit(0);;
 ismp_=0  ;while(ismp_<4-1){if(wait(NULL)<0)traphandler("wait");ismp_+=1;;};
}}


void dnsdirect_11calcp0(struct COMPLEX_ *RESULT_,int ix_,int iz_){{struct freefunc* es=freestack;
  double _16alfa;
/*alfa=_16alfa*/
  double _17beta;
/*beta=_17beta*/

    
  double _18k2;
/*k2=_18k2*/

  _16alfa=alfa0_*(double)(ix_);
_17beta=beta0_*(double)(iz_);
_18k2=(_16alfa*_16alfa)+(_17beta*_17beta);
{
  char *_19w;
_19w=iz_*dnsdata_50i+ix_*dnsdata_51i+V_;
if( _18k2>0.){
    double _20r;
double _21r;
double _22i;
double _23r;
double _24r;
double _25r;
double _26i;
double _27r;
double _28r;
double _29i;
double _30r;
double _31r;
double _32i;
double _33r;
double _34i;
double _35r;
double _36r;
double _37i;
double _38r;
double _39r;
double _40i;
double _41r;
double _42r;
double _43i;
double _44r;
double _45r;
double _46i;
double _47r;
double _48r;
double _49i;
double _50r;
double _51i;
double _52r;
double _53r;
double _54i;
_20r=(*(double *)((-2)*(ssize_t)sizeof(double)+d240_-((-2)*(ssize_t)sizeof(double))));
_21r=(*(struct COMPLEX_*)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).REAL_;
_22i=(*(struct COMPLEX_*)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).IMAG_;
_23r=(*(double *)(-(ssize_t)sizeof(double)+d240_-((-2)*(ssize_t)sizeof(double))));
_24r=(*(double *)(d240_-((-2)*(ssize_t)sizeof(double))));
_25r=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).REAL_;
_26i=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).IMAG_;
_27r=(*(double *)((ssize_t)sizeof(double)+d240_-((-2)*(ssize_t)sizeof(double))));
_28r=(*(struct COMPLEX_*)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).REAL_;
_29i=(*(struct COMPLEX_*)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).IMAG_;
_30r=(*(double *)(2*(ssize_t)sizeof(double)+d240_-((-2)*(ssize_t)sizeof(double))));
_31r=(*(struct COMPLEX_*)(3*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).REAL_;
_32i=(*(struct COMPLEX_*)(3*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).IMAG_;
_33r=((_20r*_21r)+(_23r*(*(struct COMPLEX_*)(_19w)).REAL_)+(_24r*_25r)+(_27r*_28r)+(_30r*_31r));
_34i=((_20r*_22i)+(_23r*(*(struct COMPLEX_*)(_19w)).IMAG_)+(_24r*_26i)+(_27r*_29i)+(_30r*_32i));
_35r=(*(double *)((-2)*(ssize_t)sizeof(double)+d240_-((-2)*(ssize_t)sizeof(double))));
_36r=(*(struct COMPLEX_*)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).REAL_;
_37i=(*(struct COMPLEX_*)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).IMAG_;
_38r=(*(double *)(-(ssize_t)sizeof(double)+d240_-((-2)*(ssize_t)sizeof(double))));
_39r=(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).REAL_;
_40i=(*(struct COMPLEX_*)(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).IMAG_;
_41r=(*(double *)(d240_-((-2)*(ssize_t)sizeof(double))));
_42r=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).REAL_;
_43i=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).IMAG_;
_44r=(*(double *)((ssize_t)sizeof(double)+d240_-((-2)*(ssize_t)sizeof(double))));
_45r=(*(struct COMPLEX_*)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).REAL_;
_46i=(*(struct COMPLEX_*)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).IMAG_;
_47r=(*(double *)(2*(ssize_t)sizeof(double)+d240_-((-2)*(ssize_t)sizeof(double))));
_48r=(*(struct COMPLEX_*)(3*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).REAL_;
_49i=(*(struct COMPLEX_*)(3*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).IMAG_;
_50r=((_35r*_36r)+(_38r*_39r)+(_41r*_42r)+(_44r*_45r)+(_47r*_48r));
_51i=((_35r*_37i)+(_38r*_40i)+(_41r*_43i)+(_44r*_46i)+(_47r*_49i));
_52r= - ni_/_18k2;
_53r=((-_16alfa*_34i)+(-_17beta*_51i));
_54i=((_16alfa*_33r)+(_17beta*_50r));
{register double temp=(_52r*_53r);(*RESULT_).IMAG_=(_52r*_54i);(*RESULT_).REAL_=temp;};
  }else{
    memset(RESULT_,0,(ssize_t)sizeof(struct COMPLEX_));
  };
}}}

void dnsdirect_12calcpn(struct COMPLEX_ *RESULT_,int ix_,int iz_){{struct freefunc* es=freestack;
  double _16alfa;
/*alfa=_16alfa*/
  double _17beta;
/*beta=_17beta*/

    
  double _18k2;
/*k2=_18k2*/

  _16alfa=alfa0_*(double)(ix_);
_17beta=beta0_*(double)(iz_);
_18k2=(_16alfa*_16alfa)+(_17beta*_17beta);
{
  char *_19w;
_19w=iz_*dnsdata_50i+ix_*dnsdata_51i+V_;
if( _18k2>0.){
    double _20r;
double _21r;
double _22i;
double _23r;
double _24r;
double _25i;
double _26r;
double _27r;
double _28i;
double _29r;
double _30r;
double _31i;
double _32r;
double _33r;
double _34i;
double _35r;
double _36i;
double _37r;
double _38r;
double _39i;
double _40r;
double _41r;
double _42i;
double _43r;
double _44r;
double _45i;
double _46r;
double _47r;
double _48i;
double _49r;
double _50r;
double _51i;
double _52r;
double _53i;
double _54r;
double _55r;
double _56i;
_20r=(*(double *)((-2)*(ssize_t)sizeof(double)+d24n_-((-2)*(ssize_t)sizeof(double))));
_21r=(*(struct COMPLEX_*)((ny_-3)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).REAL_;
_22i=(*(struct COMPLEX_*)((ny_-3)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).IMAG_;
_23r=(*(double *)(-(ssize_t)sizeof(double)+d24n_-((-2)*(ssize_t)sizeof(double))));
_24r=(*(struct COMPLEX_*)((ny_-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).REAL_;
_25i=(*(struct COMPLEX_*)((ny_-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).IMAG_;
_26r=(*(double *)(d24n_-((-2)*(ssize_t)sizeof(double))));
_27r=(*(struct COMPLEX_*)((ny_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).REAL_;
_28i=(*(struct COMPLEX_*)((ny_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).IMAG_;
_29r=(*(double *)((ssize_t)sizeof(double)+d24n_-((-2)*(ssize_t)sizeof(double))));
_30r=(*(struct COMPLEX_*)(ny_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).REAL_;
_31i=(*(struct COMPLEX_*)(ny_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).IMAG_;
_32r=(*(double *)(2*(ssize_t)sizeof(double)+d24n_-((-2)*(ssize_t)sizeof(double))));
_33r=(*(struct COMPLEX_*)((ny_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).REAL_;
_34i=(*(struct COMPLEX_*)((ny_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_19w)).IMAG_;
_35r=((_20r*_21r)+(_23r*_24r)+(_26r*_27r)+(_29r*_30r)+(_32r*_33r));
_36i=((_20r*_22i)+(_23r*_25i)+(_26r*_28i)+(_29r*_31i)+(_32r*_34i));
_37r=(*(double *)((-2)*(ssize_t)sizeof(double)+d24n_-((-2)*(ssize_t)sizeof(double))));
_38r=(*(struct COMPLEX_*)((ny_-3)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).REAL_;
_39i=(*(struct COMPLEX_*)((ny_-3)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).IMAG_;
_40r=(*(double *)(-(ssize_t)sizeof(double)+d24n_-((-2)*(ssize_t)sizeof(double))));
_41r=(*(struct COMPLEX_*)((ny_-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).REAL_;
_42i=(*(struct COMPLEX_*)((ny_-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).IMAG_;
_43r=(*(double *)(d24n_-((-2)*(ssize_t)sizeof(double))));
_44r=(*(struct COMPLEX_*)((ny_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).REAL_;
_45i=(*(struct COMPLEX_*)((ny_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).IMAG_;
_46r=(*(double *)((ssize_t)sizeof(double)+d24n_-((-2)*(ssize_t)sizeof(double))));
_47r=(*(struct COMPLEX_*)(ny_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).REAL_;
_48i=(*(struct COMPLEX_*)(ny_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).IMAG_;
_49r=(*(double *)(2*(ssize_t)sizeof(double)+d24n_-((-2)*(ssize_t)sizeof(double))));
_50r=(*(struct COMPLEX_*)((ny_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).REAL_;
_51i=(*(struct COMPLEX_*)((ny_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_19w))).IMAG_;
_52r=((_37r*_38r)+(_40r*_41r)+(_43r*_44r)+(_46r*_47r)+(_49r*_50r));
_53i=((_37r*_39i)+(_40r*_42i)+(_43r*_45i)+(_46r*_48i)+(_49r*_51i));
_54r= - ni_/_18k2;
_55r=((-_16alfa*_36i)+(-_17beta*_53i));
_56i=((_16alfa*_35r)+(_17beta*_52r));
{register double temp=(_54r*_55r);(*RESULT_).IMAG_=(_54r*_56i);(*RESULT_).REAL_=temp;};
  }else{
    memset(RESULT_,0,(ssize_t)sizeof(struct COMPLEX_));
  };
}}}

void dnsdirect_9linsolve(double lambda_){{struct freefunc* es=freestack;
 {int ix_=0  ;while(ix_<=nx_){
  double _16alfa;
/*alfa=_16alfa*/
  
  _16alfa=alfa0_*(double)(ix_);
  {int iz_=dnsdata_25l;do{
    double _17beta;
/*beta=_17beta*/
  
    double _18k2;
/*k2=_18k2*/

    _17beta=beta0_*(double)(iz_);
_18k2=(_16alfa*_16alfa)+(_17beta*_17beta);
 {int iy_=dnsdata_4nyl  ;while(iy_<=dnsdata_5nyh ){  {int i_=(-2);do{ {
      struct dnsdata_s12 *_19w;
_19w=(struct dnsdata_s12 *)(iy_*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_);
(*(double *)(i_*(ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*(2-(-2)+1)+iz_*dnsdata_27i+D2vmat_))=lambda_*((*(double *)(i_*(ssize_t)sizeof(double)+(*_19w).d2_-dnsdata_13st))-_18k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_19w).d0_-dnsdata_13st)))-(ni_*((*(double *)(i_*(ssize_t)sizeof(double)+(*_19w).d4_-dnsdata_13st))-2.*_18k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_19w).d2_-dnsdata_13st))+_18k2*_18k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_19w).d0_-dnsdata_13st))));
      (*(double *)(i_*(ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*(2-(-2)+1)+iz_*dnsdata_27i+etamat_))=lambda_*(*(double *)(i_*(ssize_t)sizeof(double)+(*_19w).d0_-dnsdata_13st))-(ni_*((*(double *)(i_*(ssize_t)sizeof(double)+(*_19w).d2_-dnsdata_13st))-_18k2*(*(double *)(i_*(ssize_t)sizeof(double)+(*_19w).d0_-dnsdata_13st))));
}i_++;}while(i_<=2);}iy_+=1;};}
    /*! condizioni al contorno*/
    if( (prev_==NULL) ){ {
      struct dnsdirect_s4 *_20w;
double _21r;
double _22r;
double _23r;
double _24i;
double _25r;
double _26r;
double _27r;
double _28i;
double _29r;
double _30r;
double _31r;
double _32i;
double _33r;
double _34r;
double _35r;
double _36i;
double _37r;
double _38r;
double _39r;
double _40i;
double _41r;
double _42r;
double _43r;
double _44i;
_20w=(struct dnsdirect_s4 *)(iz_*(ssize_t)sizeof(struct dnsdirect_s4)+ix_*dnsdirect_5i+bc0_);
if( (ix_==0 )&&( iz_==0 )){
        (*_20w).u_.REAL_=u_conv_+u0_;(*_20w).u_.IMAG_=0.;
        {register double temp=(*_20w).w_.REAL_+w_conv_+w0_;(*_20w).w_.IMAG_=(*_20w).w_.IMAG_;(*_20w).w_.REAL_=temp;};
 	memset(&(*_20w).v_,0,(ssize_t)sizeof(struct COMPLEX_));  memset(&(*_20w).vy_,0,(ssize_t)sizeof(struct COMPLEX_));  {register double temp=(*_20w).u_.REAL_+(-(*_20w).w_.IMAG_);(*_20w).eta_.IMAG_=(*_20w).u_.IMAG_+((*_20w).w_.REAL_);(*_20w).eta_.REAL_=temp;};
        (*_20w).ph_.REAL_=t0_;(*_20w).ph_.IMAG_=0.;
      }else{
        {register double temp=(_16alfa*(*_20w).u_.IMAG_)-(-_17beta*(*_20w).w_.IMAG_);(*_20w).vy_.IMAG_=(-_16alfa*(*_20w).u_.REAL_)-(_17beta*(*_20w).w_.REAL_);(*_20w).vy_.REAL_=temp;};
        {register double temp=(-_17beta*(*_20w).u_.IMAG_)-(-_16alfa*(*_20w).w_.IMAG_);(*_20w).eta_.IMAG_=(_17beta*(*_20w).u_.REAL_)-(_16alfa*(*_20w).w_.REAL_);(*_20w).eta_.REAL_=temp;};
      };
      _21r=(*(double *)((-2)*(ssize_t)sizeof(double)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)));
_22r=(1./((*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))));
_23r=((*_20w).vy_.REAL_*_22r);
_24i=((*_20w).vy_.IMAG_*_22r);
{register double temp=(*_20w).v_.REAL_-(_21r*_23r);(*_20w).v_.IMAG_=(*_20w).v_.IMAG_-(_21r*_24i);(*_20w).v_.REAL_=temp;};
      dnsdata_34applybc_0(dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),(-2),2,(ssize_t)sizeof(double),iz_*dnsdata_27i+D2vmat_,v0bc_-((-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st));
      dnsdata_34applybc_0(dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),(-2),2,(ssize_t)sizeof(double),iz_*dnsdata_27i+etamat_,eta0bc_-((-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st));
      _25r=(*(double *)((-2)*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+iz_*dnsdata_27i+D2vmat_));
_26r=(1./((*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))));
_27r=((*_20w).vy_.REAL_*_26r);
_28i=((*_20w).vy_.IMAG_*_26r);
_29r=(*(double *)(-(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+iz_*dnsdata_27i+D2vmat_));
_30r=(1./((*(double *)(-(ssize_t)sizeof(double)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))));
_31r=((*_20w).v_.REAL_*_30r);
_32i=((*_20w).v_.IMAG_*_30r);
{register double temp=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_-(_25r*_27r)-(_29r*_31r);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_-(_25r*_28i)-(_29r*_32i);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_=temp;};
      _33r=(*(double *)((-2)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*(2-(-2)+1)+iz_*dnsdata_27i+D2vmat_));
_34r=(1./((*(double *)(-(ssize_t)sizeof(double)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))));
_35r=((*_20w).v_.REAL_*_34r);
_36i=((*_20w).v_.IMAG_*_34r);
{register double temp=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_-(_33r*_35r);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_-(_33r*_36i);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_=temp;};
      _37r=(*(double *)(-(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+iz_*dnsdata_27i+etamat_));
_38r=(1./((*(double *)(-(ssize_t)sizeof(double)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))));
_39r=((*_20w).eta_.REAL_*_38r);
_40i=((*_20w).eta_.IMAG_*_38r);
{register double temp=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_-(_37r*_39r);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_-(_37r*_40i);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_=temp;};
      _41r=(*(double *)((-2)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*(2-(-2)+1)+iz_*dnsdata_27i+etamat_));
_42r=(1./((*(double *)(-(ssize_t)sizeof(double)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))));
_43r=((*_20w).eta_.REAL_*_42r);
_44i=((*_20w).eta_.IMAG_*_42r);
{register double temp=(*(struct COMPLEX_*)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_-(_41r*_43r);(*(struct COMPLEX_ *)(0+2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_=(*(struct COMPLEX_*)(2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_-(_41r*_44i);(*(struct COMPLEX_ *)(0+2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_=temp;};
}};
    if( (next_==NULL) ){ {
      struct dnsdirect_s4 *_45w;
double _46r;
double _47r;
double _48r;
double _49i;
double _50r;
double _51r;
double _52r;
double _53i;
double _54r;
double _55r;
double _56r;
double _57i;
double _58r;
double _59r;
double _60r;
double _61i;
double _62r;
double _63r;
double _64r;
double _65i;
double _66r;
double _67r;
double _68r;
double _69i;
_45w=(struct dnsdirect_s4 *)(iz_*(ssize_t)sizeof(struct dnsdirect_s4)+ix_*dnsdirect_5i+bcn_);
if( (ix_==0 )&&( iz_==0 )){
        (*_45w).u_.REAL_=u_conv_+un_;(*_45w).u_.IMAG_=0.;
        {register double temp=(*_45w).w_.REAL_+w_conv_+wn_;(*_45w).w_.IMAG_=(*_45w).w_.IMAG_;(*_45w).w_.REAL_=temp;};
	memset(&(*_45w).v_,0,(ssize_t)sizeof(struct COMPLEX_));  memset(&(*_45w).vy_,0,(ssize_t)sizeof(struct COMPLEX_));  {register double temp=(*_45w).u_.REAL_+(-(*_45w).w_.IMAG_);(*_45w).eta_.IMAG_=(*_45w).u_.IMAG_+((*_45w).w_.REAL_);(*_45w).eta_.REAL_=temp;};
        (*_45w).ph_.REAL_=tn_;(*_45w).ph_.IMAG_=0.;
      }else{
        {register double temp=(_16alfa*(*_45w).u_.IMAG_)-(-_17beta*(*_45w).w_.IMAG_);(*_45w).vy_.IMAG_=(-_16alfa*(*_45w).u_.REAL_)-(_17beta*(*_45w).w_.REAL_);(*_45w).vy_.REAL_=temp;};
        {register double temp=(-_17beta*(*_45w).u_.IMAG_)-(-_16alfa*(*_45w).w_.IMAG_);(*_45w).eta_.IMAG_=(_17beta*(*_45w).u_.REAL_)-(_16alfa*(*_45w).w_.REAL_);(*_45w).eta_.REAL_=temp;};
      };
      _46r=(*(double *)(2*(ssize_t)sizeof(double)+vnbc_-dnsdata_13st));
_47r=(1./((*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+vnbc_-dnsdata_13st))));
_48r=((*_45w).vy_.REAL_*_47r);
_49i=((*_45w).vy_.IMAG_*_47r);
{register double temp=(*_45w).v_.REAL_-(_46r*_48r);(*_45w).v_.IMAG_=(*_45w).v_.IMAG_-(_46r*_49i);(*_45w).v_.REAL_=temp;};
      dnsdata_35applybc_n(dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),(-2),2,(ssize_t)sizeof(double),iz_*dnsdata_27i+D2vmat_,vnbc_-dnsdata_13st);
      dnsdata_35applybc_n(dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),(-2),2,(ssize_t)sizeof(double),iz_*dnsdata_27i+etamat_,etanbc_-dnsdata_13st);
      _50r=(*(double *)(2*(ssize_t)sizeof(double)+(ny_-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+iz_*dnsdata_27i+D2vmat_));
_51r=(1./((*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+vnbc_-dnsdata_13st))));
_52r=((*_45w).vy_.REAL_*_51r);
_53i=((*_45w).vy_.IMAG_*_51r);
_54r=(*(double *)((ssize_t)sizeof(double)+(ny_-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+iz_*dnsdata_27i+D2vmat_));
_55r=(1./((*(double *)((ssize_t)sizeof(double)+vnbc_-dnsdata_13st))));
_56r=((*_45w).v_.REAL_*_55r);
_57i=((*_45w).v_.IMAG_*_55r);
{register double temp=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ny_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_-(_50r*_52r)-(_54r*_56r);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ny_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ny_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_-(_50r*_53i)-(_54r*_57i);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ny_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_=temp;};
      _58r=(*(double *)(2*(ssize_t)sizeof(double)+(ny_-2)*(ssize_t)sizeof(double)*(2-(-2)+1)+iz_*dnsdata_27i+D2vmat_));
_59r=(1./((*(double *)((ssize_t)sizeof(double)+vnbc_-dnsdata_13st))));
_60r=((*_45w).v_.REAL_*_59r);
_61i=((*_45w).v_.IMAG_*_59r);
{register double temp=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ny_-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_-(_58r*_60r);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ny_-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ny_-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_-(_58r*_61i);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ny_-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_=temp;};
      _62r=(*(double *)((ssize_t)sizeof(double)+(ny_-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+iz_*dnsdata_27i+etamat_));
_63r=(1./((*(double *)((ssize_t)sizeof(double)+etanbc_-dnsdata_13st))));
_64r=((*_45w).eta_.REAL_*_63r);
_65i=((*_45w).eta_.IMAG_*_63r);
{register double temp=(*(struct COMPLEX_*)((ny_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_-(_62r*_64r);(*(struct COMPLEX_ *)(0+(ny_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_=(*(struct COMPLEX_*)((ny_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_-(_62r*_65i);(*(struct COMPLEX_ *)(0+(ny_-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_=temp;};
      _66r=(*(double *)(2*(ssize_t)sizeof(double)+(ny_-2)*(ssize_t)sizeof(double)*(2-(-2)+1)+iz_*dnsdata_27i+etamat_));
_67r=(1./((*(double *)((ssize_t)sizeof(double)+etanbc_-dnsdata_13st))));
_68r=((*_45w).eta_.REAL_*_67r);
_69i=((*_45w).eta_.IMAG_*_67r);
{register double temp=(*(struct COMPLEX_*)((ny_-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_-(_66r*_68r);(*(struct COMPLEX_ *)(0+(ny_-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_=(*(struct COMPLEX_*)((ny_-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).IMAG_-(_66r*_69i);(*(struct COMPLEX_ *)(0+(ny_-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+iz_*dnsdata_50i+ix_*dnsdata_51i+V_)).REAL_=temp;};
}};
    rbmatmod_1LUdecompStep(dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),iz_*dnsdata_27i+D2vmat_);  rbmatmod_1LUdecompStep(dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),iz_*dnsdata_27i+etamat_);
    {
    char *_70w;
_70w=iz_*dnsdata_50i+ix_*dnsdata_51i+V_;
rbmatmod_2LeftLUDivStep1((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_70w)).REAL_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),iz_*dnsdata_27i+D2vmat_,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_70w)).REAL_);
    rbmatmod_2LeftLUDivStep1((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_70w)).IMAG_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),iz_*dnsdata_27i+D2vmat_,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_70w)).IMAG_);
    rbmatmod_2LeftLUDivStep1((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+_70w)).REAL_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),iz_*dnsdata_27i+etamat_,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+_70w)).REAL_);
    rbmatmod_2LeftLUDivStep1((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+_70w)).IMAG_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),iz_*dnsdata_27i+etamat_,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+_70w)).IMAG_);
}iz_++;}while(iz_<=dnsdata_26h);}
  {if( !(prev_==NULL) ){ fflush(prev_);};};
    {int iz_=dnsdata_48l;do{
    {
    char *_71w;
_71w=iz_*dnsdata_50i+ix_*dnsdata_51i+V_;
rbmatmod_3LeftLUDivStep2((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_71w)).REAL_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),iz_*dnsdata_27i+D2vmat_);
    rbmatmod_3LeftLUDivStep2((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_71w)).IMAG_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),iz_*dnsdata_27i+D2vmat_);
    rbmatmod_3LeftLUDivStep2((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+_71w)).REAL_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),iz_*dnsdata_27i+etamat_);
    rbmatmod_3LeftLUDivStep2((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+_71w)).IMAG_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),iz_*dnsdata_27i+etamat_);
if( (next_==NULL) ){
      struct COMPLEX_ _73;
double _74r;
double _75i;
double _76r;
struct COMPLEX_ _78;
double _79r;
double _80i;
double _81r;
struct COMPLEX_ _83;
double _84r;
double _85i;
double _86r;
struct COMPLEX_ _88;
double _89r;
 memset(&_73,0,(ssize_t)sizeof(struct COMPLEX_)); {int i_= - 2  ;do{{double _72r;
_72r=(*(double *)(i_*(ssize_t)sizeof(double)+vnbc_-dnsdata_13st) );
{register double temp=(*&_73).REAL_+((*(struct COMPLEX_*)((ny_-1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_71w)).REAL_*_72r);(*&_73).IMAG_=(*&_73).IMAG_+((*(struct COMPLEX_*)((ny_-1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_71w)).IMAG_*_72r);(*&_73).REAL_=temp;};}i_+=1;}while(i_<=0);}_74r=((*(struct dnsdirect_s4*)(iz_*(ssize_t)sizeof(struct dnsdirect_s4)+ix_*dnsdirect_5i+bcn_)).v_.REAL_-_73.REAL_);
_75i=((*(struct dnsdirect_s4*)(iz_*(ssize_t)sizeof(struct dnsdirect_s4)+ix_*dnsdirect_5i+bcn_)).v_.IMAG_-_73.IMAG_);
_76r=(1./((*(double *)((ssize_t)sizeof(double)+vnbc_-dnsdata_13st))));
{register double temp=(_74r*_76r);(*(struct COMPLEX_ *)(ny_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_71w)  ).IMAG_=(_75i*_76r);(*(struct COMPLEX_ *)(ny_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_71w)  ).REAL_=temp;};
       memset(&_78,0,(ssize_t)sizeof(struct COMPLEX_)); {int i_= - 2  ;do{{double _77r;
_77r=(*(double *)(i_*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+vnbc_-dnsdata_13st) );
{register double temp=(*&_78).REAL_+((*(struct COMPLEX_*)((ny_-1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_71w)).REAL_*_77r);(*&_78).IMAG_=(*&_78).IMAG_+((*(struct COMPLEX_*)((ny_-1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_71w)).IMAG_*_77r);(*&_78).REAL_=temp;};}i_+=1;}while(i_<=1);}_79r=((*(struct dnsdirect_s4*)(iz_*(ssize_t)sizeof(struct dnsdirect_s4)+ix_*dnsdirect_5i+bcn_)).vy_.REAL_-_78.REAL_);
_80i=((*(struct dnsdirect_s4*)(iz_*(ssize_t)sizeof(struct dnsdirect_s4)+ix_*dnsdirect_5i+bcn_)).vy_.IMAG_-_78.IMAG_);
_81r=(1./((*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+vnbc_-dnsdata_13st))));
{register double temp=(_79r*_81r);(*(struct COMPLEX_ *)((ny_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_71w)).IMAG_=(_80i*_81r);(*(struct COMPLEX_ *)((ny_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_71w)).REAL_=temp;};
       memset(&_83,0,(ssize_t)sizeof(struct COMPLEX_)); {int i_= - 2  ;do{{double _82r;
_82r=(*(double *)(i_*(ssize_t)sizeof(double)+etanbc_-dnsdata_13st) );
{register double temp=(*&_83).REAL_+((*(struct COMPLEX_*)((ny_-1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_71w)).REAL_*_82r);(*&_83).IMAG_=(*&_83).IMAG_+((*(struct COMPLEX_*)((ny_-1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_71w)).IMAG_*_82r);(*&_83).REAL_=temp;};}i_+=1;}while(i_<=0);}_84r=((*(struct dnsdirect_s4*)(iz_*(ssize_t)sizeof(struct dnsdirect_s4)+ix_*dnsdirect_5i+bcn_)).eta_.REAL_-_83.REAL_);
_85i=((*(struct dnsdirect_s4*)(iz_*(ssize_t)sizeof(struct dnsdirect_s4)+ix_*dnsdirect_5i+bcn_)).eta_.IMAG_-_83.IMAG_);
_86r=(1./((*(double *)((ssize_t)sizeof(double)+etanbc_-dnsdata_13st))));
{register double temp=(_84r*_86r);(*(struct COMPLEX_ *)(ny_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_71w)).IMAG_=(_85i*_86r);(*(struct COMPLEX_ *)(ny_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_71w)).REAL_=temp;};
       memset(&_88,0,(ssize_t)sizeof(struct COMPLEX_)); {int i_= - 2  ;do{{double _87r;
_87r=(*(double *)(i_*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+etanbc_-dnsdata_13st) );
{register double temp=(*&_88).REAL_+((*(struct COMPLEX_*)((ny_-1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_71w)).REAL_*_87r);(*&_88).IMAG_=(*&_88).IMAG_+((*(struct COMPLEX_*)((ny_-1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_71w)).IMAG_*_87r);(*&_88).REAL_=temp;};}i_+=1;}while(i_<=1);}_89r=(1./((*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+etanbc_-dnsdata_13st))));
{register double temp=((-_88.REAL_)*_89r);(*(struct COMPLEX_ *)((ny_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_71w)).IMAG_=((-_88.IMAG_)*_89r);(*(struct COMPLEX_ *)((ny_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_71w)).REAL_=temp;};
};
    if( (prev_==NULL) ){
      struct COMPLEX_ _91;
double _92r;
double _93i;
double _94r;
struct COMPLEX_ _96;
double _97r;
double _98i;
double _99r;
struct COMPLEX_ _101;
double _102r;
double _103i;
double _104r;
struct COMPLEX_ _106;
double _107r;
 memset(&_91,0,(ssize_t)sizeof(struct COMPLEX_)); {int i_=0  ;do{{double _90r;
_90r=(*(double *)(i_*(ssize_t)sizeof(double)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)) );
{register double temp=(*&_91).REAL_+((*(struct COMPLEX_*)((1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_71w)).REAL_*_90r);(*&_91).IMAG_=(*&_91).IMAG_+((*(struct COMPLEX_*)((1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_71w)).IMAG_*_90r);(*&_91).REAL_=temp;};}i_+=1;}while(i_<=2);}_92r=((*(struct dnsdirect_s4*)(iz_*(ssize_t)sizeof(struct dnsdirect_s4)+ix_*dnsdirect_5i+bc0_)).v_.REAL_-_91.REAL_);
_93i=((*(struct dnsdirect_s4*)(iz_*(ssize_t)sizeof(struct dnsdirect_s4)+ix_*dnsdirect_5i+bc0_)).v_.IMAG_-_91.IMAG_);
_94r=(1./((*(double *)(-(ssize_t)sizeof(double)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))));
{register double temp=(_92r*_94r);(*(struct COMPLEX_ *)((ssize_t)sizeof(struct COMPLEX_)+_71w) ).IMAG_=(_93i*_94r);(*(struct COMPLEX_ *)((ssize_t)sizeof(struct COMPLEX_)+_71w) ).REAL_=temp;};
       memset(&_96,0,(ssize_t)sizeof(struct COMPLEX_)); {int i_= - 1  ;do{{double _95r;
_95r=(*(double *)(i_*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)) );
{register double temp=(*&_96).REAL_+((*(struct COMPLEX_*)((1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_71w)).REAL_*_95r);(*&_96).IMAG_=(*&_96).IMAG_+((*(struct COMPLEX_*)((1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_71w)).IMAG_*_95r);(*&_96).REAL_=temp;};}i_+=1;}while(i_<=2);}_97r=((*(struct dnsdirect_s4*)(iz_*(ssize_t)sizeof(struct dnsdirect_s4)+ix_*dnsdirect_5i+bc0_)).vy_.REAL_-_96.REAL_);
_98i=((*(struct dnsdirect_s4*)(iz_*(ssize_t)sizeof(struct dnsdirect_s4)+ix_*dnsdirect_5i+bc0_)).vy_.IMAG_-_96.IMAG_);
_99r=(1./((*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))));
{register double temp=(_97r*_99r);(*(struct COMPLEX_ *)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_71w)).IMAG_=(_98i*_99r);(*(struct COMPLEX_ *)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+_71w)).REAL_=temp;};
       memset(&_101,0,(ssize_t)sizeof(struct COMPLEX_)); {int i_=0  ;do{{double _100r;
_100r=(*(double *)(i_*(ssize_t)sizeof(double)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)) );
{register double temp=(*&_101).REAL_+((*(struct COMPLEX_*)((1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_71w)).REAL_*_100r);(*&_101).IMAG_=(*&_101).IMAG_+((*(struct COMPLEX_*)((1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_71w)).IMAG_*_100r);(*&_101).REAL_=temp;};}i_+=1;}while(i_<=2);}_102r=((*(struct dnsdirect_s4*)(iz_*(ssize_t)sizeof(struct dnsdirect_s4)+ix_*dnsdirect_5i+bc0_)).eta_.REAL_-_101.REAL_);
_103i=((*(struct dnsdirect_s4*)(iz_*(ssize_t)sizeof(struct dnsdirect_s4)+ix_*dnsdirect_5i+bc0_)).eta_.IMAG_-_101.IMAG_);
_104r=(1./((*(double *)(-(ssize_t)sizeof(double)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))));
{register double temp=(_102r*_104r);(*(struct COMPLEX_ *)(_71w) ).IMAG_=(_103i*_104r);(*(struct COMPLEX_ *)(_71w) ).REAL_=temp;};
       memset(&_106,0,(ssize_t)sizeof(struct COMPLEX_)); {int i_= - 1  ;do{{double _105r;
_105r=(*(double *)(i_*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)) );
{register double temp=(*&_106).REAL_+((*(struct COMPLEX_*)((1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_71w)).REAL_*_105r);(*&_106).IMAG_=(*&_106).IMAG_+((*(struct COMPLEX_*)((1+i_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_71w)).IMAG_*_105r);(*&_106).REAL_=temp;};}i_+=1;}while(i_<=2);}_107r=(1./((*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))));
{register double temp=((-_106.REAL_)*_107r);(*(struct COMPLEX_ *)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_71w)).IMAG_=((-_106.IMAG_)*_107r);(*(struct COMPLEX_ *)(-(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_71w)).REAL_=temp;};
};
  }iz_++;}while(iz_<=dnsdata_49h);}
  {if( !(next_==NULL) ){ fflush(next_);};};
ix_+=1;};}
}}

void dnsdirect_14deriv(const int f0_l,const int f0_h,const ssize_t f0_i,char *f0__,const int f1_l,const int f1_h,const ssize_t f1_i,char *f1__){{struct freefunc* es=freestack;
if( (prev_==NULL) ){
   (*(double *)(f1__))=0.; {int i_= - 2  ;do{{(*(double *)(f1__))+=(*(double *)(i_*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))))*(*(double *)((1+i_)*f0_i+f0__)) ;}i_+=1;}while(i_<=2);}
   (*(double *)(-f1_i+f1__))=0.; {int i_= - 2  ;do{{(*(double *)(-f1_i+f1__))+=(*(double *)(i_*(ssize_t)sizeof(double)+d14m1_-((-2)*(ssize_t)sizeof(double))))*(*(double *)((1+i_)*f0_i+f0__)) ;}i_+=1;}while(i_<=2);}
};
if( (next_==NULL) ){
   (*(double *)(ny_*f1_i+f1__))=0.; {int i_= - 2  ;do{{(*(double *)(ny_*f1_i+f1__))+=(*(double *)(i_*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))))*(*(double *)((ny_-1+i_)*f0_i+f0__)) ;}i_+=1;}while(i_<=2);}
   (*(double *)((ny_+1)*f1_i+f1__))=0.; {int i_= - 2  ;do{{(*(double *)((ny_+1)*f1_i+f1__))+=(*(double *)(i_*(ssize_t)sizeof(double)+d14np1_-((-2)*(ssize_t)sizeof(double))))*(*(double *)((ny_-1+i_)*f0_i+f0__)) ;}i_+=1;}while(i_<=2);}
};
 {int i_=dnsdata_4nyl  ;do{{ {struct dnsdata_s12 *_16w;
_16w=(struct dnsdata_s12 *)(i_*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_) ;
(*(double *)(i_*f1_i+f1__))=( (*(double *)((-2)*(ssize_t)sizeof(double)+(*_16w).d1_-dnsdata_13st))*(*(double *)((-2)*f0_i+(i_*f0_i+f0__)))+(*(double *)(-(ssize_t)sizeof(double)+(*_16w).d1_-dnsdata_13st))*(*(double *)(-f0_i+(i_*f0_i+f0__)))+(*(double *)((*_16w).d1_-dnsdata_13st))*(*(double *)((i_*f0_i+f0__)))+(*(double *)((ssize_t)sizeof(double)+(*_16w).d1_-dnsdata_13st))*(*(double *)(f0_i+(i_*f0_i+f0__)))+(*(double *)(2*(ssize_t)sizeof(double)+(*_16w).d1_-dnsdata_13st))*(*(double *)(2*f0_i+(i_*f0_i+f0__)))) ;}}i_+=1;}while(i_<=dnsdata_5nyh);}
if( (prev_==NULL) ){
  { struct dnsdata_s12 *_17w;
_17w=(struct dnsdata_s12 *)((ssize_t)sizeof(struct dnsdata_s12)+derivatives_);
(*(double *)(f1_i+f1__))-=((*(double *)(-(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)(f1__))+(*(double *)((-2)*(ssize_t)sizeof(double)+(*_17w).d0_-dnsdata_13st))*(*(double *)(-f1_i+f1__)));}
  { struct dnsdata_s12 *_18w;
_18w=(struct dnsdata_s12 *)(2*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_);
(*(double *)(2*f1_i+f1__))-=(*(double *)((-2)*(ssize_t)sizeof(double)+(*_18w).d0_-dnsdata_13st))*(*(double *)(f1__));}
};
if( (next_==NULL) ){
  { struct dnsdata_s12 *_19w;
_19w=(struct dnsdata_s12 *)((ny_-1)*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_);
(*(double *)((ny_-1)*f1_i+f1__))-=((*(double *)((ssize_t)sizeof(double)+(*_19w).d0_-dnsdata_13st))*(*(double *)(ny_*f1_i+f1__))+(*(double *)(2*(ssize_t)sizeof(double)+(*_19w).d0_-dnsdata_13st))*(*(double *)((ny_+1)*f1_i+f1__)));}
  { struct dnsdata_s12 *_20w;
_20w=(struct dnsdata_s12 *)((ny_-2)*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_);
(*(double *)((ny_-2)*f1_i+f1__))-=(*(double *)(2*(ssize_t)sizeof(double)+(*_20w).d0_-dnsdata_13st))*(*(double *)(ny_*f1_i+f1__));}
};
rbmatmod_2LeftLUDivStep1(f1_l,f1_h,f1_i,f1__,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),D0mat_,f1_l,f1_h,f1_i,f1__);
}}

void dnsdirect_10vetaTOuvw(){{struct freefunc* es=freestack;
/*! Remember: eta=+I*beta*u-I*alfa*w*/
{ {char *_17_;

_17_=(dnsdata_4nyl-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)(V_)).IMAG_; {char *_16_=(dnsdata_4nyl-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_;int _16_1=(dnsdata_5nyh+2)-(dnsdata_4nyl-2); do{{ (*(double *)(_16_))=(*(double *)(_17_)); _17_ =(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_17_;}_16_+=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);_16_1--;}while(_16_1>=0);}} { {char *_18_=(dnsdata_4nyl-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)(V_)).IMAG_;int _18_1=(dnsdata_5nyh+2)-(dnsdata_4nyl-2); do{{ (*(double *)(_18_))=0.;}_18_+=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);_18_1--;}while(_18_1>=0);}} { {char *_19_=(dnsdata_4nyl-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).IMAG_;int _19_1=(dnsdata_5nyh+2)-(dnsdata_4nyl-2); do{{ (*(double *)(_19_))=0.;}_19_+=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);_19_1--;}while(_19_1>=0);}}}
  {int ix_=dnsdata_47h;do{{int iz_=dnsdata_48l;do{ if(!((ix_==0 )&&( iz_==0))){
  {
  char *_20w;
_20w=iz_*dnsdata_50i+ix_*dnsdata_51i+V_;
dnsdirect_14deriv((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_20w)).REAL_,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_20w)).REAL_);
  dnsdirect_14deriv((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+_20w)).IMAG_,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_20w)).IMAG_);
}}iz_++;}while(iz_<=dnsdata_49h);}ix_--;}while(ix_>=0);}
{if( !(prev_==NULL) ){ fflush(prev_);};};
  {int ix_=dnsdata_47h;do{
  double _21alfa;
/*alfa=_21alfa*/

  _21alfa=alfa0_*(double)(ix_);
  {int iz_=dnsdata_48l;do{ if(!((ix_==0 )&&( iz_==0))){
    {
    char *_22w;
double _23beta;
/*beta=_23beta*/
  double _24k2;
/*k2=_24k2*/

    _22w=iz_*dnsdata_50i+ix_*dnsdata_51i+V_;
rbmatmod_3LeftLUDivStep2((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_22w)).REAL_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),D0mat_);
    rbmatmod_3LeftLUDivStep2((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_22w)).IMAG_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),D0mat_);
    {if( !(next_==NULL) ){ fflush(next_);};};
    _23beta=beta0_*(double)(iz_);
_24k2=(_21alfa*_21alfa)+(_23beta*_23beta);
  {int iy_=(dnsdata_4nyl-2);do{{ double _25r;
double _26i;
double _27r;
double _28r;
double _29i;
double _31r_30temp;
double _32i_30temp;
/*temp=_31r_30temp,_32i_30temp*/

      double _33r;
double _34i;
double _35r;
double _36r;
double _37i;
_25r=((_21alfa*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_22w)).REAL_)-(_23beta*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_22w)).REAL_));
_26i=((_21alfa*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_22w)).IMAG_)-(_23beta*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_22w)).IMAG_));
_27r=(1./(_24k2));
_28r=(_25r*_27r);
_29i=(_26i*_27r);
_31r_30temp=(-_29i);
_32i_30temp=_28r;
_33r=((_23beta*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_22w)).REAL_)+(_21alfa*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_22w)).REAL_));
_34i=((_23beta*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_22w)).IMAG_)+(_21alfa*(*(struct COMPLEX_*)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_22w)).IMAG_));
_35r=(1./(_24k2));
_36r=(_33r*_35r);
_37i=(_34i*_35r);
{register double temp=(-_37i);(*(struct COMPLEX_ *)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_22w)).IMAG_=_36r;(*(struct COMPLEX_ *)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+_22w)).REAL_=temp;};
      {register double temp=_31r_30temp;(*(struct COMPLEX_ *)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_22w)).IMAG_=_32i_30temp;(*(struct COMPLEX_ *)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+_22w)).REAL_=temp;};
    }iy_++;}while(iy_<=(dnsdata_5nyh+2));}
  }}iz_++;}while(iz_<=dnsdata_49h);}
ix_--;}while(ix_>=0);}
{if( !(next_==NULL) ){ fflush(next_);};};
}}

void dnsdirect_13computeflowrate(double lambda_){{struct freefunc* es=freestack;
  ssize_t _16i;
ssize_t _17st;
struct freefunc ucorr_f;char *ucorr_;

  struct _s25{double u_;double w_;double uc_;double wc_;};struct _s25 fr_;

  _16i=(ssize_t)sizeof(double)*((dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1);
_17st=(dnsdata_4nyl-2)*(ssize_t)sizeof(double);

ucorr_=malloc(_16i);if(ucorr_==NULL)errmalloc();ucorr_-=_17st;atblockexit(ucorr_f,free,ucorr_+_17st);memset(_17st+ucorr_,0,_16i); {int iy_=dnsdata_4nyl  ;do{{ (*(double *)(iy_*(ssize_t)sizeof(double)+ucorr_))=1.;}iy_+=1;}while(iy_<=dnsdata_5nyh);}
   {int iy_=dnsdata_4nyl  ;while(iy_<=dnsdata_5nyh ){{
     struct dnsdata_s12 *_18w;
_18w=(struct dnsdata_s12 *)(iy_*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_);
{  {int _19i_=(-2);do{{(*(double *)(_19i_*(ssize_t)sizeof(double)+iy_*(ssize_t)sizeof(double)*(2-(-2)+1)+etamat_))=lambda_*(*(double *)(_19i_*(ssize_t)sizeof(double)+(*_18w).d0_-dnsdata_13st))-ni_*(*(double *)(_19i_*(ssize_t)sizeof(double)+(*_18w).d2_-dnsdata_13st)) ;}_19i_++;}while(_19i_<=2);}}
  }iy_+=1;};}
  if( (prev_==NULL) ){ dnsdata_34applybc_0(dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),(-2),2,(ssize_t)sizeof(double),etamat_,eta0bc_-((-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st));};
  if( (next_==NULL)  ){ dnsdata_35applybc_n(dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),(-2),2,(ssize_t)sizeof(double),etamat_,etanbc_-dnsdata_13st);};
  rbmatmod_1LUdecompStep(dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),etamat_);
  rbmatmod_2LeftLUDivStep1((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(double),ucorr_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),etamat_,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(double),ucorr_);
  {if( !(prev_==NULL) ){ fflush(prev_);};};
  rbmatmod_3LeftLUDivStep2((dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(double),ucorr_,dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),etamat_);
  {if( !(next_==NULL) ){ fflush(next_);};};
  if( (next_==NULL) ){
    double _21;
double _22;
 _21=0.; {int i_= - 2  ;do{{(*&_21)+=(*(double *)((ny_-1+i_)*(ssize_t)sizeof(double)+ucorr_))*(*(double *)(i_*(ssize_t)sizeof(double)+etanbc_-dnsdata_13st) );}i_+=1;}while(i_<=0);}(*(double *)(ny_*(ssize_t)sizeof(double)+ucorr_)  )=( - _21)/(*(double *)((ssize_t)sizeof(double)+etanbc_-dnsdata_13st));
     _22=0.; {int i_= - 2  ;do{{(*&_22)+=(*(double *)((ny_-1+i_)*(ssize_t)sizeof(double)+ucorr_))*(*(double *)(i_*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+etanbc_-dnsdata_13st) );}i_+=1;}while(i_<=1);}(*(double *)((ny_+1)*(ssize_t)sizeof(double)+ucorr_))=( - _22)/(*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*(2-(-2)+1)+etanbc_-dnsdata_13st));
  };
  if( (prev_==NULL) ){
    double _23;
double _24;
 _23=0.; {int i_=0  ;do{{(*&_23)+=(*(double *)((1+i_)*(ssize_t)sizeof(double)+ucorr_))*(*(double *)(i_*(ssize_t)sizeof(double)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)) );}i_+=1;}while(i_<=2);}(*(double *)(ucorr_) )=( - _23)/(*(double *)(-(ssize_t)sizeof(double)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)));
     _24=0.; {int i_= - 1  ;do{{(*&_24)+=(*(double *)((1+i_)*(ssize_t)sizeof(double)+ucorr_))*(*(double *)(i_*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)) );}i_+=1;}while(i_<=2);}(*(double *)(-(ssize_t)sizeof(double)+ucorr_))=( - _24)/(*(double *)((-2)*(ssize_t)sizeof(double)-(ssize_t)sizeof(double)*(2-(-2)+1)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)));
  };
  {
    {int iy_=(dnsdata_4nyl-2);do{{ memset((struct COMPLEX_ *)(iy_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(ssize_t)sizeof(struct COMPLEX_)+V_),0,(ssize_t)sizeof(struct COMPLEX_)); }iy_++;}while(iy_<=(dnsdata_5nyh+2));}
  if( !(prev_==NULL) ){   if(!(fread(0+&fr_ ,(ssize_t)sizeof(struct _s25),1, prev_ )==1))ioerr( prev_ );}else{ memset(&fr_,0,(ssize_t)sizeof(struct _s25));};
  dnsdata_36yintegr(&fr_.u_ ,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+V_)).REAL_);
  dnsdata_36yintegr(&fr_.w_ ,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_);
  dnsdata_36yintegr(&fr_.uc_ ,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(double),ucorr_);
  if( !(next_==NULL) ){ fwrite(&fr_,(ssize_t)sizeof(struct _s25),1,next_); fflush(next_);   if(!(fread(0+&fr_,(ssize_t)sizeof(struct _s25),1, next_ )==1))ioerr( next_ );};
  if( !(prev_==NULL) ){ fwrite(&fr_,(ssize_t)sizeof(struct _s25),1,prev_); fflush(prev_);};
   px_ = (1.-gamma_)*6.*ni_/fr_.u_   /*!Constant Power Input*/;
/*!  pz = (1-gamma)*6*ni/fr.w   !Constant Power Input*/
  if( meanflowx_ != -99.){
    px_=0.;  corrpx_=(meanflowx_+u_conv_*(ymax_-ymin_)-fr_.u_)/fr_.uc_ /*! Constant Q*/;
    {  {int _27i_=(dnsdata_4nyl-2);do{{(*(double *)(_27i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)(V_)).REAL_))+=corrpx_*(*(double *)(_27i_*(ssize_t)sizeof(double)+ucorr_)) ;}_27i_++;}while(_27i_<=(dnsdata_5nyh+2));}}
  };
  if( meanflowz_ != -99.){
    pz_=0.;  corrpz_=(meanflowz_+w_conv_*(ymax_-ymin_)-fr_.w_)/fr_.uc_  /*! Constant Q*/;
    {  {int _29i_=(dnsdata_4nyl-2);do{{(*(double *)(_29i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+(char*)&(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_))+=corrpz_*(*(double *)(_29i_*(ssize_t)sizeof(double)+ucorr_)) ;}_29i_++;}while(_29i_<=(dnsdata_5nyh+2));}}
  };
  if( meanpx_ != -99.){  px_ = meanpx_ /*! Constant Px*/;};
  if( meanpz_ != -99.){  pz_ = meanpz_ /*! Constant Pz*/;};
  if( !(prev_==NULL) ){   if(!(fread(0+&fr_ ,(ssize_t)sizeof(struct _s25),1, prev_ )==1))ioerr( prev_ );}else{ memset(&fr_,0,(ssize_t)sizeof(struct _s25));};
  dnsdata_36yintegr(&fr_.u_ ,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+V_)).REAL_);
  dnsdata_36yintegr(&fr_.w_ ,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),(char*)&(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+V_)).REAL_);
  dnsdata_36yintegr(&fr_.uc_ ,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(double),ucorr_);
  if( !(next_==NULL) ){ fwrite(&fr_,(ssize_t)sizeof(struct _s25),1,next_); fflush(next_);   if(!(fread(0+&fr_,(ssize_t)sizeof(struct _s25),1, next_ )==1))ioerr( next_ );};
  if( !(prev_==NULL) ){ fwrite(&fr_,(ssize_t)sizeof(struct _s25),1,prev_); fflush(prev_);};
  flowx_=fr_.u_-u_conv_*(ymax_-ymin_);  flowz_=fr_.w_-w_conv_*(ymax_-ymin_);
  if( (prev_==NULL) ){
      u1zero_=0.; {int i_= - 2  ;do{{(*&u1zero_)+=(*(double *)(i_*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))))*(*(struct COMPLEX_ *)(0+(i_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_)).REAL_ ;}i_+=1;}while(i_<=2);}
      w1zero_=0.; {int i_= - 2  ;do{{(*&w1zero_)+=(*(double *)(i_*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))))*(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(i_+1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+V_)).REAL_ ;}i_+=1;}while(i_<=2);}
};
if( !(prev_==NULL) ){   if(!(fread(0+&u1zero_,(ssize_t)sizeof(double),1, prev_ )==1&& fread(0+&w1zero_,(ssize_t)sizeof(double),1, prev_ )==1))ioerr( prev_ ); fflush(prev_);};
  if( !(next_==NULL)  ){ fwrite(&u1zero_,(ssize_t)sizeof(double),1,next_); fwrite(&w1zero_,(ssize_t)sizeof(double),1,next_); fflush(next_);};
}freemem(es);}}

