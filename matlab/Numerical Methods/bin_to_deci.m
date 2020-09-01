num = input('enter a binary number','s');
l=length(num);
sum = 0;
for i = 1 : length(num)
    sum = sum + str2num(num(i)) * 2^(l - i);
    dec=dec+ str2num(num(i)) * 2^(l - i);
end
fprintf('number in decimal is : %g',sum);