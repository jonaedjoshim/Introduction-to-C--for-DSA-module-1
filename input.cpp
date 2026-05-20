#include <iostream>
using namespace std;
int main()
{
    int n;
    char c;
    double d;

    cin >> n >> c >> d;

    cout << "Nummber = " << n << endl
         << "Character = " << c << endl
         << "PI = " << d << endl;

    // printing ascii value
    char ch = 'a';
    cout << "ASCII = " << int(ch) << endl; //typecasting
    
    int ascii = ch;
    cout << "ASCII = " << ascii << endl;

    return 0;
}