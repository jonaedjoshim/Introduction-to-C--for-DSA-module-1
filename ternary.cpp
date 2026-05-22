#include <iostream>
using namespace std;

int main()
{
    // normal condition
    int x = 6;
    if (x % 2 == 0)
    {
        cout << "Even\n";
    }
    else
    {
        cout << "Odd\n";
    }

    // ternary
    int n = 7;
    (n % 2 == 0) ? (cout << "Even\n") : (cout << "Odd\n");

    return 0;
}
