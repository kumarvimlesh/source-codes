x=5;
n=input('insert the number of term : ');
true_value = 0.006737947;
curr_value = 0;
curr_term = 0;
for i=1:n
    curr_term = ((x*(-1))^(i-1))/factorial(i-1);
    curr_value = curr_term + curr_value;
end
error1 =abs( true_value - curr_value);
curr_value = 0;
curr_term = 0;
for i=1:n
    curr_term = (x)^(i-1)/factorial(i-1);
    curr_value = curr_term + curr_value;
end
curr_value=1/(curr_value);
error2 =abs( true_value - curr_value);
fprintf('error by method 1 = %d \nerror by method 2 = %d',error1,error2)
