#include <iostream>
using namespace std;
class Car
{
   private:
     string name;
     float price;
   public:
    Car(string name,float price)
    {
      this->name=name;
      this->price=price;
    }
    cout<<"\nCar: "<<name<<"\nPrice: "<<price<<endl;
};
int main(){
    Car c1("Swift Dzire",50000);
}
