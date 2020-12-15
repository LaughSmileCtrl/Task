#include <iostream>

using namespace std;

float waktuTempuh(float &kecepatan , float &jarak)
{
    return (jarak/kecepatan);
}

int main()
{
    float waktu, kecepatan, jarak;

    cout << "menghitung waktu yang ditempuh" <<  endl;
    cout << "==============================" << endl <<endl;
    cout << "Masukkan kecepatan(km/jam) = ";
    cin >> kecepatan;
    cout << "Masukkan jarak(km) = ";
    cin >> jarak;

    waktu = waktuTempuh(kecepatan, jarak);
    cout << "\twaktu yang ditempuh = " << waktu << " jam" << endl;

    return 0;
}