#include <iostream>

using namespace std;

int main()
{
    float datar4, panjang3, tinggi3, tinggi1, panjang1, hasil;

    cout << "Menghitung Luas Sebidang Tanah berbentuk 2 trapesium" << endl;
    cout << "=====================================================" << endl << endl;
    cout << "Masukkan panjang sisi datar segitiga 4 (meter)= ";
    cin >> datar4;
    cout << "Masukkan panjang persegi panjang 3 (meter)= ";
    cin >> panjang3;
    cout << "Masukkan tinggi persegi panjang 3 (meter)= ";
    cin >> tinggi3;
    cout << "Masukkan tinggi persegi panjang 1 (meter)= ";
    cin >> tinggi1;
    cout << "Masukkan panjang persegi panjang 1 (meter)= ";
    cin >> panjang1;

    hasil = ((panjang3 + datar4 + panjang3) * tinggi3)/2 + ((panjang3 + panjang1) * tinggi1)/2;
    cout << "Luas Bidang tanah = "<< hasil << " meter persegi" << endl;
    return 0;
}
