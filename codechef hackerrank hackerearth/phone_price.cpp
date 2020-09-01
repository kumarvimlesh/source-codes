#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n,count=0;
  cin>>n;
  long long arr[n+5];
  arr[1]=9999;
  arr[2]=9999;
  arr[3]=9999;
  arr[4]=9999;
  arr[5]=9999;
  for(int i=6;i<=n+5;i++){
  cin>>arr[i];
  }
  for(int i=6;i<=n+5;i++){
  if(arr[i]<arr[i-1] && arr[i]<arr[i-2] && arr[i]<arr[i-3] && arr[i]<arr[i-4] && arr[i]<arr[i-5])
   count++;
  }
  cout<<count<<"\n";
 }
}
