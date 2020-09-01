#include<iostream>
#include<math.h>
using namespace std;
int A[20];
int count=0;
void swap(int dex1, int dex2) {
    int temp = A[dex1];
    A[dex1] = A[dex2];
    A[dex2] = temp;
}
int partition(int start, int end) {
    int i = start + 1;
    int j = i;
    int pivot = start;
    for (; i < end; i++) {
        if (A[i] < A[pivot]) {
            swap(i, j);
            count++;
            j++;
        }
    }
    if (j <= end)
        swap(pivot, (j - 1));
        count++;
    return j - 1;
}
void quick_sort(int start, int end, int K) {
    int part;
    if (start < end) {
        part = partition(start, end);
        if (part == K - 1)
            cout<<"kth smallest element : "<<A[part];
        if (part > K - 1)
            quick_sort(start, part, K);
        else
            quick_sort(part + 1, end, K);
    }
    return;
}

int main()
{
    cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
    int i,N;
    cout<<"size of array : ";
    cin>>N;
    cout<<"enter array elements\n";
    for (i = 0; i < N; i++)
    {
        cin>>A[i];
    }
    cout<<"The original sequence is:  ";
    for (i = 0; i < N; i++)
        cout<<A[i]<<" ";
    int k;
    cout<<"\nEnter the Kth smallest you want to find: ";
    cin>>k;
    quick_sort(0, N, k);
    cout<<"\n the count is "<<count;
    return 0;
}
