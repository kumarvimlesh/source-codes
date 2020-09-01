// C++ code to demonstrate Difference Array
#include <bits/stdc++.h>
using namespace std;
void printd(int D[]){
  for(int i=0;i<=4;i++){
    cout<<D[i]<<" ";
  }
 }

// Does range update
void update(int D[], int l, int r, int x)
{
    D[l] += x;
    D[r + 1] -= x;
    printd(D);
}

// Prints updated Array
int printArray(int A[], int D[])
{
    for (int i = 0; i < 4; i++) {
        if (i == 0)
            A[i] = D[i];

        // Note that A[0] or D[0] decides
        // values of rest of the elements.
        else
            A[i] = D[i] + A[i - 1];

        cout << A[i] << " ";
    }
    cout << endl;
}

// Driver Code
int main()
{
    // Array to be updated
    int A[4]={ 10, 5, 20, 40 };

    // Create and fill difference Array
    int n=4;
   int D[n+1];

    D[0] = A[0], D[n] = 0;
    for (int i = 1; i < n; i++)
        D[i] = A[i] - A[i - 1];
    printd(D);

    // After below update(l, r, x), the
    // elements should become 20, 15, 20, 40
    update(D, 0, 1, 10);
    printArray(A, D);

    // After below updates, the
    // array should become 30, 35, 70, 60
    update(D, 1, 3, 20);
    update(D, 2, 2, 30);
    printArray(A, D);

    return 0;
}
