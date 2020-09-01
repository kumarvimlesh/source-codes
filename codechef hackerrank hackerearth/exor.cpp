#include<iostream>
#define ll long long
using namespace std;
int main(){
 ll t;
 cin>>t;
 while(t--){
    ll n,k;
    cin>>n>>k;
    ll A[n];
    for(ll i=0;i<n;i++)
        cin>>A[i];
    if(k<=n){
        for(ll i=0;i<n;i++){
        ll a=0,b=0;
        a=A[i];
        b=A[n-i-1];
        //cout<<"a="<<a<<" b="<<b;
        A[i]=a^b;
        //cout<<"a xor b = "<<A[i%n]<<"\n";
    }
    else{
        ll a,b;
        a=(k/n)%3;
        b=k%n;
        if(n%2!=0)
            A[n/2-1]=0;
        if(a==0){

        }
        else if(a==1){
            for(ll i=0;i<n;i++){
            if(i<n/2){
                ll p=0,q=0,B[n];
                p=A[i];
                q=A[n-i-1];
                //cout<<"a="<<a<<" b="<<b;
                B[i]=a^b;
            }
            else{
                B[i]=A[n-i-1];
            }
           }
       }
       else if(a==2){
           for(ll i=0;i<n;i++){
            if(i>n/2){
                ll p=0,q=0,B[n];
                p=A[i];
                q=A[n-i-1];
                //cout<<"a="<<a<<" b="<<b;
                B[i]=a^b;
            }
            else{
                B[i]=A[n-i-1];
            }
           }
       }
    }
    for(ll i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<"\n";
 }
 return 0;
}
