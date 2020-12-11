#include <iostream>
#include <cstring>

using namespace std;

struct DataMahasiswa
{
    char namaMhs[51];
    float quis;
    float uts;
    float uas;
};

void scanData(DataMahasiswa * mhs, int n)
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
    }
}

void printData(DataMahasiswa * mhs, int n)
{
    cout << "\n\n Menampilkan data yang telah di inputkan\n" << endl;
    
    printf("%3s | %15s | %4s | %4s | %4s |\n", "No", "Nama Mahasiswa", "Quis", "UTS", "UAS");
    for (int i = 0; i < n; i++)
    {
        printf("%3d | %15s | %4.2f | %4.2f | %4.2f |\n", i+1, mhs[i].namaMhs, mhs[i].quis, mhs[i].uts, mhs[i].uas);
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

    scanData(mhs, n);
    printData(mhs, n);


    return 0;
}