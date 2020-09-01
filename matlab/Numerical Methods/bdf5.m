% Newtons interpolating polynomial 
% Que 5
x = [0 10 20 30 40];
fx = [7 18 32 48 85];
n=5;
a=x(1);
b=x(5);
h=(b-a)/n;
tab=[];
xs=input('Enter the value of xs : ');
s=(xs-b)/h;
for i=1:5
    tab(i,1)=x(i);
    tab(i,2)=fx(i);
end
for i=5:2
    tab(i,3)=fx(i)-fx(i-1)
    i=i-1;
end
for j=3:6
    for i=2:5
        if(tab(i-1,j-1)==0)
            tab(i,j)=0;
        else
            tab(i,j)=tab(i,j-1)-tab(i-1,j-1);
        end
    end
end
fprintf('    x    f(x)  (d)b (d^2)b (d^3)b (d^4)b\n');
disp(tab);
fs=tab(5,2)+s*tab(5,3)+(s*(s-1)*tab(5,4))/factorial(2)+(s*(s-1)*(s-2)*tab(5,5))/factorial(3)+(s*(s-1)*(s-2)*(s-3)*tab(5,6))/factorial(4);
fprintf('fs=%g\n',fs);