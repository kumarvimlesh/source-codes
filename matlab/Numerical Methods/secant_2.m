% Roots of equation x^2-2=0
fprintf('Secant Method : \n');
f=@(x)(x^2-2);
xi=[];
tab=[];
xi(1)=0;
xi(2)=1;
i=2;
error=1;
while error>0.000001
    r=xi(i);
    xi(i+1)=xi(i)-(f(xi(i))*(xi(i-1)-xi(i)))/(f(xi(i-1))-f(xi(i)));
    error=abs((xi(i+1)-xi(i))/xi(i))*100;
    tab(i-1,:)=[i-1 r error];
    i=i+1;
end
disp('Iterations    value   Rel. Err');
disp(tab);
fprintf('Root of equation is : %g\n',r);

% Using Bisection method
disp('Using Bisection Method');
fprintf('Iterations    xr      Rel. Error\n');
c=[];
xl = 0;
xu = 2;
ea = 0.1;
xr = realmax;
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
fprintf('Root of equation is : %g\n',xr);