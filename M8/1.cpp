#include <iostream>

using namespace std;

float tambah(float bil1, int bil2)
{
    return (bil1+bil2);
}

float kurang(float bil1, int bil2)
{
    return (bil1-bil2);
}

float kali(float bil1, int bil2)
{
    return (bil1*bil2);
}

float bagi(float bil1, int bil2)
{
    return (bil1/bil2);
}



int main()
{
    float bil1, bil2;
    char oprt;

    cout << "\t\t\tKalkulator" << endl;
    cout << "\t\t\t==========" << endl << endl;

    cout << "Masukkan operasi(+,-,*,/): ";
    cin >> oprt;
    cout << "Masukkan bilangan pertama = ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua = ";
    cin >> bil2;
    cout << endl << endl << bil1 << " " << oprt << " " << bil2 << " = ";

    switch (oprt)
    {
    case '+' :
        cout << tambah(bil1, bil2) << endl;
        break;
    case '-' :
        cout << kurang(bil1, bil2) << endl;
        break;
    case '*' :
        cout << kali(bil1, bil2) << endl;
        break;
    case '/' :
        cout << bagi(bil1, bil2) << endl;
        break;
    default:
        cout << "OPERATOR TIDAK DIDUKUNG!!" << endl;
        break;
    }

    return 0;
}