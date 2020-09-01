x0=0;
x1=-0.5;
x2=-1;
f=@(x)(x^3-x+2);
error=1;
det=0;
ans=[];
i=1;
while error>0.000001
    h0=x1-x0;
    h1=x2-x1;
    del0=(f(x1)-f(x0))/(x1-x0);
    del1=(f(x2)-f(x1))/(x2-x1);
    a=(del1-del0)/(h0+h1);
    b=del1+a*h1;
    c=f(x2);
    if(abs(b+sqrt(b*b+4*a*c))>abs(b-sqrt(b*b-4*a*c)))
        det=(-2*c)/(b+sqrt(b*b-4*a*c));
    elseif(abs(b+sqrt(b*b+4*a*c))<abs(b-sqrt(b*b-4*a*c)))
        det=(-2*c)/(b-sqrt(b*b-4*a*c));
    end
    x3=x2+det;
    error=abs((x3-x2)/x2)*100;
    ans(i,:)=[i x3 error];
    x0=x1;
    x1=x2;
    x2=x3;
    i=i+1;
end
fprintf(' iterations  x3_value  error\n');
disp(ans);