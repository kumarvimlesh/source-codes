#include<iostream>
#include<string.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    string str;
    cin>>str;
    sort(str,str.length());
    cout<<str;
 }
 return 0;
}
