#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character left by cin >> n
    char s[100];
    // cin >> s;
    cin.getline(s, 100);
    cout << n << endl << s << endl;

    // c language also has a built in string function. name string

    return 0;
}