x=input('enter the binary number : ');
s= x(1);
i=10;j=2;
c= 0;m= 0;
while i>(-1)
c= c+x(j)*2^i;

i= i-1;
j= j+1;
end;
e= 2^(c-1023);
i= 1;j= 13;
while i<51
m= m+x(j)*(0.5)^i;
i= i+1;
j= j+1;
end;
m= m+1;
deci= (-1)^s*e*m;
disp('decimal number :');
disp(deci)