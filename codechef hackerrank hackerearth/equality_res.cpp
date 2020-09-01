#include<iostream>
using namespace std;
int find_maximal(long long int arr[],long long int p,long long int q){
  int flag=1;
  for(int i=p;i<q;i++){
    if(arr[i]>arr[i+1]){
        flag=0;
        break;
    }
  }
  cout<<flag<<"\n";
  return flag;
}
int find_minimal(long long int arr[],long long int p,long long int q){
  int flag=1;
  for(int i=p;i<q;i++){
    if(arr[i]<arr[i+1]){
        flag=0;
        break;
    }
  }
  cout<<flag<<"\n";
  return flag;
}
int main(){
   #define int long long int
   int n,q;
   cin>>n>>q;
   int arr[n];
   for(int i=1;i<=n;i++){
      cin>>arr[i];
   }
   while(q--){
      int l,r,maximal,minimal,maxcount=0,minicount=0;
      cin>>l>>r;
      maximal=find_maximal(arr,p,q);
      for(int i=p;i<=q;i++){
        if(maximal && arr[i-1]>arr[i] && arr[i+2]<arr[i+1])
            maxcount++;
      }
      minimal=find_minimal(arr,p,q);
      for(int i=p;i<=q;i++){
        if(minimal && arr[i-1]<arr[i] && arr[i+2]>arr[i+1])
            minicount++;
      }
      if(minicount==maxcount)
         cout<<"YES\n";
      else
        cout<<"NO\n";
   }
   return 0;
}
