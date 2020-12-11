#include <iostream>
#include <cstring>

using namespace std;

struct Barang
{
    char kodeBarang[20];
    char namaBarang[20];
    int hargaBarang;
    int jumlahBarang;
};

void scanData(Barang * barang, int n)
{
    cout << "Menginputkan data barang\n" << endl;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan data ke-" << i+1 << endl;
        printf("Masukkan %-13s : ", "Kode Barang");
        fgets(barang[i].kodeBarang, 20, stdin);
        strtok(barang[i].kodeBarang, "\n");

        printf("Masukkan %-13s : ", "Nama Barang");
        fgets(barang[i].namaBarang, 20, stdin);
        strtok(barang[i].namaBarang, "\n");

        printf("Masukkan %-13s : ", "Harga Barang");
        scanf("%d", &barang[i].hargaBarang);

        printf("Masukkan %-13s : ", "Jumlah Barang");
        scanf("%d", &barang[i].jumlahBarang);
        getchar();
    }
    
}

void printJumlahBarang(Barang * barang, int n)
{
    cout << "\nTampilkan Jumlah Barang" << endl;

    printf("%3s | %20s | %6s |\n", "No", "Nama Barang", "Jumlah");
    for (int i = 0; i < n; i++)
    {
        printf("%3d | %20s | %6d |\n", i+1, barang[i].namaBarang, barang[i].jumlahBarang);
    }

    cout << endl;
    
}

void hargaRataRataBarang(Barang * barang, int n)
{
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        result += barang[i].hargaBarang;
    }

    cout << "Harga Rata-rata Barang " << result/n << endl;
    
}


int main()
{
    cout << "\tprogram pencatatan barang pada swalayan" << endl;
    cout << "\t=======================================" << endl << endl;

    int n;
    

    do {
        cout << "Masukkan banyak barang (maks 50): ";
        cin >> n;
    } while(n < 1 || n > 50);
    
    Barang barang[n];
    scanData(barang, n);
    printJumlahBarang(barang, n);
    hargaRataRataBarang(barang, n);
    return 0;
}