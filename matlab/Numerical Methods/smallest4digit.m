% smallest N whose sum is four digit number
sum=0;
i=1;
while sum<1000
    sum=sum+i;
    i=i+1;
end
sprintf('the required smallest number is : %g',i-1)
sprintf('sum=%g',sum)
