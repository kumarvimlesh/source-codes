%to check the entered number belongs to fibonacci series or not
n=input('enter any number : ');
a=0;
b=1;
m=0;
while (a+b<=n)
    c=a+b;
    a=b;
    b=c;
    if(c==n)
        fprintf('entered number is fibonacci number ');
        m=1;
    end
end
 if(m==0)
        fprintf('entered number is not a fibonacci number ');
 end    