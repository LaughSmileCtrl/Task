#include <iostream>

using namespace std;

int main()
{
    int all = 0;
    int userinput;
    char pilih;

    pilih = 'n';
    
    while (pilih == 'y')
    {
        cout << "Masukkan angka ";
        cin >> userinput;
        all += userinput;

        cout << "lanjut(y/n)? ";
        cin >> pilih;
    }

    cout << "total = " << all << endl;

    return 0;
}