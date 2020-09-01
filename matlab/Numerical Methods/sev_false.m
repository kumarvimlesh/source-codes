x=-20:0.01:20;
y1=sin(10*x);
y2=cos(3*x);
y=y1+y2;
plot(x,y);
grid on
f=@(x) sin(10*x)+cos(3*x);
disp('Bisection Method');
fprintf('Iterations    root(xr)           Relative Error  \n');
xl = 14;
xu = 15;
ea = 1;
i=1;
xr = realmax;
while ea>=0.5
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
     fprintf('%g            %g             %g  \n',i,xold,ea)
    i = i+1; 
end
errorf=1;
xlf=14;
xuf=15;
i=1;
xrf=realmax;
fprintf('Iterations    root(xr)           Relative Error  \n');
while errorf>0.05
        xoldf=xrf;
        xrf=xuf-((f(xuf)*(xlf-xuf))/(f(xlf)-f(xuf)));
         errorf=(abs(14.8621-xrf)/14.8621)*100;
        if ((f(xrf)*f(xlf))<0)
           xuf=xrf;
        elseif ((f(xrf)*f(xlf))>0)
           xlf=xrf;
        else 
            break;
        end
        fprintf('%g            %g             %g  \n',i,xoldf,errorf)
       i=i+1;
end
fprintf('Roots of the equation sin(10*x)+cos(3*x)=0\n');
fprintf('Bisection Method => x=%g\n',xr);
fprintf('Regular False Method => x=%g\n',xrf);

