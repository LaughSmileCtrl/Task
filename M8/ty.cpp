#include <iostream>

using namespace std;

long i, n, terbesar, terkecil;
void bilangan(long bil)
{
    for (i = 0; i < n; i++)
    {
        cout << "\nMasukkan bilangan ke " << i + 1 << " = ";
        cin >> bil;

        if (i == 1)
        {
            terbesar = bil;
            terkecil = bil;
        }
        else if (terkecil > bil)
        {
            terkecil = bil;
        }
        else if (terbesar < bil)
        {
            terbesar = bil;
        }
    }
}

void tmplkn(long terbesar, long terkecil)
{
    cout << "\nBilangan Terbesar = " << terbesar << endl;
    cout << "Bilangan Terkecil = " << terkecil << endl;
}

int main()
{

    long bil, terbesar, terkecil, i, n;

    cout << "\n===========================================" << endl;
    cout << " Menentukan Bilangan Terbesar dan Terkecil " << endl;
    cout << "===========================================" << endl;
    cout << endl;
    cout << "Masukkan banyaknya bilangan : ";
    cin >> n;

    tmplkn(terbesar, terkecil);
    bilangan(bil);

    return 0;
}