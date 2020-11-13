#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 5, c = 2, h1, h2;

    h1 = a&b;
    h2 = b|c;

    cout << "Operasi Bitwise" << endl;
    cout << a << " & " << b << " = " << h1 << endl;
    cout << b << " | " << c << " = " << h2 << endl;
    return 0;
}
