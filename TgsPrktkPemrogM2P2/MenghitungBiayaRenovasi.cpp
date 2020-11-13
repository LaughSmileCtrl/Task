#include <iostream>

using namespace std;

int main()
{
    int desktop, hargaDesktop, UPS, hargaUPS, Router, hargaRouter, kabelJar;
    int hargaKabelJar, mejaKursiCom, hargaMejaKursiCom, mejaKursiAs;
    int hargaMejaKursiAs, Jendela, hargaJendela, AC, hargaAC, proyektor, hargaProyektor, total;

    cout << "Program menghitung biaya renovasi total laboratorium computer" << endl;
    cout << "=============================================================" << endl << endl;
    cout << "Masukkan jumlah Desktop (buah) = ";
    cin >> desktop;
    cout << "Masukkan harga Desktop (rp/buah) = ";
    cin >> hargaDesktop;
    cout << "Masukkan jumlah UPS (buah) = ";
    cin >> UPS;
    cout << "Masukkan harga UPS (rp/buah) = ";
    cin >> hargaUPS;
    cout << "Masukkan jumlah Router (buah) = ";
    cin >> Router;
    cout << "Masukkan harga Router (rp/buah) = ";
    cin >> hargaRouter;
    cout << "Masukkan jumlah Kabel Jaringan (meter) = ";
    cin >> kabelJar;
    cout << "Masukkan harga Kabel Jaringan (rp/meter) = ";
    cin >> hargaKabelJar;
    cout << "Masukkan jumlah Meja dan Kursi Komputer (buah) = ";
    cin >> mejaKursiCom;
    cout << "Masukkan harga Meja dan Kursi Komputer (rp/buah) = ";
    cin >> hargaMejaKursiCom;
    cout << "Masukkan jumlah Meja dan Kursi Asisten (buah) = ";
    cin >> mejaKursiAs;
    cout << "Masukkan harga Meja dan Kursi Asisten (rp/buah) = ";
    cin >> hargaMejaKursiAs;
    cout << "Masukkan jumlah Jendela (buah) = ";
    cin >> Jendela;
    cout << "Masukkan harga Jendela (rp/buah) = ";
    cin >> hargaJendela;
    cout << "Masukkan jumlah AC (buah) = ";
    cin >> AC;
    cout << "Masukkan harga AC (rp/buah) = ";
    cin >> hargaAC;
    cout << "Masukkan jumlah Proyektor (buah) = ";
    cin >> proyektor;
    cout << "Masukkan harga Proyektor (rp/buah) = ";
    cin >> hargaProyektor;

    total = (desktop * hargaDesktop) + (UPS * hargaUPS) + (Router * hargaRouter) + (kabelJar * hargaKabelJar) + (mejaKursiCom * hargaMejaKursiCom)+(mejaKursiAs * hargaMejaKursiAs) + (Jendela * hargaJendela)+(AC * hargaAC) + (proyektor * hargaProyektor);
    cout << "Total biaya renovasi adalah " << total << endl;

    return 0;
}
