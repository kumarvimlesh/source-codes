#include<iostream>
using namespace std;
int main(){
 int long long t;
 cin>>t;
 while(t--){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
      cin>>a[i];
   }
   int count=0,max=-1,min=n;
   for(int i=0;i<n;i++){
      count++;
      if(count>max)
          max=count;
      if(a[i+1]-a[i]>=2){
        if(count<min)
           min=count;
        count=0;
      }
      cout<<"\ncount="<<count<<" min="<<min<<" max="<<max<<"\n";
   }
   cout<<min<<" "<<max<<"\n";
 }
 return 0;
}
