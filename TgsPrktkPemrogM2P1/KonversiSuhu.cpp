#include <iostream>

using namespace std;

int main()
{
    double C, F, R, K;
    int selection;
    cout << "Program Konversi Suhu" << endl;
    cout << "1 Celcius ke Reamur" << endl;
    cout << "2 Reamur ke Fahrenheit" << endl;
    cout << "3 Fahrenheit ke Kelvin" << endl;
    cout << "Pilih nomor : ";
    cin >> selection;

    switch (selection)
    {
    case 1:
        cout << "Konversi suhu Celcius ke Reamur" << endl;
        cout << "Masukkan suhu dalam Celcius(derajat) = ";
        cin >> C;
        R = 4.0/5*C;
        cout << C << " (derajat) Celcius = " << R << " (derajat) Reamur" << endl;
        break;
    case 2:
        cout << "Konversi suhu Reamur ke Fahrenheit" << endl;
        cout << "Masukkan suhu dalam Reamur(derajat) = ";
        cin >> R;
        F = ((9.0/4)*R)+32;
        cout << R << " (derajat) Reamur = " << F << " (derajat) Fahrenheit" << endl;
        break;
    case 3:
        cout << "Konversi suhu Fahrenheit ke Kelvin" << endl;
        cout << "Masukkan suhu dalam Fahrenheit(derajat) = ";
        cin >> F;
        K = (5.0/9)*(F-32)+273.15; // ada yang K = (5.0/9)*(F-32)+273 jadi saya memilih yang terdetail
        cout << F << " (derajat) Fahrenheit = " << K << " (derajat) Kelvin" << endl;
        break;
    }

    return 0;
}
