% Roots of equation cos(x)-x*exp(x)=0
f=@(x)(cos(x)-x*exp(x));
xi=[];
tab=[];
xi(1)=0;
xi(2)=0.5;
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
