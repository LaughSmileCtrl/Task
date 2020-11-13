#include <iostream>

using namespace std;

int main()
{
    int pTanah, lTanah, pRumah, lRumah, hasil;

    cout << "Menghitung luas Halaman yang harus ditanami rumput" << endl;
    cout << "==================================================" << endl << endl;
    cout << "Masukkan panjang tanah (meter) = ";
    cin >> pTanah;
    cout << "Masukkan lebar tanah (meter) = ";
    cin >> lTanah;
    cout << "Masukkan panjang rumah (meter) = ";
    cin >> pRumah;
    cout << "Masukkan lebar rumah (meter) = ";
    cin >> lRumah;

    hasil = (pTanah * lTanah) - (pRumah * lRumah);
    cout << "Luas halaman yang harus ditanami rumput adalah " << hasil << " meterpersegi" << endl;

    return 0;
}
