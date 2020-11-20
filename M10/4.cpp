#include <iostream>

using namespace std;

int pilihJurusan(string namaJurusan[3])
{
    int jurusan;
    cout << "Pilihan Jurusan : " << endl;
    for (int  i = 0; i < 3; i++)
    {
        cout << i+1 << ". " << namaJurusan[i] << endl;
    }
    cout << "Masukkan nomor jurusan : ";
    cin >> jurusan;
    jurusan -= 1;

    return jurusan;
}

int pilihTahun()
{
    int tahun;
    cout << "Tahun yang tersedia : ";
    for (int i = 0; i < 4; i++)
    {
        cout << 1992 + i << " ";
    }
    cout << endl << "Masukkan Tahun : ";
    cin >> tahun;
    tahun -= 1992;
}

int main()
{
    int data[3][4] = {{35, 45, 80, 120}, {100, 110, 70, 101}, {10, 15, 20, 17}};
    string namaJurusan[] = {"Teknik Informatika", "Management Informatika", "Teknik Komputer"};

    int jurusan = pilihJurusan(namaJurusan);
    int tahun = pilihTahun();

    cout << "\n\n\tJumlah mahasiswa " << namaJurusan[jurusan] << " yang lulus tahun " << (tahun+1992);
    cout << " sebanyak " << data[jurusan][tahun] << endl;
    return 0;
}