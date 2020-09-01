xl=14;
xu=15;
ea=1;
xr=realmax;
true=14.8621;
y=@(x) sin(10*x) + cos(3*x);
d=[];
i=1;
ea=1;
while(ea>0.005)
    xold=xr;
    xr=(xl+xu)/2;
    error1=abs(((true-m)/(true))*100);
    ea=abs((xr - xold))/abs(xr)*100;
    d(i,:)=[i xl xr xu error1 ea];
    if(y(xl)*y(xr)<0)
        xu=xr;
    elseif(y(xl)*y(xr)>0)
        xl=xr;
    else
        break;
    end
    i=i+1;
end
disp(d);
disp(xr);
xl=14;
xu=15;
ea=1;
xr=realmax;
i=1;
c=[];
error2=1;
while(error2>0.005)
    xold2=xr;
    xr=xu - ((y(xu)*(xu-xl))/(y(xu) - y(xl)));
    error2=abs(((true-xr)/(true)*100));
    ea = abs((xr-xold2)/xr)*100;
    c(i,:)=[i xl xr xu error2 ea];
if(y(xl)*y(xr)<0)
    xu=xr;
elseif(y(xl)*y(xr)>0)
    xl=xr;
else
    break
end
i=i+1;
end
disp(c);
disp(xr);
%subplot(2,1,1);
plot(c(:,1),c(:,5),'-*r',c(:,1),c(:,6),'-sb');
%legend('True Rel. Err.','Approx.  Err.');
title('Regula Falsi Method');
xlabel('Iteration');
ylabel('Error');
%subplot(2,1,2);
plot(d(:,1),d(:,6),'-or',c(:,1),c(:,6),'-+b');
%legend('Approx.  Err. Bisect.','Approx.  Err. Regular Falsi');
xlabel('Iteration');
ylabel('Error');