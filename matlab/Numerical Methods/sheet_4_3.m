%Roots of sin(x)-1/x=0
disp('Bisection Method');
fprintf('Iterations    xr      Appr. Error\n');
c=[];
xl = 1;
xu = 1.5;
ea = 0.1;
xr = realmax;
f = @(x)(sin(x)-1/x); 
i=1; 
while ea>=0.0001
    xold = xr; 
    xr = (xl+xu)/2;
    ea = abs((xr-xold)/xr)*100;
    if (f(xl)*f(xr)<0)
        xu = xr;
    elseif(f(xl)*f(xr)>0)
        xl = xr;
    else
        break;
    end
    c(i,:)=[i xr ea];
    i = i+1; 
end
disp(c);
disp('Regular False Method');
fprintf('Iterations    xr      Appr. Error\n');
d=[];
xlf = 1; 
xuf = 1.5; 
i=1;
eaf = 1;
xrf = realmax;
while eaf>=0.0001
    xoldf = xrf; 
    xrf=xuf-((f(xuf)*(xlf-xuf))/(f(xlf)-f(xuf)));
    eaf = abs((xrf-xoldf))/abs(xrf)*100; 
    if (f(xlf)*f(xrf)<0) 
        xuf = xrf; 
    elseif(f(xlf)*f(xrf)>0)    
        xlf = xrf;
    else
        break;
    end
    d(i,:)=[i xrf eaf];
    i = i+1; 
end
plot(d(:,1),d(:,3),'-or',c(:,1),c(:,3),'-+b');
xlabel('Iteration');
ylabel('Approax Error');
disp(d)
fprintf('Roots of the equation sin(x)-1/x=0\n');
fprintf('Bisection Method => x=%g\n',xr);
fprintf('Regular False Method => x=%g\n',xrf);