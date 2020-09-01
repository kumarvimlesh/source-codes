%Root of x^10-1=0
f=@(x)((x^10)-1);
fd=@(x)(10*(x^9));
xi=[];
ans=[];
xi(1)=0.5;
i=1;
error=1;
while error>0.000001
    r=xi(i);
    xi(i+1)=xi(i)-f(xi(i))/fd(xi(i));
    error=abs((xi(i+1)-xi(i))/xi(i))*100;
    ans(i,:)=[i r error];
    i=i+1;
end
disp('Iterations    Root   Rel. Err');
disp(ans);
fprintf('Root of equation is : %f',r);

