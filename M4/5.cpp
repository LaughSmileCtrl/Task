#include <iostream>

using namespace std;

int main()
{
    cout << "menampilkan bilangan genap yang lebih kecil dari 25. Jika bertemu dengan angka 8 maka proses break";
    cout << "==================================================================================================" << endl << endl;
    
    for (int i = 1; i < 25; i++)
    {
        if( i % 2 == 0)
        {
            cout << i << " ";
        }

        if (i == 8)
        {
            break;
        }
        
    }

    cout << endl;

    return 0;
}