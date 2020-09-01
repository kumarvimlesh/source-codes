#include<bits/stdc++.h>
using namespace std;
class Animals
{
public:

    Animals()
    {
        cout<<"\n  Elephant Lion Dog ";
    }
};
class Carnivores:public Animals
{
public:

    Carnivores()
    {
        cout<<"\n  Tiger Leopard";
    }

};
class Harbivores:public Animals
{
public:
  Harbivores()
    {
        cout<<"\n  Cow Goat";
    }
};
class Omnivores:public Harbivores,public Carnivores
{
public:
    Omnivores()
    {
         cout<<"\n  Cat Humans";
    }
};
int main()
{
    cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
    cout<<"\nmultiple inheritence";
    Harbivores H1;
    Carnivores C1;
    cout<<"\n\nMultilevel Inheritence";
    Omnivores O1;
    cout<<"\n\nHeirarchical Inheritence";
    Omnivores O2;
    return 0;
}
