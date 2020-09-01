#include<stdio.h>
int main()
{
	printf("*************\nVimlesh kumar\n171210059\n*************\n");
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n],i,j,temp;
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
	  scanf("%d",&arr[i]);
    }
for(i=0;i<n;i++)
    {
    	for(j=i;j<n;j++)
    	{
    		if(arr[i]>=arr[j])
    		{
    			temp=arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
			}
		}
	}
	printf("your sorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
return 0;
}
