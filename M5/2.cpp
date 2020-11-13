#include <iostream>

using namespace std;

int main()
{
    cout << "konversikan total detik menjadi hari, jam, menit" << endl;
    cout << "================================================" << endl << endl;

    int detik, menit = 0, jam = 0, hari = 0;

    cout << "Masukkan detik = ";
    cin >> detik;

    if(detik >= 60)
    {
        menit = detik/60;
        detik %= 60;

        if(menit >= 60)
        {
            jam = menit/60;
            menit %= 60;
            
            if(jam >= 24)
            {
                hari = jam / 24;
                jam %= 24;
            }
        }
    }

    cout << endl << "\t Hasil konversi = " << hari << " hari " << jam << " jam " << menit << " menit " << detik << " detik" << endl;

    return 0;
}