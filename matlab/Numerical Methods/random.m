% Random Numbers
a=randi([1,100],1,10)
p=0;
q=0;
r=0;
for i=1:10
    if (a(i)<25) 
        p=p+1; 
    else if (a(i)<75 && a(i)>=25)
        q=q+1;
    else if (a(i)>=75)
        r=r+1;
        end
        end
    end
end
sprintf('number <25 :%g',p)
sprintf('number >25 and <75 :%g',q)
sprintf('number >75 :%g',r)