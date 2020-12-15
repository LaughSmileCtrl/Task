#include <iostream>

using namespace std;

double kelilingLingkaran(double &jari)
{
    return ((44*jari)/7);
}

double luasLingkaran(double &jari)
{
    return ((22*jari*jari)/7);
}

double luasSelimut(double &tinggi, double &jari)
{
    return (tinggi * kelilingLingkaran(jari));
}

double luasPermukaan(double &tinggi, double &jari)
{
    return luasSelimut(tinggi, jari) + 2 * luasLingkaran(jari);
}

double volumeTabung(double &tinggi, double &jari)
{
    return luasLingkaran(jari) * tinggi;
}

int main()
{
    double jari, tinggi;

    cout << "Program menghitung luas permukaan, selimut, volume tabung" << endl;
    cout << "=========================================================" << endl << endl;
    cout << "Masukkan jari-jari alas (cm) \t= ";
    cin >> jari;
    cout << "Masukkan tinggi tabung (cm) \t= ";
    cin >> tinggi;
    cout << "\n\n\tLuas permukaan \t= " << luasPermukaan(tinggi, jari) << " cm^2" << endl;
    cout << "\tLuas selimut \t= " << luasSelimut(tinggi, jari) << " cm^2" << endl;
    cout << "\tVolume tabung \t= " << volumeTabung(tinggi, jari) << " cm^3" << endl;
    

    return 0;
}