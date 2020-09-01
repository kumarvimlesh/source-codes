x= [ 45 50 55 60 65] 
f= [ 2.871 2.404 2.083 1.862 1.712]
df= [ f(2)-f(1) f(3)-f(2) f(4)-f(3) f(5)-f(4) 0]
d2f= [ df(2)-df(1) df(3)-df(2) df(4)-df(3) 0 0]
d3f= [ d2f(2)-d2f(1) d2f(3)-d2f(2) 0 0 0]
d4f= [d3f(2)-d3f(1) 0 0 0 0 ]
 
i=1;j=1;
for i=1:length(x)
     m(i,1)= x(i); 
     m(i,2)= f(i);
     m(i,3)= df(i)
     m(i,4)= d2f(i)
     m(i,5)= d3f(i)
     m(i,6)= d4f(i)
end
h= x(2)-x(1)
syms x0;
s= (x0- x(1))/h
fs= @(s)f(1)+s*df(1)+(s*(s-1)/factorial(2))*d2f(1)+ (s*(s-1)*(s-2)/factorial(3))*d3f(1)+(s*(s-1)*(s-2)*(s-3)/factorial(4))*d4f(1);
disp('Matrix is:')
disp('       x        f        df       d2f        d3f        d4f')
 
disp(m);
disp('Function is:');
disp(fs(s));
x0=46;
s= (x0- x(1))/h
disp('value is:');
disp(fs(s));
