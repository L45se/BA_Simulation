function u=u_Luchini(Y,h,B,Retau) 

yp = Y/h.*Retau;
yh = Y/h;

if sum(yh>1)>0
    error(['y/h should not be larger than one it is currently: ' num2str(max(abs(yh)))]);
end

% Cess (1958)
% k2 = 0.4409^2;
% h2 = Retau^2;
% utau2 = (Retau*nu/h);
% A=B;
% 
% Yp = linspace(0,Retau,10000);
% Yh = linspace(0,1,10000);
% nut = nu*(0.5 + 0.5*sqrt(1+ (k2*h2/9).*(2*Yh-Yh.^2).^2.*(3-4*Yh+2*Yh.^2).^2.*(1-exp(-Yp/A)).^2 ));
% uu = cumtrapz(Yh*h,utau2*(1-Yh)./nut);
%     
% u = interp1(Yh,uu,yh,'pchip');


% % Luchini (2018)
a0=-7.374;
a1=-0.4930;
a2=0.02450;
b1=0.05736;
b2=0.01101;
c=0.03385;
d=3.109;
k=0.392;
B0=4.48;
u = (B+log(d)/k)/(-a0)*(a0 + a1*yp +a2*yp.^2)./(1 + b1*yp + b2*yp.^2).*exp(-c*yp) + log(yp + d)/k + B + G(Y,h);
%u = (a0 + a1*yp +a2*yp.^2)./(1 + b1*yp + b2*yp.^2).*exp(-c*yp) + log(yp + d)/k + B + G(Y,h);
% u0=(a0 + a1*yp +a2*yp.^2)./(1 + b1*yp + b2*yp.^2).*exp(-c*yp);
% u1=log(yp + d)/k + B;
% u2=G(Y,h);
% figure()
% hold on
% plot(yp,u0)
% plot(yp,u1)
% plot(yp,u2)
% plot(yp,u)

end