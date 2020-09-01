%Roots of x^7-21*x^6+15*x^3+x-5=0
f=@(x)(x^7-21*(x^6)+15*(x^3)+x-5);
fd=@(x)(7*(x^6)-126*(x^5)+45*(x^2)+1);
xi=[];
tab=[];
xi(1)=0.5;
i=1;
error=1;
while error>0.000001
    r=xi(i);
    xi(i+1)=xi(i)-f(xi(i))/fd(xi(i));
    error=abs((xi(i+1)-xi(i))/xi(i+1))*100;
    tab(i,:)=[i r error];
    i=i+1;
end
disp('Iterations    value   Rel. Err');
disp(tab);
fprintf('Root of equation is : %g',r);