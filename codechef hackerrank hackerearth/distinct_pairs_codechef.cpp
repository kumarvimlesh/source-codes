#include<iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main()
{
    int n,m,k=0,count=0;
    cin>>n>>m;
    int A[n],B[m];
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<m;i++)
        cin>>B[i];
    int arr[n*m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
                arr[k++]=A[i]+B[j];
                cout<<k;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(binarySearch(arr,count,m*n, A[i]+B[j]))
                continue;
            else
            {
                cout<<A[i]<<B[j];
                count++;
            }

        }
    }
    return 0;
}
