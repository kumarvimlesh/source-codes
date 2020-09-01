n1=2;
n2=5;
x=pi/3;
current_value_1=x;
current_term_1=x;
current_value_2=x;
current_term_2=x;
for i=1:n1
    current_term_1=((-1).^i)*abs((current_term_1)*x*x/((2*i)*(2*i+1)))
    current_value_1=current_value_1 + current_term_1
end
for i=1:n2
    current_term_2=((-1).^i)*abs((current_term_2)*x*x/((2*i)*(2*i+1)))
    current_value_2=current_value_2 + current_term_2
end
truevalue=sin(x)
err1=abs(truevalue-current_value_1)
err2=abs(truevalue-current_value_2)
fprintf('true value=%d  current value 1=%d  current value 2=%d   error 1=%d    error 2=%d',truevalue,current_value_1,current_value_2,err1,err2)