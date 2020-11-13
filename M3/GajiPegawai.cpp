#include <iostream>

using namespace std;

int main()
{
    int pilihan;
    float jam;
    int gaji;
    int golPerJam[5] = {5000, 6000, 7000, 8000, 9000};

    cout << "Masukkan golongan pegawai (1, 2, 3 ,4 ,5) = ";
    cin >> pilihan;

    if(pilihan <= 5 && pilihan >= 1)
    {
        cout << "Masukkan lama bekerja dalam satu bulan (jam) = ";
        cin >> jam;
        
        if(jam > 400)
        {
            gaji = golPerJam[pilihan - 1] * 400;
            gaji += 1.2 * golPerJam[pilihan - 1] * (jam - 400);
            cout << "Gaji total pegawai golongan " << pilihan << " tersebut perbulan adalah Rp " << gaji << endl;
        }
        else
        {
            gaji = golPerJam[pilihan - 1] * jam;
            cout << "Gaji total pegawai golongan " << pilihan << " tersebut perbulan adalah Rp " << gaji << endl;
        }
        
    }else
    {
        cout << "INPUT ERROR" << endl;
    }

    return 0;
}