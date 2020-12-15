#include <iostream>

using namespace std;

int main()
{
    int pilihan, durasi, tarif;
    int tarifPerKodwil[3] = {100, 200, 300};

    cout << "Masukkan kode wilayah yang dihubungi (1, 2, 3) = ";
    cin >> pilihan;
    
    if(pilihan <= 3 && pilihan >= 1)
    {
        cout << "Masukkan durasi pembicaraan telfon (detik) = ";
        cin >> durasi;
        tarif = tarifPerKodwil[pilihan - 1] * durasi;
        cout << "Tarif pembicaraan telfon tersebut adalah Rp " << tarif << endl;

    }else
    {
        cout << "INPUT ERROR" << endl;
    }

    return 0;
}