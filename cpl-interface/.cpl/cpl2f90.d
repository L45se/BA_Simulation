LOADLIBES+=-lm

cpl2f90 : .cpl/cpl2f90.o /net/istmpegasus/localhome/hi221/fri/complex.o /net/istmpegasus/localhome/hi221/fri/fft.o /net/istmpegasus/localhome/hi221/fri/rbmat.o  /net/istmpegasus/localhome/hi221/fri/parallel.o .cpl/dnsdata.o .cpl/rbmatmod.o .cpl/dnsdirect.o
	$(CC) $(LDFLAGS) -o cpl2f90 .cpl/cpl2f90.o /net/istmpegasus/localhome/hi221/fri/complex.o /net/istmpegasus/localhome/hi221/fri/fft.o /net/istmpegasus/localhome/hi221/fri/rbmat.o  /net/istmpegasus/localhome/hi221/fri/parallel.o .cpl/dnsdata.o .cpl/rbmatmod.o .cpl/dnsdirect.o $(LOADLIBES) $(LDLIBS)

.cpl/cpl2f90.c .cpl/cpl2f90.d : cpl2f90.cpl /net/istmpegasus/localhome/hi221/fri/complex.cpl /net/istmpegasus/localhome/hi221/fri/fft.cpl /net/istmpegasus/localhome/hi221/fri/rbmat.cpl /net/istmpegasus/localhome/hi221/fri/matrix.cmn /net/istmpegasus/localhome/hi221/fri/parallel.cpl dnsdata.cpl rbmatmod.cpl dnsdirect.cpl