x=[0 10 20 30 40];
fx=[2 3 12 147];
xr=input('inter the value of x : ');
p=1;
l=[];
px=0;
n=5;
for i=1:n
    for j=1:n
        if i==j
            continue;
        else
            p=p*((xr-x(j))/(x(i)-x(j)));
        end
    end
    l(i)=p;
    p=1;
end
for i=1:n
    px=px+l(i)*fx(i);
end
fprintf('value of f(%g) is : ',xr);
disp(px);