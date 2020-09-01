#include<bits/stdc++.h>
using namespace std;
int main(){
 long long t;
 cin>>t;
 while(t--){
    long long arr[3],flag=0;
    for(int i=0;i<3;i++)
        cin>>arr[i];
    while(1){
        sort(arr,arr+3);
        if(arr[0]==arr[1] || arr[1]==arr[2] || arr[0]==arr[2]){
            flag=1;
            break;
        }
        if(arr[0]==arr[1]-1 && arr[1]==arr[2]-1 && arr[0]==arr[2]-2){
            flag=0;
            break;
        }
        arr[0]+=2;
        arr[1]--;
        arr[2]--;
    }
    if(flag)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
 }
 return 0;
}
