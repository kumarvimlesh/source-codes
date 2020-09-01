#include<stdio.h>
#include<math.h>
int N =5;
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
            printf("kth smallest element : %d ", A[part]);
        if (part > K - 1)
            quick_sort(start, part, K);
        else
            quick_sort(part + 1, end, K);
    }
    return;
}

int main()
{
    int i;
    printf("enter array elements");
    for (i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }


    printf("The original sequence is:  ");
    for (i = 0; i < N; i++)
        printf("%d ", A[i]);

    printf("\nEnter the Kth smallest you want to find: ");
    int k;
    scanf("%d", &k);
    quick_sort(0, N, k);
    printf("\n the count is %d ",count);
}
