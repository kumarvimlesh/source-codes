#include<iostream>
using namespace std;
template<class T>
void swaap(T x,T y)
{
    T *p,*q;
    p=&x;
    q=&y;
    T temp=p;
    p=q;
    q=temp;
    cout<<*p<<*q;
}
int main()
{
    int x;
    int y;
    cin>>x>>y;
    swaap(x,y);
    return 0;
}
