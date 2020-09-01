n = 5;
xs = input('Enter the value of xs : ');
x = [20 35 50 65 80];
fx = [3 11 24 50 98];
da = [];
da(:,1) = fx(1,:);
for i=2:n
    for j=1:n-i+1
        da(j,i) = da(j+1,i-1)-da(j,i-1);
    end
end
s = (xs-x(1))/abs(x(2)-x(1));
ans = 0;
sr = 1;
for i = 1:n
    if(i~=1)
        sr = (sr*(s-i+2))/(i-1);
    end
    ans = ans+da(1,i)*(sr);
end
fprintf('    x          f(x)     (d)f      (d^2)f   (d^3)f\n');
disp(da)
ans