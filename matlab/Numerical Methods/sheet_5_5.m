%Roots of x^4-6*x^3+12*x^2-10*x+3=0
f=@(x)(x^4-6*(x^3)+12*(x^2)-10*x+3);
fd=@(x)(4*(x^3)-18*(x^2)+24*x-10);
xi=[];
tab=[];
xi(1)=0.5;
i=1;
error=1;
while error>0.000001
    r=xi(i);
    xi(i+1)=xi(i)-3*(f(xi(i))/fd(xi(i)));
    error=abs((xi(i+1)-xi(i))/xi(i))*100;
    tab(i,:)=[i r error];
    i=i+1;
end
disp('Iterations    value   Rel. Err');
disp(tab);
fprintf('Root of equation is : %g',r);