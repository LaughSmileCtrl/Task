#include <iostream>
#include <cstring>

using namespace std;

struct DataPegawai
{
    char nomorPegawai[10];
    char nama[51];
    char alamat[100];
    char jabatan[15];
    int gaji;
    char jenisKelamin[11];
};

void scanData(DataPegawai * pegawai, int n)
{
    cout << "Menginputkan data pegawai\n" << endl;

    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan data ke-" << i+1 << endl;
        printf("Masukkan %-13s : ", "Nomor Pegawai");
        fgets(pegawai[i].nomorPegawai, 9, stdin);
        strtok(pegawai[i].nomorPegawai, "\n");

        printf("Masukkan %-13s : ", "Nama");
        fgets(pegawai[i].nama, 50, stdin);
        strtok(pegawai[i].nama, "\n");
        
        printf("Masukkan %-13s : ", "Alamat");
        fgets(pegawai[i].alamat, 100, stdin);
        strtok(pegawai[i].alamat, "\n");
                
        printf("Masukkan %-13s : ", "Jabatan");
        fgets(pegawai[i].jabatan, 15, stdin);
        strtok(pegawai[i].jabatan, "\n");

                
        printf("Masukkan %-13s : ", "Gaji");
        scanf("%d", &pegawai[i].gaji);
        getchar();
                
        printf("Masukkan %-13s : ", "Jenis Kelamin");
        fgets(pegawai[i].jenisKelamin, 15, stdin);
        strtok(pegawai[i].jenisKelamin, "\n");
    }
}


void printData(DataPegawai * pegawai, int n)
{
    cout << "\n\n Menampilkan data yang telah di inputkan\n" << endl;

    for (int i = 0; i < n; i++)
    {
        printf("Data ke-%d\n", i+1);
        printf("%-13s : %s\n", "Nomor Pegawai", pegawai[i].nomorPegawai);
        printf("%-13s : %s\n", "Nama", pegawai[i].nama);
        printf("%-13s : %s\n", "Alamat", pegawai[i].alamat);
        printf("%-13s : %s\n", "Jabatan", pegawai[i].jabatan);
        printf("%-13s : %d\n", "Gaji", pegawai[i].gaji);
        printf("%-13s : %s\n", "Jenis Kelamin", pegawai[i].jenisKelamin);
        printf("------------------------------------\n");

    }
    
}


int main()
{
    cout << "\tprogram untuk menampilkan sejumlah data pegawai" << endl;
    cout << "\t===============================================" << endl << endl;

    int n;

    cout << "Masukkan banyak pegawai : ";
    cin >> n;

    DataPegawai pegawai[n];

    scanData(pegawai, n);
    printData(pegawai, n);


    return 0;
}