#include <iostream>
#include <cstring>

using namespace std;

struct DataMahasiswa
{
    char namaMhs[51];
    float quis;
    float uts;
    float uas;
    float nilaiAkhir;
    char ip;
};

void inputData(DataMahasiswa * mhs, int n)
{
    cout << "Menginputkan data mahasiswa\n" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan data ke-" << i+1 << endl;
        cin.ignore();
        printf("Masukkan %-10s : ", "Nama");
        fgets(mhs[i].namaMhs, 50, stdin);
        strtok(mhs[i].namaMhs, "\n");
        printf("Masukkan %-10s : ", "Nilai QUIS");
        cin >> mhs[i].quis;
        printf("Masukkan %-10s : ", "Nilai UTS");
        cin >> mhs[i].uts;
        printf("Masukkan %-10s : ", "Nilai UAS");
        cin >> mhs[i].uas;

        mhs[i].nilaiAkhir = (mhs[i].quis*0.2)+(mhs[i].uts*0.3)+(0.5*mhs[i].uas);

        if( mhs[i].nilaiAkhir >=80)
        {
            mhs[i].ip = 'A';
        }
        else if( mhs[i].nilaiAkhir >=60)
        {
            mhs[i].ip = 'B';
        }
        else if( mhs[i].nilaiAkhir >=40)
        {
            mhs[i].ip = 'C';
        }
        else if( mhs[i].nilaiAkhir >=20)
        {
            mhs[i].ip = 'D';
        }
        else
        {
            mhs[i].ip = 'E';
        }
    }
}

void printData(DataMahasiswa * mhs, int n)
{
    cout << "\n\n Menampilkan data yang telah di inputkan\n" << endl;
    
    printf("%3s | %15s | %5s | %5s | %5s | %11s | %2s |\n", "No", "Nama Mahasiswa", "Quis", "UTS", "UAS", "Nilai Akhir", "IP");
    for (int i = 0; i < n; i++)
    {
        printf("%3d | %15s | %5.1f | %5.1f | %5.1f | %11.1f | %2c |\n", i+1, mhs[i].namaMhs, mhs[i].quis, mhs[i].uts, mhs[i].uas, mhs[i].nilaiAkhir, mhs[i].ip);
    }
    
}


int main()
{
    cout << "\tData Algoritma dan Pemrograman" << endl;
    cout << "\t==============================" << endl << endl;

    int n;

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    DataMahasiswa mhs[n];

    inputData(mhs, n);
    printData(mhs, n);


    return 0;
}