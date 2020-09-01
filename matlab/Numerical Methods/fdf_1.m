% Newtons interpolating polynomial 
% Que 1
x=[45 50 55 60 65];
fx=[2.871 2.404 2.083 1.862 1.712];
n=5;
a=x(1);
b=x(5);
h=(b-a)/n;
tab=[];
xs=
s=(xs-a)/h;
for i=1:5
    tab(i,1)=x(i);
    tab(i,2)=fx(i);
end
for i=1:4
    tab(i,3)=fx(i+1)-fx(i);
end
for i=1:3
    tab(i,4)=tab(i+1,3)-tab(i,3);
end

for i=1:2
    tab(i,5)=tab(i+1,4)-tab(i,4);
end
tab(1,6)=tab(2,5)-tab(1,5);
ans=fx(1);
for i=3:n
      sr=(sr*(s-i+3))/(i-2);
      ans=ans+tab(5,i)*sr;
end
fprintf('    x          f(x)     (d)f      (d^2)f   (d^3)f    (d^4)f\n');
disp(tab);
fprintf('fs=%g\n',ans);