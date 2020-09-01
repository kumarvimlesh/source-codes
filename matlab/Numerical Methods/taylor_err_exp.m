% Taylor expansion of exponential function
x=input('enter the value of x : ');
n1=input('enter the number of term for first error : ');
n2=input('enter the number of term for second error : ');
true_value=exp(x);
curr_value=0;
curr_term=0;
for i=1:n1
    curr_term=(x^(i-1))/factorial(i-1);
    curr_value=curr_value+curr_term;
end
error1=abs(true_value-curr_value);
curr_value=0;
curr_term=0;
for i=1:n2
    curr_term=(x^(i-1))/factorial(i-1);
    curr_value=curr_value+curr_term;
end
error2=abs(true_value-curr_value);
fprintf('error1 = %g   error2 = %g',error1,error2);