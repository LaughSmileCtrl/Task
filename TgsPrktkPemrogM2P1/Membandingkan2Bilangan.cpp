#include <iostream>

using namespace std;

int main()
{
    float a, b;

    cout << "Membandingkan 2 Bilang" << endl;
    cout << "Masukkan bilangan pertama : ";
    cin >> a;
    cout << "Masukkan bilangan kedua : ";
    cin >> b;

    if(a>b)
    {
        cout << "Bilangan pertama lebih besar dari bilangan kedua" << endl;
    }
    else if (b>a)
    {
        cout << "Bilangan kedua lebih besar dari pertama bilangan " << endl;
    }else
    {
        cout << "Kedua bilangan sama" << endl;
    }
    
    return 0;
}
