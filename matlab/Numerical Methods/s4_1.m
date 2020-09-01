timeinterval=[14.7 14.9];
iterat=1;
f=@(x) sin(10*x)-cos(3*x);
m_err1=[]; m_err3=[];
m_err2=[];
iterations=[]; iterations2=[];
err1=100; err3=100;
disp(' Using Bisection Method ');
disp('Iterations Absolute error Relative error ');
while iterat<11
if iterat>1
old=xr2;
end
xr2=(timeinterval(1,1)+timeinterval(1,2))/2; f1=f(timeinterval(1,1));
fxr1=f(xr2);
if f1*fxr1<0
timeinterval(1,2)=xr2;
end
if f1*fxr1>0
timeinterval(1,1)=xr2;
end
if iterat>1
err1=abs((xr2-old)/xr2)*100;
error2=abs((14.862-xr2)/14.862)*100;
end
if iterat>1
m_err1=[m_err1 err1];
m_err2=[m_err2 error2];
iterations=[iterations iterat];
fprintf(' %d \t %d \t %d \n',iterat,error2,err1);
end
iterat=iterat+1;
end
fprintf('Root By Bisection method: %d\nIterations used(Bisection):%d\n',xr2,length(iterations));
disp(' Using Regular Falsi Methhod ');

disp(' Iterations Absolute error Relative error |');
iterat=1; timeinterval=[14.7 14.9];
m_error4=[];
while iterat<11
if iterat>1
old=xr1;
end
fxl=f(timeinterval(1,1)); fxu=f(timeinterval(1,2));
xr1=(timeinterval(1,2)*fxl-timeinterval(1,1)*fxu)/(fxl-fxu);
fxr1=f(xr1);
if fxu*fxr1<0
timeinterval(1,2)=xr1;
else
timeinterval(1,1)=xr1;
end
if iterat>1
err3=abs((xr1-old)/xr1)*100;
error4=abs((14.862-xr1)/xr1)*100;
m_err3=[m_err3 err3];
m_error4=[m_error4 error4];
iterations2=[iterations2 iterat];
fprintf(' %d \t %d \t %d \n',iterat,error4,err3)
end
iterat=iterat+1;
end
fprintf('\nRoot By Falsi method: %d\nIterations used(Falsi):%d\n',xr1,length(iterations2));
hold on
xlabel('Iterations');
ylabel('Error');
plot(iterations,m_err1,'b.-')
plot(iterations,m_err2,'c+-.')
plot(iterations2,m_err3,'rd--')
plot(iterations2,m_error4,'mo:')

legend('Relative error-Bisection','Absolute error-Bisection','Relative error-Falsimethod','Absolute error-Falsi method');