% Roots of equation cos(x)=x
fprintf('Secant Method : \n');
f=@(x)(cos(x)-x);
xi=[];
tab=[];
xi(1)=1;
xi(2)=0;
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

%Using Newton-Raphson method
fprintf('Using Newton Raphson method\n');
fd=@(x)(-1*sin(x)-1);
xi=[];
tab=[];
xi(1)=pi/4;
i=1;
error=1;
while error>0.000001
    r=xi(i);
    xi(i+1)=xi(i)-f(xi(i))/fd(xi(i));
    error=abs((xi(i+1)-xi(i))/xi(i))*100;
    tab(i,:)=[i r error];
    i=i+1;
end
disp('Iterations    value   Rel. Err');
disp(tab);
fprintf('Root of equation is : %g',r);