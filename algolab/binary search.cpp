#include<stdio.h>
int main()
{
int arr[10],search,c,n,first,last,middle;
printf("\n Enter the number of elements in the array\n");
scanf("%d",&n);
printf("enter the %d integers\n",n);
for (c=0;c<=n-1;c++)
scanf("%d",&arr[c]);
printf("Enter the number to be search\n");
scanf("%d",&search);
first=0;
last=n-1;
middle=(first+last)/2;
while(first<=last)
{ if(arr[middle]<search)
first=middle+1;
else if(arr[middle]==search)
{
printf("%d element found at location %d\n",search,middle+1);
break;
}
else
last=middle-1;
middle=(first+last)/2;


}
if(first>last)
{
printf("%d does not present in the array",search);
}
return 0;
}
