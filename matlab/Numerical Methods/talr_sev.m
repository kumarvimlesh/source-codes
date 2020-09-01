%error in taylor series expansion of sine
x=input('insert the value of x : ');
n1=input('insert the number of term for first error : ');
n2=input('insert the number of term for second error : ');
true_value = sin(x);
curr_value = 0;
curr_term = 0;
for i=1:n1
    curr_term = (((-1)^i)*((x)^(2*i+1)))/factorial(2*i+1);
    curr_value = curr_term + curr_value;
end
error1 =abs( true_value - curr_value);
curr_value = 0;
curr_term = 0;
for i=1:n2
    curr_term = (((-1)^i)*((x)^(2*i+1)))/factorial(2*i+1);
    curr_value = curr_term + curr_value;
end
error2 =abs( true_value - curr_value);
fprintf('error1 = %d     error2 = %d',error1,error2)
