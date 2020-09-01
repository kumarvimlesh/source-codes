#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;
class PhoneNumber
{
    private:
    char areaCode[ 4 ];
    char exchange[ 4 ];
    char line[ 5 ];
    public:
    friend ostream &operator<<( ostream&, const PhoneNumber & );
    friend istream &operator>>( istream&, PhoneNumber & );
 };
ostream &operator<<( ostream &output, const PhoneNumber &num )
{
output << "(" << num.areaCode << ") "
<< num.exchange << "-" << num.line;
return output;
}
istream &operator>>( istream &input, PhoneNumber &num )
{
input.ignore();
input >> setw( 4 ) >> num.areaCode;
input.ignore( 2 );
input >> setw( 4 ) >> num.exchange;
input.ignore();
input >> setw( 5 ) >> num.line;
return input;
 }
 int main()
{
PhoneNumber phone;
cout << "Enter phone number in the form (123) 456-7890:\n";
cin >> phone;
cout << "The phone number entered was: " << phone << endl;
return 0;
}
