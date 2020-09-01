%binary to decimal
m=input('enter the binary number : ','s');
l=length(m);
num=str2num(m);
n=num-floor(num);
sum2=0;
sum1=0;
for i=1:l
    sum1=sum1+(rem(num,10))*(2^(i-1));
    num=floor(num/10);
end
i=1;
while n>0 && n<1
    n=n*10;
    sum2 = sum2 + floor(n) * 2^(-1*i);
    if(floor(n)==1)
        break;
    end
    n=n-floor(n);
    i=i+1;
end
sum=sum1+sum2;
fprintf('number in decimal is : %g',sum);