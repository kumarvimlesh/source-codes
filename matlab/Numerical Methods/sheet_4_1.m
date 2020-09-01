%Roots of x^2-3
disp('Bisection Method');
fprintf('Iterations      xr_old     Error\n');
d=[];
i=1;
xl = -2;
xu = -1;
ea = 1;
xr = realmax;
f = @(x)(x^2-3);
while ea>=0.3
    xold = xr;
    xr = (xl+xu)/2; 
    ea = abs((xr-xold))/abs(xr)*100;
    if (f(xl)*f(xr)<0)    
        xu = xr;  
    elseif(f(xl)*f(xr)>0)
        xl = xr;
    else
        break;    
    end
    d(i,:)=[i xr ea];
    i = i+1; 
end
disp(d)
disp('Regular False Method');
fprintf('Iterations     xr_old   Error\n');
c=[];
xlf = 2; 
xuf = 1; 
i=1;
eaf = 1;
xrf = realmax;
while eaf>=0.3
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
    c(i,:)=[i xrf eaf];
    i = i+1; 
end
plot(c(:,1),c(:,3),'-*r',d(:,1),d(:,3),'-sb');
xlabel('Iteration');
ylabel('Approax Error');
disp(c)
fprintf('Roots of the equation x^2-3=0\n');
fprintf('Bisection Method => x=%g\n',xr);
fprintf('Regular False Method => x=%g\n',xrf);

 
 