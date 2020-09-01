fx=@(x)(x^3-2*x-5);
fdx=@(x)(3*(x^2)-2);
x=[];
tab=[];
x(1)=-1+i;
error=2;
i=1;
while error>0.001
    x(i+1)=x(i)-(fx(i)/fdx(i));
    error=abs((x(i+1)-x(i))/x(i+1))*100;
    tab(i,:)=[i x(i) error];
    i=i+1;
end
disp(tab)
x(i)