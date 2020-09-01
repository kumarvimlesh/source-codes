#include<bits/stdc++.h>
using namespace std;
int isprime(long long int num){
    int flag=1;
    for(int i=2;i<=sqrt(num);i++) {
       if(num%i==0){
          flag=0;
          break;
       }
    }
    //cout<<" flag="<<flag<<"\n";
    return flag;
}
int main(){
 long long int t;
 cin>>t;
 while(t--){
  long long int count=0;
  long long int n;
  cin>>n;
  long long int arr[n];
  for(int i=0;i<n;i++){
     cin>>arr[i];
  }
  for(long long int i=0;i<n;i++){
     for(long long int j=i+1;j<n;j++){
        //cout<<"arr["<<i<<"]="<<arr[i]<<" arr["<<j<<"]="<<arr[j]<<" sum="<<arr[i]+arr[j];
        if(isprime(arr[i]+arr[j])){
          count++;
          //cout<<"\ncount="<<count<<"\n";
        }
     }
  }
  cout<<count<<"\n";
 }
 return 0;
}
