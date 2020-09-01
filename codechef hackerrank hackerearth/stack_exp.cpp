#include<iostream>
#include<stack>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int flag=0;
        string exp;
        cin>>exp;
        satck <char> s;
        for(int i=0;i<exp.length();i++){
            if(exp[i]=='{' || exp[i]=='[' || exp[i]=='('){
                s.push(exp[i]);
            }
            else{
                if(arr[i]!=s.pop())
                   flag++;
            }
        }
        if(flag)
          cout<<"not balanced\n";
        else
          cout<<"balanced\n";
    }
    return 0;
}
