#include<iostream>
#include<math.h>
using namespace std;
int main(){
 long long int t;
 cin>>t;
 while(t--){
    int n;
    long long int a,b,d,res;
    cin>>n>>a;
    cout<<2*pow(10,n)+a<<"\n";
    cin>>b;
    cout<<pow(10,n)-b<<"\n";
    cin>>d;
    cout<<pow(10,n)-d<<"\n";
    cin>>res;
 }
 return 0;
}
