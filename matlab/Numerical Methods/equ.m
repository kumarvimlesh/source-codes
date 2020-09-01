% Roots of equation
coef=[1 0 0 0 0 0 0 0 -1]
a=roots(coef);
a 
m=length(coef);
for i=1:length(coef)
     m=m-1;
     fprintf('%gx^%g + ',coef(i),m);
end