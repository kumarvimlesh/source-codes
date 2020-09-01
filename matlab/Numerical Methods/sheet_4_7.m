x=-20:0.01:20;
y1=sin(10*x);
y2=cos(3*x);
y=y1+y2;
figure(1)
plot(x,y)
grid on
f=@(x) sin(10*x)+cos(3*x);
disp('Bisection Method');
fprintf('Iterations root(xr)  Appro.Error   Relative Error \n');
c=[];
true=14.8621;
xl = 14;
xu = 15;
ea = 1;
i=1;
xr = realmax;
while ea>=0.05
xold = xr;
xr = (xl+xu)/2;
ea = abs((xr-xold))/abs(xr)*100;
erel = abs((xr-true))/abs(true)*100;
if (f(xl)*f(xr)<0)
xu = xr;
elseif(f(xl)*f(xr)>0)
xl = xr;
else
break;
end
c(i,:)=[i xr ea erel];
i = i+1;
end
disp(c);
d=[];
eaf=1;
erelf=1;
xlf=14;
xuf=15;
i=1;
xrf=realmax;
disp('Falsie Method');
fprintf('Iterations root(xr)  Appro.Error  Relative Error \n');
while eaf>=0.5
xoldf = xrf;
xrf=xuf-((f(xuf)*(xlf-xuf))/(f(xlf)-f(xuf)));
eaf = abs((xrf-xoldf))/abs(xrf)*100;
erelf = abs((xrf-true))/abs(true)*100;
if (f(xlf)*f(xrf)<0)
xuf = xrf;
elseif(f(xlf)*f(xrf)>0)
xlf = xrf;
else
break;
end
d(i,:)=[i xrf eaf erelf];
i = i+1;
end
disp(d);
figure(2)
plot(c(:,1),c(:,3),'-*r',d(:,1),d(:,3),'-sb');
xlabel('Iteration');
ylabel('Approax. Error');
figure(3)
plot(c(:,1),c(:,4),'-or',d(:,1),d(:,4),'-+b');
xlabel('Iteration');
ylabel('Relative Error');
fprintf('Roots of the equation sin(10*x)+cos(3*x)=0\n');
fprintf('Bisection Method => x=%g\n',xr);
fprintf('Regular False Method => x=%g\n',xrf);