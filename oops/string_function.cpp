#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
    string s1,s2;
    cout<<"Enter the string s1 : ";
    getline(cin,s1);
    cout<<"Enter the string s2 : ";
    getline(cin,s2);
    cout<<"Size of string s1 : "<<s1.size()<<"\n";
    cout<<"Length of string s2 : "<<s2.length()<<"\n";
    cout<<"Comparison of string s1 and s2 : ";
    if(s1.compare(s2)!=0)
        cout<<"Not Equal \n";
    else
        cout<<"Equal \n";
    char ch;
    cout<<"Adding a character at the end of string s2 : \n";
    cout<<"Enter a character : ";
    cin>>ch;
    s2.push_back(ch);
    cout<<s2<<"\n";
    cout<<"capacity of string s2 : "<<s2.capacity()<<"\n";
    cout<<"Resizing string : \n";
    s2.resize(s2.size()-1);
    cout<<"string s2 : "<<s2<<"\n";
    cout<<"Swaping two strings : \n";
    s1.swap(s2);
    cout<<"string s1 : "<<s1<<"\n"<<"string s2 : "<<s2<<"\n";
    cout<<"substrings of s2 : "<<s2.substr(3,9)<<"\n";
    cout<<"Inserting s2 in s1 : "<<s1.insert(8,s2)<<"\n";
    return 0;

}

