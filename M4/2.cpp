#include <iostream>

using namespace std;

int main()
{
    cout << "program untuk menghitung nilai rata-rata N buah bilangan bulat" << endl;
    cout << "=============================================================" << endl <<endl;

    char lagi;
    int tmp, i = 0;
    float all = 0;

    do
    {
        cout << "Masukkan bilangan ke " << ++i <<" = ";
        cin >> tmp;
        all += tmp;

        cout << "Masukkan bilangan lagi (y/n)? ";
        cin >> lagi;
        cout << endl;
    }while(lagi == 'y');

    cout << "rata-rata " << i << " bilangan tersebut adalah " << all/i << endl;

    return 0;
}