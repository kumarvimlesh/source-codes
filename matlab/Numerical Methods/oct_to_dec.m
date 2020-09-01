% Octal to decimal
%171210059
m=input('enter a number of base 8 : ','s');
l=length(m);
num=str2num(m);
n=num-floor(num);
sum2=0;
sum1=0;
for i=1:l
    sum1=sum1+(rem(num,10))*(8^(i-1));
    num=floor(num/10);
end
i=1;
while n>0
    n=n*10;
    sum2 = sum2 + floor(n) * 8^(-1*i);
    if(floor(n)==1)
        break;
    end
    n=n-floor(n);
    i=i+1;
end
sum=sum1+sum2;
fprintf('number in decimal is : %g',sum);