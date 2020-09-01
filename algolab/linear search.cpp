#include<stdio.h>
int main()
{
    int search,i,n;
    printf("*************\nVimlesh kumar\n171210059\n*************\n");
    printf("\nEnter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array : ");
    for (i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the number to be search : ");
    scanf("%d",&search);
    for (i=0;i<n;i++)
    {
        if (arr[i]==search)
        {
           printf("%d element found at location %d\n",search,i+1);
           break;
        }
    }
    if(i==n)
    {
         printf("%d does not present in the array\n",search);
    }

    return 0;
}
