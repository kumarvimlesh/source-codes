%Roots of 5x^4-2.7x^2-2x+0.5 on [0.1, 0.5]
disp('Bisection Method');
fprintf('Iterations    xr      Appr. Error\n');
c=[];
xl = 0.1;
xu = 0.5; 
ea = 1;
xr = realmax;
f = @(x)(5*x^4-2.7*x^2-2*x+0.5);
i=1; 
while ea>=0.0001
    xold = xr;
    xr = (xlf+xuf)/2;
    ea = abs((xr-xold))/abs(xr);  
    if (f(xl)*f(xr)<0)
        xu = xr;
    elseif(f(xl)*f(xr)>0)
        xl = xr; 
    else
        break;
    end
    c(i,:)=[i xr eaf];
    i = i+1;
end
disp(c);
disp('Regular Falsi Method');
fprintf('Iterations    xr      Appr. Error\n');
d=[];
xlf = 0.1; 
xuf = 0.5; 
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
disp(d)
plot(d(:,1),d(:,3),'-or',c(:,1),c(:,3),'-+b');
xlabel('Iteration');
ylabel('Approax Error');
fprintf('Roots of the equation 5x^4-2.7x^2-2x+0.5\n');
fprintf('Bisection Method => x=%g\n',xr);
fprintf('Regular False Method => x=%g\n',xrf);