#include <iostream>

using namespace std;

int main()
{
    char pilihan;

    cout << "Program menghitung luas Bidang datar pilihan" << endl;
    cout << "============================================" << endl << endl;
    cout << "A Jajarangenjang" << endl;
    cout << "B Persegi Panjang" << endl;
    cout << "C Bujur Sangkar" << endl;
    cout << "D Lingkaran" << endl;
    cout << "E Segitiga" << endl;
    cout << "F Trapesium" << endl << endl;
    cout << "Pilih salah satu option diatas : ";
    cin >> pilihan;

    switch (pilihan)
    {
        case 'A':
        {
            float alas, tinggi;
            cout << "   Masukkan alas   (m): ";
            cin >> alas;
            cout << "   Masukkan tinggi (m): ";
            cin >> tinggi;
            cout << "Luas Jajarangenjang tersebut adalah " << alas * tinggi << " m^2" << endl;
            break;
        }
        case 'B':
        {
            float alas, tinggi;
            cout << "   Masukkan alas persegi panjang   (m): ";
            cin >> alas;
            cout << "   Masukkan tinggi persegi panjang (m): ";
            cin >> tinggi;
            cout << "Luas persegi panjang tersebut adalah " << alas * tinggi << " m^2" << endl;
            break;
        }
        case 'C':
        {
            float sisi;
            cout << "   Masukkan sisi persegi   (m): ";
            cin >> sisi;
            cout << "Luas persegi tersebut adalah " << sisi * sisi << " m^2" << endl;
            break;
        }
        case 'D':
        {
            float jari;
            cout << "   Masukkan jari-jari lingkaran   (m): ";
            cin >> jari;
            cout << "Luas lingkaran tersebut adalah " << 22/7.0 * jari * jari << " m^2" << endl;
            break;
        }
        case 'E':
        {
            float alas, tinggi;
            cout << "   Masukkan alas segitiga   (m): ";
            cin >> alas;
            cout << "   Masukkan tinggi segitiga (m): ";
            cin >> tinggi;
            cout << "Luas segitiga tersebut adalah " << (alas * tinggi)/2 << " m^2" << endl;
            break;
        }
        case 'F':
        {
            float sisiSejajar1, sisiSejajar2, tinggi;
            cout << "   Masukkan sisi sejajar 1 trapesium   (m): ";
            cin >> sisiSejajar1;
            cout << "   Masukkan sisi sejajar 2 trapesium (m): ";
            cin >> sisiSejajar1;
            cout << "   Masukkan tinggi trapesium (m): ";
            cin >> tinggi;
            cout << "Luas trapesium tersebut adalah " << (sisiSejajar1+sisiSejajar2)/2* tinggi << " m^2" << endl;
            break;
        }    
        default:
            cout << "INPUT ERROR!!" << endl;
            break;
    }

    return 0;
}