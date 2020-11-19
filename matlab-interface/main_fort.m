clear all
close all
%
addpath('./base/');
% 
dns = init_dns('../../dns.in',1);
%
field = zeros(dns.sized(1:3),'double');
%
ibm.h = 0.068968;
ibm.s = 0.07936508;
ibm.base = 1.0;
ibm.smooth = false;

for ix=1:1 %dns.sized(3)
    %disp([num2str(ix) ' of ' num2str(dns.sized(3))]);
    v = zeros(dns.sized(1:2)); 
    for iz=1:dns.sized(2)
        for iy=1:dns.sized(1)
            v(iy,iz) = isInBody(dns.y(iy),dns.z(iz),dns,ibm,1);
        end
    end
    field(:,:,ix)=v;
end
field(:,:,2:end)=repmat(field(:,:,1),[1,1,dns.sized(3)-1]);

%%
figure()
%contour(dns.z,dns.y,field(:,:,1),[0.01 0.01]); shading flat
pcolor(dns.z,dns.y,field(:,:,1)); shading faceted
set(gca(),'Layer','top')

%%
if ibm.smooth
  field=smooth3(field,'gaussian',[1,21,1],0.7);  % smooth z
  field=smooth3(field,'gaussian',[1,21,1],0.7);  % smooth z
  field=smooth3(field,'gaussian',[15,1,1],0.3);  % smooth y
end

%%
hbar=0;
for iz=1:dns.sized(2)
    hbar = hbar + dns.y(find(field(:,iz,1)<1,1)) - dns.ymin;
end
hbar=hbar/dns.sized(2);

%dpdx = P^3 / A^3

% %% Check gibbs
% F = fft(field(:,:,1),[],2);
% F(:,dns.nz+1:end,:)=0;
% f = ifft(F,[],2,'symmetric');
% figure()
% hold on
% plot(dns.z,field(4,:,1))
% plot(dns.z,f(4,:,1))

%%
f=fopen('../../ibm.bin','w+');
fwrite(f,permute(field,[3,2,1]),'double');
fclose(f);

function tf=isInBody(y,z,dns,ibm,walls)

yy = ((y<=1)*(y-dns.ymin) + (y>1)*(dns.ymax-y))*(walls==2)/ibm.h + ...
     (y-dns.ymin)*(walls==1)/ibm.h;
zz = mod(z,ibm.s)/ibm.s;


tf = ((2*abs(zz-0.5))<(ibm.base - ibm.base*yy) && (yy<1.0));

end