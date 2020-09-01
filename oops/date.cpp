#include<iostream>
#include<stdlib.h>
using namespace std;
class Date
{
   private:
     int dd,mm,yyyy;
     string date;
   public:
     Date()
     {
        dd=29;
        mm=01;
        yyyy=2019;
        cout<<"Date:"<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
     }
     Date(int d,int m, int y)
     {
        dd=d;
        mm=m;
        yyyy=y;
        cout<<"Date:"<<d<<"/"<<m<<"/"<<y<<endl;
    }
     Date(string date)
     {
        cout<<"Date:"<<date<<endl;
     }
};
int main()
{
   cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
   int choice,d,m,y;
   string date;
   cout<<"1.default constructor"<<endl<<"2.Parameterized constructor"<<endl<<"3.String as input"<<endl<<"4.Exit"<<endl;
    while(1)
      {
       cout<<"Enter your choice : ";
       cin>>choice;
       switch(choice)
       {
          case 1:
          {
             Date();
             break;
          }
         case 2:
         {
             cout<<"Enter Day, Month and Year values with space : ";
             cin>>d;
             cin>>m;
             cin>>y;
             Date(d,m,y);
             break;
         }
         case 3:
         {
             cout<<"Enter the date in dd/mm/yyyy format : ";
             cin>>date;
             Date(date);
             break;
         }
        case 4:
         {
             exit(1);
         }
      }
     }
return 0;
}
