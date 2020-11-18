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
/**/
void rbmatmod_1LUdecompStep(const int A_l,const int A_h,const ssize_t A_i,char *A__){{struct freefunc* es=freestack;
  double piv_;

  if( (next_==NULL) ){ memset((ssize_t)sizeof(double)+(A_h-2)*A_i+A__,0,(ssize_t)sizeof(double)*2); (*(double *)(2*(ssize_t)sizeof(double)+(A_h-3)*A_i+A__))=0.;}else{
    ssize_t _2st;
_2st=(-2)*(ssize_t)sizeof(double);
  if(!(fread(_2st+(A_h-1)*A_i+A__,(ssize_t)sizeof(double)*(2-(-2)+1),1, next_ )==1&&fread(_2st+A_h*A_i+A__,(ssize_t)sizeof(double)*(2-(-2)+1),1, next_ )==1))ioerr( next_ );
  };
   {int i_=A_h-2  ;while(i_>=A_l){
     {int k_=2  ;while(k_>=1){
      char *j_3;char *j_4;

      j_3=k_*(ssize_t)sizeof(double)+i_*A_i+A__;j_4=(i_+k_)*A_i+A__;piv_=(*(double *)(j_3));
       {int _t5= - (-2) ;do{{ j_3=-(ssize_t)sizeof(double)+j_3;j_4=-(ssize_t)sizeof(double)+j_4;  (*(double *)(j_3))-=piv_*(*(double *)(j_4) );}_t5--;}while(_t5>0);}
    k_-=1;};}
    piv_=1./(*(double *)(i_*A_i+A__));  (*(double *)(i_*A_i+A__))=piv_;
     {char *j_=(-2)*(ssize_t)sizeof(double)+i_*A_i+A__;int j_1=(-1)-(-2);  while(j_1>=0){ (*(double *)(j_))*=piv_;j_+=(ssize_t)sizeof(double);j_1--;};}
  i_-=1;};}
  if( (prev_==NULL) ){ ssize_t _7st;
_7st=(-2)*(ssize_t)sizeof(double);
memset(_7st+A_l*A_i+A__,0,(ssize_t)sizeof(double)*((-1)-(-2)+1)); (*(double *)((-2)*(ssize_t)sizeof(double)+(A_l+1)*A_i+A__))=0.;}else{
    ssize_t _8st;
_8st=(-2)*(ssize_t)sizeof(double);
fwrite(_8st+A_l*A_i+A__,(ssize_t)sizeof(double)*(2-(-2)+1),1,prev_);fwrite(_8st+(A_l+1)*A_i+A__,(ssize_t)sizeof(double)*(2-(-2)+1),1,prev_);
  };
}}

void rbmatmod_2LeftLUDivStep1(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,char *A__,const int t_l,const int t_h,const ssize_t t_i,char *t__){{struct freefunc* es=freestack;
  if( !(next_==NULL) ){   if(!(fread(0+(double *)((x_h-1)*x_i+x__),(ssize_t)sizeof(double),1, next_ )==1&&fread(0+(double *)(x_h*x_i+x__),(ssize_t)sizeof(double),1, next_ )==1))ioerr( next_ );};
   {int i_=A_h-2  ;while(i_>=A_l){
    char *j_3;char *j_4;

    double sum_;

    j_3=2*(ssize_t)sizeof(double)+i_*A_i+A__;j_4=2*x_i+i_*x_i+x__;sum_=(*(double *)(i_*t_i+t__)); {int _t5=2 ;while(_t5>0){ sum_-=(*(double *)(j_3))*(*(double *)(j_4)); j_3=-(ssize_t)sizeof(double)+j_3;j_4=-x_i+j_4;_t5--;};}
    (*(double *)(j_4))=sum_*(*(double *)(j_3));
  i_-=1;};}
  if( !(prev_==NULL) ){ fwrite((double*)((x_l+2)*x_i+x__),(ssize_t)sizeof(double),1,prev_);fwrite((double*)((x_l+3)*x_i+x__),(ssize_t)sizeof(double),1,prev_);};
}}



