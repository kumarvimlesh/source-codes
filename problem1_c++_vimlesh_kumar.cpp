#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    int l1=str1.length(),l2=str2.length(),l=0;
    l=l1<l2?l1:l2;
    int flag=0,len=0;
    string out;
    while(l--){
        vector<string> s1,s2;
        int m=0,n=0;
        for(int i=0;i<str1.length()-l1;i++){
           s1.push_back(str2.substr(i,l1));
           m++;
        }
        for(int i=0;i<str2.length()-l1;i++){
           s2.push_back(str2.substr(i,l1));
           n++;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(s1[i]==s2[j]){
                    out=s1[i];
                    len=l;
                    flag=1;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            break;
    }
    cout<<"Larger Common Substring length is "<<len<<" and substring is “"<<out<<"" ";
    return 0;
}

