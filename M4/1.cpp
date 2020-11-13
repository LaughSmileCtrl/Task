#include <iostream>

using namespace std;

int main()
{
    cout << "program untuk perhitungan gaji pegawai" << endl;
    cout << "======================================" << endl <<endl;

    int gajiPokok[] = {1000000, 850000, 750000, 500000};
    float tunjangan[] = {0.5, 0.3, 0.2, 0.1};
    int upahLembur[] = {20000, 15000, 12000, 10000};
    float ppn[] = {0.05, 0.03, 0.02, 0.01};
    int golongan, gajiBersih, lamaBekerja;
    char menikah;

    cout << "Masukkan Golongan Pegawai (1-4) = ";
    cin >> golongan;

    if(golongan >= 1 && golongan <= 4)
    {
        cout << "Masukkan Lama Bekerja (jam)= ";
        cin >> lamaBekerja;
        cout << "Apakah sudah menikah(y/n)? ";
        cin >> menikah;

        if(lamaBekerja > 150)
        {
            gajiBersih = ((lamaBekerja - 150) * upahLembur[golongan - 1]) + gajiPokok[golongan - 1];
        }
        else
        {
            gajiBersih = gajiPokok[golongan - 1];
        }

        if (menikah == 'y')
        {
            // gaji tambah tunjangan
            gajiBersih += (tunjangan[golongan - 1]) * gajiPokok[golongan - 1]; 
            cout << endl << "Pegawai Tersebut Mendapatkan Tunjangan karena telah menikah" << endl << endl;
        }

        gajiBersih -= (ppn[golongan - 1]) * gajiBersih;

        cout << "Gaji Pokok Pegawai Tersebut adalah Rp " << gajiPokok[golongan - 1] << endl;
        printf("Gaji Pegawai Tersebut adalah Rp %-,10d \n", gajiBersih);
        
    }else
    {
        cout << "Input Error" << endl;
    }

    return 0;
}
