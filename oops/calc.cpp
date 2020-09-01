#include<iostream>
#include<stdlib.h>
using namespace std;
class calculator
{
public:
float x,y;
int add()
{
cout<<"enter the first number : ";
cin>>x;
cout<<"enter the second number : ";
cin>>y;
cout<<"result is: "<<x<<"+"<<y<<"="<<x+y<<endl;
}
int sub()
{
cout<<"enter the first number : ";
cin>>x;
cout<<"enter the second number : ";
cin>>y;
cout<<"result is: "<<x<<"-"<<y<<"="<<x-y<<endl;
}
int mul()
{
cout<<"enter the first number : ";
cin>>x;
cout<<"enter the second number : ";
cin>>y;
cout<<"result is: "<<x<<"*"<<y<<"="<<x*y<<endl;
}
int div()
{
cout<<"enter the first number : ";
cin>>x;
cout<<"enter the second number : ";
cin>>y;
cout<<"result is: "<<x<<"/"<<y<<"="<<x/y<<endl;;
}
};
int main()
{
cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
calculator calc;
int choice;
while(1)
{
cout<<"1:addition 2:subtraction 3:multiplication 4:division 5:Exit"<<endl;
cout<<"select option : ";
cin>>choice;
switch(choice)
{
case 1:
calc.add();
break;
case 2:
calc.sub();
break;
case 3:
calc.mul();
break;
case 4:
calc.div();
break;
case 5:
    exit(1);
}
}
return 0;
}
