#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    int l1=str1.length(),flag=0;
    sort(str1.begin(),str1.end());
    for(int i=0;i<str2.length()-l1;i++){
        string tmp=str2.substr(i,l1);
        sort(tmp.begin(),tmp.end());
        if(str1==tmp){
          flag=1;
          break;
        }
    }
    if(flag)
        cout<<"true";
    else
        cout<<"false";
    return 0;
}