void rbmatmod_3LeftLUDivStep2(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,char *A__){{struct freefunc* es=freestack;
  if( !(prev_==NULL) ){   if(!(fread(0+(double *)(x_l*x_i+x__),(ssize_t)sizeof(double),1, prev_ )==1&&fread(0+(double *)((x_l+1)*x_i+x__),(ssize_t)sizeof(double),1, prev_ )==1))ioerr( prev_ );};
   {int i_=A_l  ;while(i_<=A_h){
    char *j_4;char *j_5;

    double sum_;

    j_4=(-2)*(ssize_t)sizeof(double)+i_*A_i+A__;j_5=(-2)*x_i+i_*x_i+x__;sum_=0.; {int _t6= - (-2) ;while(_t6>0){ sum_+=(*(double *)(j_4))*(*(double *)(j_5)); j_4=(ssize_t)sizeof(double)+j_4;j_5=x_i+j_5;_t6--;};}
    (*(double *)(j_5))-=sum_;
  i_+=1;};}
  if( !(next_==NULL) ){ fwrite((double*)((x_h-3)*x_i+x__),(ssize_t)sizeof(double),1,next_);fwrite((double*)((x_h-2)*x_i+x__),(ssize_t)sizeof(double),1,next_);};
}}



void rbmatmod_4RightLUDivStep1(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,const int A_l,const int A_h,const ssize_t A_i,char *A__){{struct freefunc* es=freestack;
  if( !(next_==NULL) ){   if(!(fread(0+(double *)((x_h-1)*x_i+x__),(ssize_t)sizeof(double),1, next_ )==1&&fread(0+(double *)(x_h*x_i+x__),(ssize_t)sizeof(double),1, next_ )==1))ioerr( next_ );};
   {int i_=A_h-2  ;while(i_>=A_l){
    double sum_;

    sum_=(*(double *)(i_*t_i+t__)); {int j_=(-2)  ;do{{ sum_-=(*(double *)(j_*(ssize_t)sizeof(double)+(i_-j_)*A_i+A__))*(*(double *)((i_-j_)*x_i+x__) );}j_+=1;}while(j_<= - 1);}
    (*(double *)(i_*x_i+x__))=sum_;
  i_-=1;};}
  if( !(prev_==NULL) ){ fwrite((double*)((x_l+2)*x_i+x__),(ssize_t)sizeof(double),1,prev_);fwrite((double*)((x_l+3)*x_i+x__),(ssize_t)sizeof(double),1,prev_);};
}}

void rbmatmod_5RightLUDivStep2(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,char *A__){{struct freefunc* es=freestack;
  if( !(prev_==NULL) ){   if(!(fread(0+(double *)(x_l*x_i+x__),(ssize_t)sizeof(double),1, prev_ )==1&&fread(0+(double *)((x_l+1)*x_i+x__),(ssize_t)sizeof(double),1, prev_ )==1&&fread(0+(double *)((x_l+2)*x_i+x__),(ssize_t)sizeof(double),1, prev_ )==1&&fread(0+(double *)((x_l+3)*x_i+x__),(ssize_t)sizeof(double),1, prev_ )==1))ioerr( prev_ );};
   {int i_=A_l  ;while(i_<=A_h-2){
    char *j_6;char *j_7;

    double _8p;
/*p=_8p*/

    j_6=i_*A_i+A__;j_7=i_*x_i+x__;_8p=(*(double *)(j_7))*(*(double *)(i_*A_i+A__));
(*(double *)(j_7))=_8p;
     {int _t9=2 ;do{{ j_6=(ssize_t)sizeof(double)+j_6;j_7=x_i+j_7;  (*(double *)(j_7))-=(*(double *)(j_6))*_8p ;}_t9--;}while(_t9>0);}
  i_+=1;};}
  if( !(next_==NULL) ){
    fwrite((double*)((x_h-3)*x_i+x__),(ssize_t)sizeof(double),1,next_);fwrite((double*)((x_h-2)*x_i+x__),(ssize_t)sizeof(double),1,next_);fwrite((double*)((x_h-1)*x_i+x__),(ssize_t)sizeof(double),1,next_);fwrite((double*)(x_h*x_i+x__),(ssize_t)sizeof(double),1,next_);
    (*(double *)((x_h-1)*x_i+x__))*=(*(double *)((A_h-1)*A_i+A__));
    (*(double *)(x_h*x_i+x__))=((*(double *)(x_h*x_i+x__))-(*(double *)((ssize_t)sizeof(double)+(A_h-1)*A_i+A__))*(*(double *)((x_h-1)*x_i+x__)))*(*(double *)(A_h*A_i+A__));
  };  
}}
