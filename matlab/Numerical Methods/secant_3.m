% Roots of equation x^7+3*x^6+7*x^5+x^4+5*x^3+2*x^2+5*x+5=0
f=@(x)(x^7+3*x^6+7*x^5+x^4+5*x^3+2*x^2+5*x+5);
xi=[];
tab=[];
xi(1)=-1;
xi(2)=-0.5;
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
