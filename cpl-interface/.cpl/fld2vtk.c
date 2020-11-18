/**/

#define _GNU_SOURCE
#define _FILE_OFFSET_BITS 64
#define _LARGE_FILES
#define printERR fprintf(stderr,"\r%s: PROGRAM HALTED  \n",errormessage);fflush(stderr)




#include <unistd.h>

#include <stdlib.h>
/*** struct __pthread_mutex_s
 {
 int __lock;
 unsigned int __count;
 int __owner;
unsigned int __nusers;
int __kind;
short __spins;
 short __elision;
 __pthread_list_t __list;
} __data ununderstood ***/

#include <stdio.h>

#include <fcntl.h>

#include <math.h>

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
volatile int ln; char volatile *fn;
/*!(
<*#ifdef __GNUC__
  const
#endif
int cb(int lb, int ub, int index);
#ifdef __GNUC__
  const
#endif
char* cp(int inputpos);
#ifdef __GNUC__
  const
#endif
char *cr(char *lb, char *ub, char *index);
*>
!)*/
/*! nota: #ifdef non passa in C SECTION*/
#undef printERR
#define printERR fprintf(stderr,"\r%s in line %d of %s: PROGRAM HALTED  \n",errormessage,ln,fn);fflush(stderr)
extern const int cb(int lb, int ub, int index);extern const char * cp(void);extern const int ca(void);extern const char sigNAN[8];
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
struct freefunc vtkname_f;char *vtkname_;

int nfmin_;
int nfmax_;

struct freefunc outfile_f;FILE *outfile_;

float tmpu_;
float tmpv_;
float tmpw_;
float tmp_;

int fld2vtk_1h;
int fld2vtk_2h;
int fld2vtk_3h;
ssize_t fld2vtk_4i;
ssize_t fld2vtk_5i;
ssize_t fld2vtk_6i;
ssize_t fld2vtk_7st;
struct freefunc Vdd_f;char *Vdd_;

mainstart




fn="fld2vtk.cpl";
ln=2;gamma_=0.0;fn="dnsdata.cpl";fn="/pfs/data5/home/kit/istm/xt8786/fri_BWCL/fft.cpl";fn="/pfs/data5/home/kit/istm/xt8786/fri_BWCL/complex.cpl";

fn="/pfs/data5/home/kit/istm/xt8786/fri_BWCL/fft.cpl";fft: 

ln=38;fft_fft_LASTN=1;ln=56;fft_fft_12C3=sin(3.14159265358979323846/3.);
fft_exit:;


fn="dnsdata.cpl";fn="/pfs/data5/home/kit/istm/xt8786/fri_BWCL/rbmat.cpl";

fn="/pfs/data5/home/kit/istm/xt8786/fri_BWCL/matrix.cmn";
ln=258;Lanczos_norm_=0.;fn="/pfs/data5/home/kit/istm/xt8786/fri_BWCL/rbmat.cpl";

Lanczos_R: 
Lanczos_R_exit:;
fn="dnsdata.cpl";fn="/pfs/data5/home/kit/istm/xt8786/fri_BWCL/parallel.cpl";

ln=62;setup_signal_USR1();


