#include <iostream>

using namespace std;

int main()
{

    cout << "Program untuk menampilkan bilanganprima dari sebuah deret bilangan" << endl;
    cout << "==================================================================" << endl << endl;

    int bil1, bil2;

    cout << "masukkan bilangan awal = ";
    cin >> bil1;
    cout << "masukkan bilangan akhir = ";
    cin >> bil2;

    for (int i = bil1; i <= bil2; i++)
    {
        bool status = true;

        if(i <= 1)
        {
            status = false;

        }else
        {
            for (int j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    status = false;
                    break;
                }
            }
        }

        if (status)
        {
            cout << i << " ";
        }
        
    }
    
    cout << endl;

    return 0;
}