LOADLIBES+=-lm

post : .cpl/post.o /net/istmpegasus/localhome/hi221/fri/complex.o /net/istmpegasus/localhome/hi221/fri/fft.o /net/istmpegasus/localhome/hi221/fri/rbmat.o  /net/istmpegasus/localhome/hi221/fri/parallel.o .cpl/dnsdata.o .cpl/rbmatmod.o .cpl/dnsdirect.o .cpl/convenience.o
	$(CC) $(LDFLAGS) -o post .cpl/post.o /net/istmpegasus/localhome/hi221/fri/complex.o /net/istmpegasus/localhome/hi221/fri/fft.o /net/istmpegasus/localhome/hi221/fri/rbmat.o  /net/istmpegasus/localhome/hi221/fri/parallel.o .cpl/dnsdata.o .cpl/rbmatmod.o .cpl/dnsdirect.o .cpl/convenience.o $(LOADLIBES) $(LDLIBS)

.cpl/post.c .cpl/post.d : post.cpl /net/istmpegasus/localhome/hi221/fri/complex.cpl /net/istmpegasus/localhome/hi221/fri/fft.cpl /net/istmpegasus/localhome/hi221/fri/rbmat.cpl /net/istmpegasus/localhome/hi221/fri/matrix.cmn /net/istmpegasus/localhome/hi221/fri/parallel.cpl dnsdata.cpl rbmatmod.cpl dnsdirect.cpl convenience.cpl