barrier_=mmap(NULL,(ssize_t)sizeof(volatile int),PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(barrier_==MAP_FAILED)errmalloc();atblockexit(barrier_f,barrier_free,(void*)barrier_);ln=187;(*barrier_)=0;fn="dnsdata.cpl";ln=12;if( (argc-1)<1 ){ iproc_=1; nproc_=1 ;}else{
ln=12;iproc_=atoi((void *)((*(char**)(cb(0,(argc-1),1)*(ssize_t)sizeof(char*)+(char*)argv))));  ln=12;nproc_=atoi((void *)((*(char**)(cb(0,(argc-1),2)*(ssize_t)sizeof(char*)+(char*)argv))));  };
prev_=NULL;atblockexit(prev_f,errfclose,&prev_);next_=NULL;atblockexit(next_f,errfclose,&next_);ln=18;if( iproc_<nproc_ ){
  ln=16;next_=fdopen(tcpserver((IPPORT_USERRESERVED+111)+iproc_),(void *)("r+"));
  ln=17;setvbuf(next_,malloc(800),_IOFBF,800);
};
ln=22;if( iproc_>1 ){
  ln=20;prev_=fdopen(tcpclient((void *)((*(char**)(cb(0,(argc-1),3)*(ssize_t)sizeof(char*)+(char*)argv))),(IPPORT_USERRESERVED+111)+iproc_-1),(void *)("r+"));
  ln=21;setvbuf(prev_,malloc(800),_IOFBF,800);
};
fn="rbmatmod.cpl";fn="dnsdata.cpl";

ln=31;meanpx_=-99.;ln=31;meanpz_=-99.;ln=31;meanflowx_=-99.;ln=31;meanflowz_=-99.;ln=31;px_=0.;ln=31;corrpx_=0.;ln=31;pz_=0.;ln=31;corrpz_=0.;ln=31;flowx_=0.;ln=31;flowz_=0.;ln=31;deltat_=0.;ln=31;cflmax_=0.;ln=31;time_=0.;restart_file_=0;atblockexit(restart_file_f,condfree,restart_file_);ln=62;reread_=0;ln=67;dnsdata_1read_initial_data();  ln=67;signal(SIGUSR2,dnsdata_2kill_received);

/*! Grid in y direction and compact finite differences operators*/
ln=70;dnsdata_4nyl=1+((iproc_-1)*(ny_-1) / nproc_);
ln=70;dnsdata_5nyh=(iproc_*(ny_-1) / nproc_);
ln=71;dnsdata_6M=dnsdata_4nyl-4;
dnsdata_7l= - 1;if(dnsdata_7l<dnsdata_6M)dnsdata_7l=dnsdata_6M;ln=71;dnsdata_8m=dnsdata_5nyh+4;
dnsdata_9h=ny_+1;if(dnsdata_9h>dnsdata_8m)dnsdata_9h=dnsdata_8m;ln=71;dnsdata_10i=(ssize_t)sizeof(double)*(dnsdata_9h-dnsdata_7l+1);
ln=71;dnsdata_11st=dnsdata_7l*(ssize_t)sizeof(double);

y_=malloc(dnsdata_10i);if(y_==NULL)errmalloc();y_-=dnsdata_11st;atblockexit(y_f,free,y_+dnsdata_11st);ln=74;  {int i_=(0?ca():dnsdata_7l);do{ /*!Channel*/{ ln=74;(*(double *)(cb(dnsdata_7l,dnsdata_9h,i_)*(ssize_t)sizeof(double)+y_))=ymin_+0.5*(ymax_-ymin_)*(tanh(a_*((double)(2*i_)/(double)(ny_)-1.))/tanh(a_)+0.5*(ymax_-ymin_)) ;}i_++;}while(i_<=(0?ca():dnsdata_9h));}


ln=77;dnsdata_13st=(-2)*(ssize_t)sizeof(double);
ln=77;dnsdata_14M=dnsdata_4nyl-2;
dnsdata_15l=1;if(dnsdata_15l<dnsdata_14M)dnsdata_15l=dnsdata_14M;ln=77;dnsdata_16m=dnsdata_5nyh+2;
dnsdata_17h=ny_-1;if(dnsdata_17h>dnsdata_16m)dnsdata_17h=dnsdata_16m;ln=77;dnsdata_18i=(ssize_t)sizeof(struct dnsdata_s12)*(dnsdata_17h-dnsdata_15l+1);
ln=77;dnsdata_19st=dnsdata_15l*(ssize_t)sizeof(struct dnsdata_s12);

derivatives_=malloc(dnsdata_18i);if(derivatives_==NULL)errmalloc();derivatives_-=dnsdata_19st;atblockexit(derivatives_f,free,derivatives_+dnsdata_19st);setup_derivatives: 
ln=82;dnsdata_setup_derivatives_20M=dnsdata_4nyl-2;
ln=82;dnsdata_setup_derivatives_21m=dnsdata_5nyh+2;
dnsdata_setup_derivatives_22=1;if(dnsdata_setup_derivatives_22<dnsdata_setup_derivatives_20M)dnsdata_setup_derivatives_22=dnsdata_setup_derivatives_20M;dnsdata_setup_derivatives_23=ny_-1;if(dnsdata_setup_derivatives_23>dnsdata_setup_derivatives_21m)dnsdata_setup_derivatives_23=dnsdata_setup_derivatives_21m;ln=94; {int iy_=dnsdata_setup_derivatives_22  ;while(iy_<=dnsdata_setup_derivatives_23 ){{
  struct dnsdata_s12 *dnsdata_setup_derivatives_24w;
ln=82;dnsdata_setup_derivatives_24w=(struct dnsdata_s12 *)(cb(dnsdata_15l,dnsdata_17h,iy_)*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_);
ln=83; {int i_=0  ;do{ {int j_=0  ;do{{ ln=83;(*(double *)(cb(0,4,j_)*(ssize_t)sizeof(double)+cb(0,4,i_)*(ssize_t)sizeof(double)*(4+1)+dnsdata_setup_derivatives_M))=pow(((*(double *)(cb(dnsdata_7l,dnsdata_9h,iy_-2+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(cb(dnsdata_7l,dnsdata_9h,iy_)*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_+=1;}while(j_<=4);}i_+=1;}while(i_<=4 );}  ln=83;rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),dnsdata_setup_derivatives_M);
  ln=84;memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  ln=84;(*(double *)(cb(0,4,0)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=24.;
  ln=85;{{ln=85;rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d4_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); ln=85;rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d4_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d4_-dnsdata_13st));};}
  ln=86; {int i_=0  ;do{ {int j_=0  ;do{{ ln=86;(*(double *)(cb(0,4,j_)*(ssize_t)sizeof(double)+cb(0,4,i_)*(ssize_t)sizeof(double)*(4+1)+dnsdata_setup_derivatives_M))=(double)((5-i_)*(6-i_)*(7-i_)*(8-i_))*pow(((*(double *)(cb(dnsdata_7l,dnsdata_9h,iy_-2+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(cb(dnsdata_7l,dnsdata_9h,iy_)*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_+=1;}while(j_<=4);}i_+=1;}while(i_<=4 );}  ln=86;rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),dnsdata_setup_derivatives_M);
  ln=87; {int i_=0  ;do{{ ln=87; (*(double *)(cb(0,4,i_)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=0.; {int j_= - 2  ;do{{ln=87;(*(double *)(cb(0,4,i_)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))+=((*(double *)(cb((-2),2,j_)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d4_-dnsdata_13st))*pow(((*(double *)(cb(dnsdata_7l,dnsdata_9h,iy_+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(cb(dnsdata_7l,dnsdata_9h,iy_)*(ssize_t)sizeof(double)+y_))),(8-i_))) ;}j_+=1;}while(j_<=2 );}}i_+=1;}while(i_<=4);}
  ln=88;{{ln=88;rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d0_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); ln=88;rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d0_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d0_-dnsdata_13st));};}
  ln=89; {int i_=0  ;do{ {int j_=0  ;do{{ ln=89;(*(double *)(cb(0,4,j_)*(ssize_t)sizeof(double)+cb(0,4,i_)*(ssize_t)sizeof(double)*(4+1)+dnsdata_setup_derivatives_M))=pow(((*(double *)(cb(dnsdata_7l,dnsdata_9h,iy_-2+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(cb(dnsdata_7l,dnsdata_9h,iy_)*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_+=1;}while(j_<=4);}i_+=1;}while(i_<=4 );}  ln=89;rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),dnsdata_setup_derivatives_M);
  ln=90;memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  ln=90; {int i_=0  ;do{{ ln=90; (*(double *)(cb(0,4,i_)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=0.; {int j_= - 2  ;do{{ln=90;(*(double *)(cb(0,4,i_)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))+=(*(double *)(cb((-2),2,j_)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d0_-dnsdata_13st))*(double)((4-i_))*(double)((3-i_))*pow(((*(double *)(cb(dnsdata_7l,dnsdata_9h,iy_+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(cb(dnsdata_7l,dnsdata_9h,iy_)*(ssize_t)sizeof(double)+y_))),(2-i_) );}j_+=1;}while(j_<=2 );}}i_+=1;}while(i_<=2);}
  ln=91;{{ln=91;rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d2_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); ln=91;rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d2_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d2_-dnsdata_13st));};}
  ln=92;memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  ln=92; {int i_=0  ;do{{ ln=92; (*(double *)(cb(0,4,i_)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=0.; {int j_= - 2  ;do{{ln=92;(*(double *)(cb(0,4,i_)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))+=(*(double *)(cb((-2),2,j_)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d0_-dnsdata_13st))*(double)((4-i_))*pow(((*(double *)(cb(dnsdata_7l,dnsdata_9h,iy_+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(cb(dnsdata_7l,dnsdata_9h,iy_)*(ssize_t)sizeof(double)+y_))),(3-i_) );}j_+=1;}while(j_<=2 );}}i_+=1;}while(i_<=3);}
  ln=93;{{ln=93;rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d1_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); ln=93;rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d1_-dnsdata_13st),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*dnsdata_setup_derivatives_24w).d1_-dnsdata_13st));};}
}iy_+=1;};}
ln=109;if( (prev_==NULL) ){
  ln=96;memset(dnsdata_13st+d040_-((-2)*(ssize_t)sizeof(double)),0,(ssize_t)sizeof(double)*(2-(-2)+1));  ln=96;(*(double *)(cb((-2),2, - 1)*(ssize_t)sizeof(double)+d040_-((-2)*(ssize_t)sizeof(double))))=1.;
  ln=97; {int i_=0  ;do{ {int j_=0  ;do{{ ln=97;(*(double *)(cb(0,4,j_)*(ssize_t)sizeof(double)+cb(0,4,i_)*(ssize_t)sizeof(double)*(4+1)+dnsdata_setup_derivatives_M))=pow(((*(double *)(cb(dnsdata_7l,dnsdata_9h, - 1+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(cb(dnsdata_7l,dnsdata_9h,0)*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_+=1;}while(j_<=4);}i_+=1;}while(i_<=4 );}  ln=97;rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),dnsdata_setup_derivatives_M);
  ln=98;memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  ln=98;(*(double *)(cb(0,4,3)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=1.;
  ln=99;{{ln=99;rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); ln=99;rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d140_-((-2)*(ssize_t)sizeof(double))));};}
  ln=100;memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  ln=100;(*(double *)(cb(0,4,2)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=2.;
  ln=101;{{ln=101;rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d240_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); ln=101;rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d240_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d240_-((-2)*(ssize_t)sizeof(double))));};}
  ln=102;memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  ln=102;(*(double *)(cb(0,4,3)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=6.;
  ln=103;{{ln=103;rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d340_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); ln=103;rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d340_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d340_-((-2)*(ssize_t)sizeof(double))));};}
  ln=104; {int i_=0  ;do{ {int j_=0  ;do{{ ln=104;(*(double *)(cb(0,4,j_)*(ssize_t)sizeof(double)+cb(0,4,i_)*(ssize_t)sizeof(double)*(4+1)+dnsdata_setup_derivatives_M))=pow(((*(double *)(cb(dnsdata_7l,dnsdata_9h, - 1+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(cb(dnsdata_7l,dnsdata_9h, - 1)*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_+=1;}while(j_<=4);}i_+=1;}while(i_<=4 );}  ln=104;rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),dnsdata_setup_derivatives_M);
  ln=105;memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  ln=105;(*(double *)(cb(0,4,3)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=1.;
  ln=106;{{ln=106;rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14m1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); ln=106;rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14m1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14m1_-((-2)*(ssize_t)sizeof(double))));};}
  ln=107;memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  ln=107;(*(double *)(cb(0,4,2)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=2.;
  ln=108;{{ln=108;rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24m1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); ln=108;rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24m1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24m1_-((-2)*(ssize_t)sizeof(double))));};}
};
ln=122;if( (next_==NULL) ){
  ln=111;memset(dnsdata_13st+d04n_-((-2)*(ssize_t)sizeof(double)),0,(ssize_t)sizeof(double)*(2-(-2)+1));  ln=111;(*(double *)(cb((-2),2,1)*(ssize_t)sizeof(double)+d04n_-((-2)*(ssize_t)sizeof(double))))=1.;
  ln=112; {int i_=0  ;do{ {int j_=0  ;do{{ ln=112;(*(double *)(cb(0,4,j_)*(ssize_t)sizeof(double)+cb(0,4,i_)*(ssize_t)sizeof(double)*(4+1)+dnsdata_setup_derivatives_M))=pow(((*(double *)(cb(dnsdata_7l,dnsdata_9h,ny_-3+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(cb(dnsdata_7l,dnsdata_9h,ny_)*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_+=1;}while(j_<=4);}i_+=1;}while(i_<=4 );}  ln=112;rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),dnsdata_setup_derivatives_M);
  ln=113;memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  ln=113;(*(double *)(cb(0,4,3)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=1.;
  ln=114;{{ln=114;rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); ln=114;rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14n_-((-2)*(ssize_t)sizeof(double))));};}
  ln=115;memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  ln=115;(*(double *)(cb(0,4,2)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=2.;
  ln=116;{{ln=116;rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24n_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); ln=116;rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24n_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24n_-((-2)*(ssize_t)sizeof(double))));};}
  ln=117; {int i_=0  ;do{ {int j_=0  ;do{{ ln=117;(*(double *)(cb(0,4,j_)*(ssize_t)sizeof(double)+cb(0,4,i_)*(ssize_t)sizeof(double)*(4+1)+dnsdata_setup_derivatives_M))=pow(((*(double *)(cb(dnsdata_7l,dnsdata_9h,ny_-3+j_)*(ssize_t)sizeof(double)+y_))-(*(double *)(cb(dnsdata_7l,dnsdata_9h,ny_+1)*(ssize_t)sizeof(double)+y_))),(4-i_) );}j_+=1;}while(j_<=4);}i_+=1;}while(i_<=4 );}  ln=117;rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),dnsdata_setup_derivatives_M);
  ln=118;memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  ln=118;(*(double *)(cb(0,4,3)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=1.;
  ln=119;{{ln=119;rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14np1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); ln=119;rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14np1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d14np1_-((-2)*(ssize_t)sizeof(double))));};}
  ln=120;memset(dnsdata_setup_derivatives_t,0,(ssize_t)sizeof(double)*(4+1));  ln=120;(*(double *)(cb(0,4,2)*(ssize_t)sizeof(double)+dnsdata_setup_derivatives_t))=2.;
  ln=121;{{ln=121;rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24np1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_t)); ln=121;rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24np1_-((-2)*(ssize_t)sizeof(double))),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(dnsdata_setup_derivatives_M),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+d24np1_-((-2)*(ssize_t)sizeof(double))));};}
};
setup_derivatives_exit:;

ln=125;dnsdata_25l= - nz_;
ln=125;dnsdata_26h=nz_;
ln=125;dnsdata_27i=(ssize_t)sizeof(double)*(2-(-2)+1)*((dnsdata_5nyh+2)-dnsdata_4nyl+1);
ln=125;dnsdata_28i=dnsdata_27i*(dnsdata_26h-dnsdata_25l+1);
ln=125;dnsdata_29st=dnsdata_4nyl*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st;
ln=125;dnsdata_30st=dnsdata_25l*dnsdata_27i+dnsdata_29st;

D2vmat_=malloc(dnsdata_28i);if(D2vmat_==NULL)errmalloc();D2vmat_-=dnsdata_30st;atblockexit(D2vmat_f,free,D2vmat_+dnsdata_30st);ln=125;memset(dnsdata_30st+D2vmat_,0,dnsdata_28i);
etamat_=malloc(dnsdata_28i);if(etamat_==NULL)errmalloc();etamat_-=dnsdata_30st;atblockexit(etamat_f,free,etamat_+dnsdata_30st);ln=125;memset(dnsdata_30st+etamat_,0,dnsdata_28i);
D0mat_=malloc(dnsdata_27i);if(D0mat_==NULL)errmalloc();D0mat_-=dnsdata_29st;atblockexit(D0mat_f,free,D0mat_+dnsdata_29st);ln=129;memset(dnsdata_29st+D0mat_,0,dnsdata_27i);cb(dnsdata_4nyl,(dnsdata_5nyh+2),0+(1)*(dnsdata_4nyl));cb(dnsdata_4nyl,(dnsdata_5nyh+2),0+(1)*(dnsdata_5nyh));{char *dnsdata_32_;

ln=130;dnsdata_32_=dnsdata_4nyl*(ssize_t)sizeof(struct dnsdata_s12)+(char*)(*(struct dnsdata_s12*)(derivatives_)).d0_-dnsdata_13st;ln=130; {char *dnsdata_31_=dnsdata_4nyl*(ssize_t)sizeof(double)*(2-(-2)+1)+D0mat_;int dnsdata_31_1=dnsdata_5nyh-dnsdata_4nyl; do{{ ln=130;cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb(dnsdata_4nyl+(ssize_t)(D0mat_-dnsdata_31_)/(ssize_t)((ssize_t)sizeof(double)*(2-(-2)+1)),dnsdata_5nyh+(ssize_t)(D0mat_-dnsdata_31_)/(ssize_t)((ssize_t)sizeof(double)*(2-(-2)+1)),0)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_31_,dnsdata_13st+cb(dnsdata_15l+(ssize_t)((char*)(*(struct dnsdata_s12*)(derivatives_)).d0_-dnsdata_13st-dnsdata_32_)/(ssize_t)((ssize_t)sizeof(struct dnsdata_s12)),dnsdata_17h+(ssize_t)((char*)(*(struct dnsdata_s12*)(derivatives_)).d0_-dnsdata_13st-dnsdata_32_)/(ssize_t)((ssize_t)sizeof(struct dnsdata_s12)),0)*(ssize_t)sizeof(struct dnsdata_s12)+dnsdata_32_,(ssize_t)sizeof(double)*(2-(-2)+1)); ln=130;dnsdata_32_ =(ssize_t)sizeof(struct dnsdata_s12)+dnsdata_32_;}dnsdata_31_+=(ssize_t)sizeof(double)*(2-(-2)+1);dnsdata_31_1--;}while(dnsdata_31_1>=0);}}ln=130;rbmatmod_1LUdecompStep(dnsdata_4nyl,(dnsdata_5nyh+2),(ssize_t)sizeof(double)*(2-(-2)+1),D0mat_);

ln=132;dnsdata_33st=(-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st;
ln=132;memset(dnsdata_33st+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),0,(ssize_t)sizeof(double)*(2-(-2)+1)*(-(-1)+1));ln=132;memset(dnsdata_13st+vnbc_-dnsdata_13st,0,(ssize_t)sizeof(double)*(2-(-2)+1)*(1+1));ln=132;memset(dnsdata_33st+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),0,(ssize_t)sizeof(double)*(2-(-2)+1)*(-(-1)+1));ln=132;memset(dnsdata_13st+etanbc_-dnsdata_13st,0,(ssize_t)sizeof(double)*(2-(-2)+1)*(1+1));ln=132;memset(dnsdata_33st+phi0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),0,(ssize_t)sizeof(double)*(2-(-2)+1)*(-(-1)+1));ln=132;memset(dnsdata_13st+phinbc_-dnsdata_13st,0,(ssize_t)sizeof(double)*(2-(-2)+1)*(1+1));ln=142;if( (prev_==NULL) ){
  ln=135;cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb((-1),0,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),dnsdata_13st+d040_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  ln=135;cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb((-1),0,-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+v0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),dnsdata_13st+d140_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  ln=135;cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb((-1),0,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),dnsdata_13st+d040_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));
  ln=136;cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb((-1),0,-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+eta0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),dnsdata_13st+(*(struct dnsdata_s12*)(cb(dnsdata_15l,dnsdata_17h,1)*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_)).d4_-dnsdata_13st,(ssize_t)sizeof(double)*(2-(-2)+1));
  ln=137;cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb((-1),0,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+phi0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),dnsdata_13st+d040_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  ln=137;cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb((-1),0,-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+phi0bc_-(-(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st),dnsdata_13st+(*(struct dnsdata_s12*)(cb(dnsdata_15l,dnsdata_17h,1)*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_)).d4_-dnsdata_13st/*!Dirichlet*/,(ssize_t)sizeof(double)*(2-(-2)+1));
/*! phi0bc(0)=d140; phi0bc(-1)=derivatives(1).d4 !Neumann*/
  ln=139; {int i_=  - 1  ;do{{ ln=139;(*(double *)(cb((-2),2,i_)*(ssize_t)sizeof(double)+cb((-1),0,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+v0bc_-((-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))-=(*(double *)(cb((-2),2, - 2)*(ssize_t)sizeof(double)+cb((-1),0,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+v0bc_-((-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))*(*(double *)(cb((-2),2,i_)*(ssize_t)sizeof(double)+cb((-1),0, - 1)*(ssize_t)sizeof(double)*(2-(-2)+1)+v0bc_-((-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))/(*(double *)(cb((-2),2, - 2)*(ssize_t)sizeof(double)+cb((-1),0, - 1)*(ssize_t)sizeof(double)*(2-(-2)+1)+v0bc_-((-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)) );}i_+=1;}while(i_<=2);}
  ln=140; {int i_=  - 1  ;do{{ ln=140;(*(double *)(cb((-2),2,i_)*(ssize_t)sizeof(double)+cb((-1),0,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+eta0bc_-((-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))-=(*(double *)(cb((-2),2, - 2)*(ssize_t)sizeof(double)+cb((-1),0,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+eta0bc_-((-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))*(*(double *)(cb((-2),2,i_)*(ssize_t)sizeof(double)+cb((-1),0, - 1)*(ssize_t)sizeof(double)*(2-(-2)+1)+eta0bc_-((-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))/(*(double *)(cb((-2),2, - 2)*(ssize_t)sizeof(double)+cb((-1),0, - 1)*(ssize_t)sizeof(double)*(2-(-2)+1)+eta0bc_-((-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)) );}i_+=1;}while(i_<=2);}
  ln=141; {int i_=  - 1  ;do{{ ln=141;(*(double *)(cb((-2),2,i_)*(ssize_t)sizeof(double)+cb((-1),0,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+phi0bc_-((-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))-=(*(double *)(cb((-2),2, - 2)*(ssize_t)sizeof(double)+cb((-1),0,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+phi0bc_-((-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))*(*(double *)(cb((-2),2,i_)*(ssize_t)sizeof(double)+cb((-1),0, - 1)*(ssize_t)sizeof(double)*(2-(-2)+1)+phi0bc_-((-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)))/(*(double *)(cb((-2),2, - 2)*(ssize_t)sizeof(double)+cb((-1),0, - 1)*(ssize_t)sizeof(double)*(2-(-2)+1)+phi0bc_-((-1)*(ssize_t)sizeof(double)*(2-(-2)+1)+dnsdata_13st)) );}i_+=1;}while(i_<=2);}
};
ln=152;if( (next_==NULL) ){
/*! vnbc(0)=d04n; vnbc(1)=d24n; etanbc(0)=d14n !Boundary layer*/
  ln=145;cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb(0,1,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+vnbc_-dnsdata_13st,dnsdata_13st+d04n_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  ln=145;cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb(0,1,1)*(ssize_t)sizeof(double)*(2-(-2)+1)+vnbc_-dnsdata_13st,dnsdata_13st+d14n_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  ln=145;cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb(0,1,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+etanbc_-dnsdata_13st,dnsdata_13st+d04n_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));
  ln=146;cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb(0,1,1)*(ssize_t)sizeof(double)*(2-(-2)+1)+etanbc_-dnsdata_13st,dnsdata_13st+(*(struct dnsdata_s12*)(cb(dnsdata_15l,dnsdata_17h,ny_-1)*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_)).d4_-dnsdata_13st,(ssize_t)sizeof(double)*(2-(-2)+1));
  ln=147;cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb(0,1,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+phinbc_-dnsdata_13st,dnsdata_13st+d04n_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  ln=147;cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb(0,1,1)*(ssize_t)sizeof(double)*(2-(-2)+1)+phinbc_-dnsdata_13st,dnsdata_13st+(*(struct dnsdata_s12*)(cb(dnsdata_15l,dnsdata_17h,ny_-1)*(ssize_t)sizeof(struct dnsdata_s12)+derivatives_)).d4_-dnsdata_13st/*!Dirichlet*/,(ssize_t)sizeof(double)*(2-(-2)+1));
/*! phinbc(0)=d04n; phinbc(1)=d14n                 !Dirichlet+Neumann*/
  ln=149; {int i_=  - 2  ;do{{ ln=149;(*(double *)(cb((-2),2,i_)*(ssize_t)sizeof(double)+cb(0,1,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+vnbc_-dnsdata_13st))-=(*(double *)(cb((-2),2,2)*(ssize_t)sizeof(double)+cb(0,1,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+vnbc_-dnsdata_13st))*(*(double *)(cb((-2),2,i_)*(ssize_t)sizeof(double)+cb(0,1,1)*(ssize_t)sizeof(double)*(2-(-2)+1)+vnbc_-dnsdata_13st))/(*(double *)(cb((-2),2,2)*(ssize_t)sizeof(double)+cb(0,1,1)*(ssize_t)sizeof(double)*(2-(-2)+1)+vnbc_-dnsdata_13st) );}i_+=1;}while(i_<=1);}
  ln=150; {int i_=  - 2  ;do{{ ln=150;(*(double *)(cb((-2),2,i_)*(ssize_t)sizeof(double)+cb(0,1,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+etanbc_-dnsdata_13st))-=(*(double *)(cb((-2),2,2)*(ssize_t)sizeof(double)+cb(0,1,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+etanbc_-dnsdata_13st))*(*(double *)(cb((-2),2,i_)*(ssize_t)sizeof(double)+cb(0,1,1)*(ssize_t)sizeof(double)*(2-(-2)+1)+etanbc_-dnsdata_13st))/(*(double *)(cb((-2),2,2)*(ssize_t)sizeof(double)+cb(0,1,1)*(ssize_t)sizeof(double)*(2-(-2)+1)+etanbc_-dnsdata_13st) );}i_+=1;}while(i_<=1);}
  ln=151; {int i_=  - 2  ;do{{ ln=151;(*(double *)(cb((-2),2,i_)*(ssize_t)sizeof(double)+cb(0,1,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+phinbc_-dnsdata_13st))-=(*(double *)(cb((-2),2,2)*(ssize_t)sizeof(double)+cb(0,1,0)*(ssize_t)sizeof(double)*(2-(-2)+1)+phinbc_-dnsdata_13st))*(*(double *)(cb((-2),2,i_)*(ssize_t)sizeof(double)+cb(0,1,1)*(ssize_t)sizeof(double)*(2-(-2)+1)+phinbc_-dnsdata_13st))/(*(double *)(cb((-2),2,2)*(ssize_t)sizeof(double)+cb(0,1,1)*(ssize_t)sizeof(double)*(2-(-2)+1)+phinbc_-dnsdata_13st) );}i_+=1;}while(i_<=1);}
};


/*! Boundary conditions*/
ln=183;nxd_=(3*nx_ / 2 )- 1;ln=183;{do{  ln=183;nxd_ +=1;}while(!(fft_9FFTfit(nxd_)));}
ln=184;nzd_=3*nz_ - 1;ln=184;{do{  ln=184;nzd_ +=1;}while(!(fft_9FFTfit(nzd_)));}
ln=185;dnsdata_39h=nxd_-1;
ln=185;dnsdata_40h=nzd_-1;
ln=185;dnsdata_41i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)*(dnsdata_40h+1);
ln=185;dnsdata_42i=dnsdata_41i*(dnsdata_39h+1);

Vd_=mmap(NULL,dnsdata_42i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(Vd_==MAP_FAILED)errmalloc();atblockexit(Vd_f,Vd_free,(void*)Vd_);ln=186;dnsdata_43h=nxd_-1;
ln=186;dnsdata_44h=nzd_-1;
ln=186;dnsdata_45i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA38*/+1)*(4+1)*(dnsdata_44h+1);
ln=186;dnsdata_46i=dnsdata_45i*(dnsdata_43h+1);

VVd_=mmap(NULL,dnsdata_46i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(VVd_==MAP_FAILED)errmalloc();atblockexit(VVd_f,VVd_free,(void*)VVd_);ln=195;dnsdata_47h=nx_;
ln=195;dnsdata_48l= - nz_;
ln=195;dnsdata_49h=nz_;
ln=195;dnsdata_50i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)*((dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1);
ln=195;dnsdata_51i=dnsdata_50i*(dnsdata_49h-dnsdata_48l+1);
ln=195;dnsdata_52i=dnsdata_51i*(dnsdata_47h+1);
ln=195;dnsdata_53st=(dnsdata_4nyl-2)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);
ln=195;dnsdata_54st=dnsdata_48l*dnsdata_50i+dnsdata_53st;

V_=mmap(NULL,dnsdata_52i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(V_==MAP_FAILED)errmalloc();V_-=dnsdata_54st;atblockexit(V_f,V_free,(void*)V_);ln=196;dnsdata_55h=nx_;
ln=196;dnsdata_56l= - nz_;
ln=196;dnsdata_57h=nz_;
ln=196;dnsdata_58M=dnsdata_4nyl-2;
dnsdata_59l=1;if(dnsdata_59l<dnsdata_58M)dnsdata_59l=dnsdata_58M;ln=196;dnsdata_60m=dnsdata_5nyh+2;
dnsdata_61h=ny_-1;if(dnsdata_61h>dnsdata_60m)dnsdata_61h=dnsdata_60m;ln=196;dnsdata_62i=(ssize_t)sizeof(struct rhstype_)*(dnsdata_61h-dnsdata_59l+1);
ln=196;dnsdata_63i=dnsdata_62i*(dnsdata_57h-dnsdata_56l+1);
ln=196;dnsdata_64i=dnsdata_63i*(dnsdata_55h+1);
ln=196;dnsdata_65st=dnsdata_59l*(ssize_t)sizeof(struct rhstype_)+(ssize_t)sizeof(struct rhstype_);
ln=196;dnsdata_66st=dnsdata_56l*dnsdata_62i+dnsdata_65st;

oldrhs_=mmap(NULL,dnsdata_64i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(oldrhs_==MAP_FAILED)errmalloc();oldrhs_-=dnsdata_66st;atblockexit(oldrhs_f,oldrhs_free,(void*)oldrhs_);ln=197;dnsdata_67h=nx_;
ln=197;dnsdata_68l= - nz_;
ln=197;dnsdata_69h=nz_;
ln=197;dnsdata_70i=(ssize_t)sizeof(struct rhstype_)*(2+1);
ln=197;dnsdata_71i=dnsdata_70i*(dnsdata_69h-dnsdata_68l+1);
ln=197;dnsdata_72i=dnsdata_71i*(dnsdata_67h+1);
ln=197;dnsdata_73st=dnsdata_68l*dnsdata_70i;

memrhs_=malloc(dnsdata_72i);if(memrhs_==NULL)errmalloc();memrhs_-=dnsdata_73st;atblockexit(memrhs_f,free,memrhs_+dnsdata_73st);ln=200;u1zero_=0.;ln=200;w1zero_=0.;ln=231;dnsdata_74h=ny_+1;
ln=231;dnsdata_75h=nx_;
ln=231;dnsdata_76l= - nz_;
ln=231;dnsdata_77h=nz_;
ln=231;dnsdata_78i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)*(dnsdata_77h-dnsdata_76l+1);
ln=231;dnsdata_79i=dnsdata_78i*(dnsdata_75h+1);
ln=232;dnsdata_81i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)*(dnsdata_77h-dnsdata_76l+1);
ln=232;dnsdata_82i=dnsdata_81i*(dnsdata_75h+1);
ln=232;dnsdata_83i=dnsdata_82i*(dnsdata_74h-(-1)+1);
ln=232;dnsdata_84st=dnsdata_76l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);
ln=232;dnsdata_85st=(-1)*dnsdata_79i+dnsdata_84st;
diskimage_=NULL;atblockexit(diskimage_f,errfclose,&diskimage_);ln=236;dnsdata_86h=ny_+1;
ln=237;dnsdata_87h=ny_+1;
ln=237;dnsdata_88h=nx_;
ln=237;dnsdata_89l= - nz_;
ln=237;dnsdata_90h=nz_;
ln=237;dnsdata_91i=(ssize_t)sizeof(struct VETA_)*(dnsdata_90h-dnsdata_89l+1);
ln=237;dnsdata_92i=dnsdata_91i*(dnsdata_88h+1);
ln=238;dnsdata_94i=(ssize_t)sizeof(double)*(dnsdata_86h-(-1)+1);
ln=238;dnsdata_95st=(-1)*(ssize_t)sizeof(double);
ln=238;dnsdata_96i=(ssize_t)sizeof(struct VETA_)*(dnsdata_90h-dnsdata_89l+1);
ln=238;dnsdata_97i=dnsdata_96i*(dnsdata_88h+1);
ln=238;dnsdata_98i=dnsdata_97i*(dnsdata_87h-(-1)+1);
ln=238;dnsdata_99st=dnsdata_89l*(ssize_t)sizeof(struct VETA_);
ln=238;dnsdata_100st=(-1)*dnsdata_92i+dnsdata_99st;
diskfield_=NULL;atblockexit(diskfield_f,errfclose,&diskfield_);ln=241;cont_=0;ln=241;outcont_=1000;time_file_=NULL;atblockexit(time_file_f,errfclose,&time_file_);ln=242;if( (next_==NULL) ){ errfopen(&time_file_,"Runtimedata_",O_RDWR|O_CREAT|O_TRUNC);};
ln=247;if( (prev_==NULL) ){ miny_=dnsdata_4nyl-2; maxy_=dnsdata_5nyh   ;}else{ miny_=dnsdata_4nyl;};
ln=248;if( (next_==NULL)  ){ miny_=dnsdata_4nyl;   maxy_=dnsdata_5nyh+2 ;}else{ maxy_=dnsdata_5nyh;};
ln=249;if( ((prev_==NULL) )&&( (next_==NULL) )){ miny_=dnsdata_4nyl-2; maxy_=dnsdata_5nyh+2;};

ln=251;cfl_=0.;ln=251;cflm_=0.;ln=277;dnsdata_102h=nx_;
ln=277;dnsdata_103l= - nz_;
ln=277;dnsdata_104h=nz_;
ln=277;dnsdata_105i=(ssize_t)sizeof(struct VETA_)*(dnsdata_104h-dnsdata_103l+1);
ln=277;dnsdata_106i=dnsdata_105i*(dnsdata_102h+1);
ln=277;dnsdata_107st=dnsdata_103l*(ssize_t)sizeof(struct VETA_);

fieldbuf_=malloc(dnsdata_106i);if(fieldbuf_==NULL)errmalloc();fieldbuf_-=dnsdata_107st;atblockexit(fieldbuf_f,free,fieldbuf_+dnsdata_107st);ln=278;dnsdata_108h=nx_;
ln=278;dnsdata_109l= - nz_;
ln=278;dnsdata_110h=nz_;
ln=278;dnsdata_111i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)*(dnsdata_110h-dnsdata_109l+1);
ln=278;dnsdata_112i=dnsdata_111i*(dnsdata_108h+1);
ln=278;dnsdata_113st=dnsdata_109l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);

velbuf_=malloc(dnsdata_112i);if(velbuf_==NULL)errmalloc();velbuf_-=dnsdata_113st;atblockexit(velbuf_f,free,velbuf_+dnsdata_113st);ln=434;dnsdata_119RK1_rai_coeff=120./32.;
ln=440;dnsdata_121RK2_rai_coeff=120./8.;
ln=445;dnsdata_123RK3_rai_coeff=120./20.;
ln=451;dnsdata_125RK1_kom_coeff=1020./240.;
ln=457;dnsdata_127RK2_kom_coeff=1020./32.;
ln=463;dnsdata_129RK3_kom_coeff=1020./68.;
ln=468;dnsdata_131RK4_kom_coeff=1020./170.;
fn="fld2vtk.cpl";
fn="dnsdirect.cpl";ln=2;dnsdirect_1h=nx_;
ln=2;dnsdirect_2l= - nz_;
ln=2;dnsdirect_3h=nz_;
ln=2;dnsdirect_5i=(ssize_t)sizeof(struct dnsdirect_s4)*(dnsdirect_3h-dnsdirect_2l+1);
ln=2;dnsdirect_6i=dnsdirect_5i*(dnsdirect_1h+1);
ln=2;dnsdirect_7st=dnsdirect_2l*(ssize_t)sizeof(struct dnsdirect_s4);

bc0_=malloc(dnsdirect_6i);if(bc0_==NULL)errmalloc();bc0_-=dnsdirect_7st;atblockexit(bc0_f,free,bc0_+dnsdirect_7st);ln=2;memset(dnsdirect_7st+bc0_,0,dnsdirect_6i);
bcn_=malloc(dnsdirect_6i);if(bcn_==NULL)errmalloc();bcn_-=dnsdirect_7st;atblockexit(bcn_f,free,bcn_+dnsdirect_7st);ln=2;memset(dnsdirect_7st+bcn_,0,dnsdirect_6i);dnsdirect: 

dnsdirect_exit:;
fn="fld2vtk.cpl";
fn="convenience.cpl";ln=5;convenience_3i=(ssize_t)sizeof(struct convenience_s2)*((dnsdata_5nyh+2)-(dnsdata_4nyl-2)+1);
ln=5;convenience_4st=(dnsdata_4nyl-2)*(ssize_t)sizeof(struct convenience_s2);

derivs_standalone_=malloc(convenience_3i);if(derivs_standalone_==NULL)errmalloc();derivs_standalone_-=convenience_4st;atblockexit(derivs_standalone_f,free,derivs_standalone_+convenience_4st);ln=10;convenience_5M=dnsdata_4nyl-2;
ln=10;convenience_6m=dnsdata_5nyh+2;
convenience_7=1;if(convenience_7<convenience_5M)convenience_7=convenience_5M;convenience_8=ny_-1;if(convenience_8>convenience_6m)convenience_8=convenience_6m;ln=19; {int iy_=convenience_7  ;while(iy_<=convenience_8 ){{
  struct convenience_s2 *convenience_9w;
char matder_[(ssize_t)sizeof(double)*(4+1)*(4+1)];

  char tnder_[(ssize_t)sizeof(double)*(4+1)];

  ln=10;convenience_9w=(struct convenience_s2 *)(cb((dnsdata_4nyl-2),(dnsdata_5nyh+2),iy_)*(ssize_t)sizeof(struct convenience_s2)+derivs_standalone_);
ln=11;memset(matder_,0,(ssize_t)sizeof(double)*(4+1)*(4+1));ln=12;memset(tnder_,0,(ssize_t)sizeof(double)*(4+1));ln=13; {int ic_=0  ;do{ {int ir_=0  ;do{{ ln=13; (*(double *)(cb(0,4,ic_)*(ssize_t)sizeof(double)+cb(0,4,ir_)*(ssize_t)sizeof(double)*(4+1)+matder_) )= pow(((*(double *)(cb(dnsdata_7l,dnsdata_9h,iy_-2+ic_)*(ssize_t)sizeof(double)+y_))-(*(double *)(cb(dnsdata_7l,dnsdata_9h,iy_)*(ssize_t)sizeof(double)+y_))),(4-ir_) );}ir_+=1;}while(ir_<=4);}ic_+=1;}while(ic_<=4 );}
  ln=14;rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),matder_);
  ln=15;memset(dnsdata_13st+(*convenience_9w).d1_-dnsdata_13st,0,(ssize_t)sizeof(double)*(2-(-2)+1));  ln=15;memset(tnder_,0,(ssize_t)sizeof(double)*(4+1));  ln=15; (*(double *)(cb(0,4,3)*(ssize_t)sizeof(double)+tnder_) )= 1.;
  ln=16; {{ln=16;rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*convenience_9w).d1_-dnsdata_13st ),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(matder_),0,4,(ssize_t)sizeof(double),(tnder_)); ln=16;rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*convenience_9w).d1_-dnsdata_13st ),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(matder_),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*convenience_9w).d1_-dnsdata_13st ));};}
  ln=17;memset(dnsdata_13st+(*convenience_9w).d2_-dnsdata_13st,0,(ssize_t)sizeof(double)*(2-(-2)+1));  ln=17;memset(tnder_,0,(ssize_t)sizeof(double)*(4+1));  ln=17; (*(double *)(cb(0,4,2)*(ssize_t)sizeof(double)+tnder_) )= 2.;
  ln=18; {{ln=18;rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*convenience_9w).d2_-dnsdata_13st ),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(matder_),0,4,(ssize_t)sizeof(double),(tnder_)); ln=18;rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*convenience_9w).d2_-dnsdata_13st ),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(matder_),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*convenience_9w).d2_-dnsdata_13st ));};}
}iy_+=1;};}
ln=20;if( (prev_==NULL) ){ { cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb((dnsdata_4nyl-2),(dnsdata_5nyh+2),-1)*(ssize_t)sizeof(struct convenience_s2)+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d1_-dnsdata_13st,dnsdata_13st+d14m1_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1)); cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb((dnsdata_4nyl-2),(dnsdata_5nyh+2),-1)*(ssize_t)sizeof(struct convenience_s2)+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d2_-dnsdata_13st,dnsdata_13st+d24m1_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1)); cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb((dnsdata_4nyl-2),(dnsdata_5nyh+2),0)*(ssize_t)sizeof(struct convenience_s2)+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d1_-dnsdata_13st,dnsdata_13st+d140_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1)); cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb((dnsdata_4nyl-2),(dnsdata_5nyh+2),0)*(ssize_t)sizeof(struct convenience_s2)+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d2_-dnsdata_13st,dnsdata_13st+d240_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));}};
ln=21;if( (next_==NULL)  ){ { cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb((dnsdata_4nyl-2),(dnsdata_5nyh+2),ny_)*(ssize_t)sizeof(struct convenience_s2)+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d1_-dnsdata_13st,dnsdata_13st+d14n_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb((dnsdata_4nyl-2),(dnsdata_5nyh+2),ny_)*(ssize_t)sizeof(struct convenience_s2)+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d2_-dnsdata_13st,dnsdata_13st+d24n_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));  cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb((dnsdata_4nyl-2),(dnsdata_5nyh+2),ny_+1)*(ssize_t)sizeof(struct convenience_s2)+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d1_-dnsdata_13st,dnsdata_13st+d14np1_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1)); cb((-2),2,(-2));cb((-2),2,2);memcpy(dnsdata_13st+cb((dnsdata_4nyl-2),(dnsdata_5nyh+2),ny_+1)*(ssize_t)sizeof(struct convenience_s2)+(char*)(*(struct convenience_s2*)(derivs_standalone_)).d2_-dnsdata_13st,dnsdata_13st+d24np1_-((-2)*(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*(2-(-2)+1));}};

convenience: 

convenience_exit:;
fn="fld2vtk.cpl";

/*!#define lambda2*/


fieldname_=0;atblockexit(fieldname_f,condfree,fieldname_);vtkname_=0;atblockexit(vtkname_f,condfree,vtkname_);ln=12; if(!((fputs("nfmin? ",stderr),fflush(stderr),scanrec(stdin," %d",&nfmin_)>0) &&(fputs("nfmax? ",stderr),fflush(stderr),scanrec(stdin," %d",&nfmax_)>0)))ioerr(stdin);while(getc(stdin)!='\n'){};
outfile_=NULL;atblockexit(outfile_f,errfclose,&outfile_);ln=15;fld2vtk_1h=nxd_-1;
ln=15;fld2vtk_2h=nzd_-1;
ln=15;fld2vtk_3h=ny_+1;
ln=15;fld2vtk_4i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)*(fld2vtk_3h-(-1)+1);
ln=15;fld2vtk_5i=fld2vtk_4i*(fld2vtk_2h+1);
ln=15;fld2vtk_6i=fld2vtk_5i*(fld2vtk_1h+1);
ln=15;fld2vtk_7st=(-1)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1);

Vdd_=malloc(fld2vtk_6i);if(Vdd_==NULL)errmalloc();Vdd_-=fld2vtk_7st;atblockexit(Vdd_f,free,Vdd_+fld2vtk_7st);ln=15;memset(fld2vtk_7st+Vdd_,0,fld2vtk_6i);ln=169;files:;  {int n_=nfmin_  ;while(n_<=nfmax_){

  ssize_t fld2vtk_9i;
struct freefunc fld2vtk_8f;char *fld2vtk_8;
ln=26;fld2vtk_9i=(snprintf(NULL,0,"""Dati.cart.""%d"".out""",n_)+1+1);

fld2vtk_8=malloc(fld2vtk_9i);if(fld2vtk_8==NULL)errmalloc();atblockexit(fld2vtk_8f,free,fld2vtk_8);snprintf(fld2vtk_8,snprintf(NULL,0,"""Dati.cart.""%d"".out""",n_)+1+1,"""Dati.cart.""%d"".out""",n_); ln=26; if(fieldname_ )free(fieldname_ );fieldname_ =strndup(fld2vtk_8,snprintf(NULL,0,"""Dati.cart.""%d"".out""",n_)+1+1);
  ln=27; {char *tmp; tmp=malloc(snprintf(NULL,0,"""Field""%d"".vtk""",n_)+1); sprintf(tmp,"""Field""%d"".vtk""",n_); if(vtkname_ )free(vtkname_ );vtkname_ =tmp;}
  ln=28; fprintf(stdout,"%s"" --> " "%s",fieldname_ ,vtkname_);putc('\n',stdout);
  ln=29;convenience_13read_field_fortran(fieldname_,0,dnsdata_47h,dnsdata_51i,dnsdata_48l,dnsdata_49h,dnsdata_50i,(dnsdata_4nyl-2),(dnsdata_5nyh+2),(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1),0,((0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/,(ssize_t)sizeof(struct COMPLEX_),V_);
  ln=30;errfopen(&outfile_,vtkname_,O_RDWR|O_CREAT|O_TRUNC);

  ln=32;memset(fld2vtk_7st+Vdd_,0,fld2vtk_6i);
  ln=41; {int iy_=0  ;while(iy_<=ny_){
    /*!V(0,0,iy)=0 !Solo fluttuazioni rispetto alla media spaziale*/
    ln=39; {int ix_=0  ;while(ix_<=nx_){
      int fld2vtk_10h;
int fld2vtk_11h;

      int fld2vtk_14l;
int fld2vtk_15l;

      cb(0,fld2vtk_2h,0+(1)*(0));cb(0,fld2vtk_2h,0+(1)*(nz_));ln=36;fld2vtk_10h=nz_;
cb(dnsdata_48l,dnsdata_49h,0+(1)*(0));cb(dnsdata_48l,dnsdata_49h,0+(1)*(nz_));ln=36;fld2vtk_11h=nz_;
{char *fld2vtk_13_;

ln=36;fld2vtk_13_=cb((dnsdata_4nyl-2),(dnsdata_5nyh+2),iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+cb(0,dnsdata_47h,ix_)*dnsdata_51i+V_;ln=36; {char *fld2vtk_12_=cb((-1),fld2vtk_3h,iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+cb(0,fld2vtk_1h,ix_)*fld2vtk_5i+Vdd_;int fld2vtk_12_1=fld2vtk_10h; do{{ ln=36;cb(0,((0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/,0);cb(0,((0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/,((0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/);memcpy(cb((ssize_t)(cb((-1),fld2vtk_3h,iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+cb(0,fld2vtk_1h,ix_)*fld2vtk_5i+Vdd_-fld2vtk_12_)/(ssize_t)(fld2vtk_4i),fld2vtk_10h+(ssize_t)(cb((-1),fld2vtk_3h,iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+cb(0,fld2vtk_1h,ix_)*fld2vtk_5i+Vdd_-fld2vtk_12_)/(ssize_t)(fld2vtk_4i),0)*fld2vtk_4i+fld2vtk_12_,cb((ssize_t)(cb((dnsdata_4nyl-2),(dnsdata_5nyh+2),iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+cb(0,dnsdata_47h,ix_)*dnsdata_51i+V_-fld2vtk_13_)/(ssize_t)(dnsdata_50i),fld2vtk_11h+(ssize_t)(cb((dnsdata_4nyl-2),(dnsdata_5nyh+2),iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+cb(0,dnsdata_47h,ix_)*dnsdata_51i+V_-fld2vtk_13_)/(ssize_t)(dnsdata_50i),0)*dnsdata_50i+fld2vtk_13_,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)); ln=36;fld2vtk_13_ =dnsdata_50i+fld2vtk_13_;}fld2vtk_12_+=fld2vtk_4i;fld2vtk_12_1--;}while(fld2vtk_12_1>=0);}}cb(0,fld2vtk_2h,nzd_+0+(1)*( - nz_));cb(0,fld2vtk_2h,nzd_+0+(1)*( - 1));ln=37;fld2vtk_14l= - nz_;
cb(dnsdata_48l,dnsdata_49h,0+(1)*( - nz_));cb(dnsdata_48l,dnsdata_49h,0+(1)*( - 1));ln=37;fld2vtk_15l= - nz_;
{char *fld2vtk_17_;

ln=37;fld2vtk_17_=fld2vtk_14l*dnsdata_50i+cb((dnsdata_4nyl-2),(dnsdata_5nyh+2),iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+cb(0,dnsdata_47h,ix_)*dnsdata_51i+V_;ln=37; {char *fld2vtk_16_=fld2vtk_14l*fld2vtk_4i+cb((-1),fld2vtk_3h,iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+nzd_*fld2vtk_4i+cb(0,fld2vtk_1h,ix_)*fld2vtk_5i+Vdd_;int fld2vtk_16_1=(-1)-fld2vtk_14l; do{{ ln=37;cb(0,((0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/,0);cb(0,((0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/,((0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/);memcpy(cb(fld2vtk_14l+(ssize_t)(cb((-1),fld2vtk_3h,iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+nzd_*fld2vtk_4i+cb(0,fld2vtk_1h,ix_)*fld2vtk_5i+Vdd_-fld2vtk_16_)/(ssize_t)(fld2vtk_4i),(-1)+(ssize_t)(cb((-1),fld2vtk_3h,iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+nzd_*fld2vtk_4i+cb(0,fld2vtk_1h,ix_)*fld2vtk_5i+Vdd_-fld2vtk_16_)/(ssize_t)(fld2vtk_4i),0)*fld2vtk_4i+fld2vtk_16_,cb(fld2vtk_15l+(ssize_t)(cb((dnsdata_4nyl-2),(dnsdata_5nyh+2),iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+cb(0,dnsdata_47h,ix_)*dnsdata_51i+V_-fld2vtk_17_)/(ssize_t)(dnsdata_50i),(-1)+(ssize_t)(cb((dnsdata_4nyl-2),(dnsdata_5nyh+2),iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+cb(0,dnsdata_47h,ix_)*dnsdata_51i+V_-fld2vtk_17_)/(ssize_t)(dnsdata_50i),0)*dnsdata_50i+fld2vtk_17_,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)); ln=37;fld2vtk_17_ =dnsdata_50i+fld2vtk_17_;}fld2vtk_16_+=fld2vtk_4i;fld2vtk_16_1--;}while(fld2vtk_16_1>=0);}}ln=38;{ char *fld2vtk_18w;
ln=38;fld2vtk_18w=cb((-1),fld2vtk_3h,iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+cb(0,fld2vtk_1h,ix_)*fld2vtk_5i+Vdd_;
{ln=38;fft_1IFT(0,fld2vtk_2h,fld2vtk_4i,(0+fld2vtk_18w),0,fld2vtk_2h,fld2vtk_4i,(0+fld2vtk_18w));}; {ln=38;fft_1IFT(0,fld2vtk_2h,fld2vtk_4i,(0+(ssize_t)sizeof(struct COMPLEX_)+fld2vtk_18w),0,fld2vtk_2h,fld2vtk_4i,(0+(ssize_t)sizeof(struct COMPLEX_)+fld2vtk_18w));}; {ln=38;fft_1IFT(0,fld2vtk_2h,fld2vtk_4i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+fld2vtk_18w),0,fld2vtk_2h,fld2vtk_4i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+fld2vtk_18w));} ;}
    ix_+=1;};}
    ln=40;  {int iz_=(0?ca():0);do{{ ln=40;{ char *fld2vtk_19w;
ln=40;fld2vtk_19w=cb((-1),fld2vtk_3h,iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+cb(0,fld2vtk_2h,iz_)*fld2vtk_4i+Vdd_;
{ln=40;fft_3RFT(0,fld2vtk_1h,fld2vtk_5i,(0+fld2vtk_19w),0,fld2vtk_1h,fld2vtk_5i,(0+fld2vtk_19w));}; {ln=40;fft_3RFT(0,fld2vtk_1h,fld2vtk_5i,(0+(ssize_t)sizeof(struct COMPLEX_)+fld2vtk_19w),0,fld2vtk_1h,fld2vtk_5i,(0+(ssize_t)sizeof(struct COMPLEX_)+fld2vtk_19w));}; {ln=40;fft_3RFT(0,fld2vtk_1h,fld2vtk_5i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+fld2vtk_19w),0,fld2vtk_1h,fld2vtk_5i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+fld2vtk_19w));} ;}}iz_++;}while(iz_<=(0?ca():fld2vtk_2h));}
  iy_+=1;};}

/*!(
  DO 
    ARRAY(0..nzd-1,1..3) OF REAL Vm=0
    Vm(iz,1) = SUM Vdd(*,iz,iy).u.REALIFIED(ix)/[2*nxd] FOR ix=0 TO 2*nxd-1
    Vm(iz,2) = SUM Vdd(*,iz,iy).v.REALIFIED(ix)/[2*nxd] FOR ix=0 TO 2*nxd-1
    Vm(iz,3) = SUM Vdd(*,iz,iy).w.REALIFIED(ix)/[2*nxd] FOR ix=0 TO 2*nxd-1
    DO 
       Vdd(*,iz,iy).u.REALIFIED(ix)=~-Vm(iz,1) 
       Vdd(*,iz,iy).v.REALIFIED(ix)=~-Vm(iz,2) 
       Vdd(*,iz,iy).w.REALIFIED(ix)=~-Vm(iz,3) 
    FOR ix=0 TO 2*nxd-1
  FOR iz=0 TO nzd-1 AND iy=-1 TO ny+1
!)*/

ln=132; fprintf( outfile_ ,"""# vtk DataFile Version 2.0""");putc('\n', outfile_ );
  ln=133; fprintf( outfile_ ,"""DNS vector field + lambda2""");putc('\n', outfile_ );
  ln=134; fprintf( outfile_ ,"""BINARY""");putc('\n', outfile_ );
  ln=135; fprintf( outfile_ ,"""DATASET RECTILINEAR_GRID""");putc('\n', outfile_ );
  ln=136; fprintf( outfile_ ,"""DIMENSIONS ""%d"" ""%d"" ""%d",2*nxd_,ny_+1,nzd_);putc('\n', outfile_ );
  ln=137; fprintf( outfile_ ,"""X_COORDINATES ""%d"" float""",2*nxd_);putc('\n', outfile_ );
  ln=141; {int ix_=0  ;while(ix_<=2*nxd_-1){
    ln=139;tmp_=(float)(2.*3.14159265358979323846/alfa0_*(double)(ix_)/(double)((2*nxd_)));
    ln=140;convenience_10ByteSwap(&tmp_);  ln=140;fwrite(&tmp_,(ssize_t)sizeof(float),1,outfile_);
  ix_+=1;};}
  ln=142; fprintf( outfile_ ,"""Y_COORDINATES ""%d"" float""",ny_+1);putc('\n', outfile_ );
  ln=146; {int iy_=0  ;while(iy_<=ny_ ){
    ln=144;tmp_=(float)((*(double *)(cb(dnsdata_7l,dnsdata_9h,iy_)*(ssize_t)sizeof(double)+y_) )- 1.);
    ln=145;convenience_10ByteSwap(&tmp_);  ln=145;fwrite(&tmp_,(ssize_t)sizeof(float),1,outfile_);
  iy_+=1;};}
  ln=147; fprintf( outfile_ ,"""Z_COORDINATES ""%d"" float""",nzd_);putc('\n', outfile_ );
  ln=151; {int iz_=0  ;while(iz_<=nzd_-1){
    ln=149;tmp_=(float)(2.*3.14159265358979323846/beta0_*(double)(iz_)/(double)(nzd_));
    ln=150;convenience_10ByteSwap(&tmp_);  ln=150;fwrite(&tmp_,(ssize_t)sizeof(float),1,outfile_);
  iz_+=1;};}
  ln=152; fprintf( outfile_ ,"""POINT_DATA " "%d",2*nxd_*nzd_*(ny_+1));putc('\n', outfile_ );

ln=162; fprintf( outfile_ ,"""VECTORS velocity float""");putc('\n', outfile_ );
ln=166; {int iz_=0  ;while(iz_<=nzd_-1 ){ {int iy_=0  ;while(iy_<=ny_ ){ {int ix_=0  ;while(ix_<=2*nxd_-1){
  ln=164;tmpu_=(float)((*fft_15REALIFIED(0,fld2vtk_1h,fld2vtk_5i,0+cb((-1),fld2vtk_3h,iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+cb(0,fld2vtk_2h,iz_)*fld2vtk_4i+Vdd_,ix_)));  ln=164;tmpv_=(float)((*fft_15REALIFIED(0,fld2vtk_1h,fld2vtk_5i,0+(ssize_t)sizeof(struct COMPLEX_)+cb((-1),fld2vtk_3h,iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+cb(0,fld2vtk_2h,iz_)*fld2vtk_4i+Vdd_,ix_)));  ln=164;tmpw_=(float)((*fft_15REALIFIED(0,fld2vtk_1h,fld2vtk_5i,0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+cb((-1),fld2vtk_3h,iy_)*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA37*/+1)+cb(0,fld2vtk_2h,iz_)*fld2vtk_4i+Vdd_,ix_))) ;
  ln=165;convenience_10ByteSwap(&tmpu_);  ln=165;convenience_10ByteSwap(&tmpv_); ln=165;convenience_10ByteSwap(&tmpw_);  ln=165;fwrite(&tmpu_,(ssize_t)sizeof(float),1,outfile_);fwrite(&tmpv_,(ssize_t)sizeof(float),1,outfile_);fwrite(&tmpw_,(ssize_t)sizeof(float),1,outfile_);
ix_+=1;};}iy_+=1;};}iz_+=1;};}
ln=167;errfclose(&outfile_);

freemem(&Vdd_f);n_+=1;};}files_exit:;
freemem(es);return 0;}
