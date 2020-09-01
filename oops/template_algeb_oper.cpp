#include<bits/stdc++.h>
using namespace std;
template<class T1,class T2>
void operation(T1 a,T2 b)
{
    int choice;
    while(1)
    {
        cout<<"\n1-Perform '+' operation\n2-Perform '-' operation\n3-Perform '*' operation\n4-Perform '/' operation\n";
        cout<<"Select from above : ";
        cin>>choice;
        switch(choice)
        {
           case 1:
               cout<<"Result : "<<a+b;
               break;
           case 2:
               cout<<"Result : "<<a-b;
               break;
           case 3:
               cout<<"Result : "<<a*b;
               break;
           case 4:
               cout<<"Result : "<<a/b;
               break;
           default :
               _Exit(1);
        }
    }
}
int main()
{
   cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
   //both are integer
//   int a,b;
   //both are float
//   float a,b;
   //a is float and b is integer
//   float a;
//   int b;
   //a is integer and b is float
//   int a;
//   float b;
   //both are character
   char a,b;
   cout<<"Enter the values of a and b : ";
   cin>>a>>b;
   operation(a,b);
   return 0;
}
