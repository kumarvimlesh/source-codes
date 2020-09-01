#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int t;
    cin>>t;
    //pranshu=1
    //jatin=0
    while(t--){
        int n,curr=0;
        cin>>n;
        while(n){
            int r=log2(n);
            if(r<=1)
                break;
            cout<<" r="<<r;
            for(int x=r+1;x>=1;x--){
                cout<<" x="<<x;
                if(x&n==0){
                    curr=~curr;
                    n-=x;
                    break;
                }
                cout<<"nklbds";
            }
        }
        if(curr)
           cout<<"Jatin\n";
        else
           cout<<"Pranshu\n";
    }
    return 0;
}
