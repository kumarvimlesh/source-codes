% Lagrange Interpolation
x=[0 1 2 5];
fx=[2 3 12 147];
xr=input('inter the value of x : ');
m=1;
l=[];
px=0;
n=4;
for i=1:n
    for j=1:n
        if i==j
            continue;
        else
            m=m*((xr-x(j))/(x(i)-x(j)));
        end
    end
    l(i)=m;
    m=1;
end
for i=1:n
    px=px+(l(i))*(fx(i));
end
fprintf('value of f(%g) is : ',xr);
disp(px);