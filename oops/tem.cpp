#include<iostream>
using namespace std;
class temperature
{
 public:
  float celsius,fahrenheit;
 void convert()
 {
             fahrenheit=1.8*celsius+32;
  cout<<"temperature in fahrenhit is:"<<fahrenheit;
 }
};
int main()
{
 cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
 float c;
      cout<<"enter the value of temperature in the celsius"<<endl;
      cin>>c;
      temperature delhi;
      delhi.celsius=c;
      delhi.convert();
      return 0;
}
