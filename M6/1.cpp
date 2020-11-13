#include <iostream>

using namespace std;

int main()
{
    cout << "Program menentukan diskon" << endl;
    cout << "=========================" << endl << endl;

    int a, b, c;
    float diskon = 0;
    bool stt = true;

    cout << "Masukkan Banyak Barang A = ";
    cin >> a;
    cout << "Masukkan Banyak Barang B = ";
    cin >> b;
    cout << "Masukkan Banyak Barang C = ";
    cin >> c;

    if (c >= 10 && a >= 3)
    {
        a -= 5;
        diskon += 20;
        stt = false;
    }

    if(a >= 10 && b >= 5) // a = 20 , b = 7, c = 12
    {
        diskon += 15;
    }else if (c >= 5 && stt)
    {
        diskon = 5;
    }else if (a >= 3 && stt)
    {
        diskon = 7;
    }
    
    cout << "\tBesar diskon yang di berikan = " << diskon <<"%" << endl;
    return 0;
}