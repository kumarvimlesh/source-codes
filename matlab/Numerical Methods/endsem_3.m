c=[];
xl = -3;
xu = 0;
error = 1;
xr = realmax;
f = @(x)(x^3-4*x+9);
i=1; 
while error>=0.0000001  
    xold = xr;
    xr = (xl+xu)/2; 
    error = (abs((xr-xold))/abs(xr))*100;
    if (f(xl)*f(xr)<0)
        xu = xr; 
    elseif(f(xl)*f(xr)>0)
        xl = xr;
    else
        break;
    end
    c(i,:)=[i xr error];
    i = i+1; 
end
disp(c);
fprintf('root is %g',xr);
