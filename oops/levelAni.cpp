#include<bits/stdc++.h>
using namespace std;
class Animals
{
public:

    Animals()
    {
        cout<<"\n base class animal";
    }
};
class Carnivores:public Animals
{
public:

    Carnivores()
    {
        cout<<"\n Carnivores";
    }

};
class Harbivores:public Animals
{
public:
  Harbivores()
    {
        cout<<"\n Harbivores ";
    }
};
class Omnivores:public Harbivores,public Carnivores
{
public:
    Omnivores()
    {
         cout<<"\n Omnivores ";
    }
};
int main()
{
    cout<<"\nmultiple inheritence";
    Harbivores H1;
    Carnivores C1;
    cout<<"\nMultilevel Inheritence";
    Omnivores O1;
    cout<<"\nHeirarchical Inheritence";
    Omnivores O2;
    return 0;
}
