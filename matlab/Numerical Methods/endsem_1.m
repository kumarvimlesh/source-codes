x=[0 10 20 30 40];
fx=[7 18 32 48 85];
xr=input('enter the value of x : ');
n=5;
m=1;
l=[];
px=0;
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