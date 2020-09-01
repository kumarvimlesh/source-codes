#include<iostream>
using namespace std;
int swap(int ptr1, int ptr2)
{
    int temp;
    temp=ptr1;
    ptr1=ptr2;
    ptr2=temp;
    cout<<&ptr1<<" "<<&ptr2<<"\n";
}
int main()
{
    int i=5,j=10;
    cout<<&i<<" "<<&j<<"\n";
    swap(i,j);
    cout<<"i="<<i<<" "<<"j="<<j<<"\n";
    return 0;
}
