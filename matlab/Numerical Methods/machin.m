%machine number
num=input('Enter Binary number: ');
l=64;
m=1;
exp=0;
frac=0;
for i=0:10  
    if num(12-i)=='1'      
        exp=exp+2^i;    
    end
end
exp=exp-1023; 
p=-1;
for i=13:length(num)  
    if num(i)=='1'
        frac=frac+2^(p); 
    end
    p=p-1;
end 
if(num(1)==1)
   m=(-1)*m*(2^exp)*(frac); 
else
   m=m*(2^exp)*(frac); 
end
fprintf('machine number is : ',m);
