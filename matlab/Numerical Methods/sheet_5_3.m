%Roots of x^3-10*x^2+65*x-50=0
f=@(x)(x^3-10*(x^2)+65*x-50);
fd=@(x)(3*(x^2)-20*x+65);
xi=[];
tab=[];
xi(1)=0;
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