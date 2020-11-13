#include <iostream>

using namespace std;

int main()
{
    cout << "menampilkan sederet bilangan ganjil dari 10 sampai 30 kecuali 21 dan 27" << endl;
    cout << "=======================================================================" << endl << endl;

    for (int i = 10; i <= 30; i++)
    {
        if(i % 2 == 1 && i != 21 && i != 27)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}