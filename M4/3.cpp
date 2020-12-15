#include <iostream>

using namespace std;

int main()
{
    cout << "menampilkan bilangan ganjil kelipatan 3 kecuali kelipatan 5" << endl;
    cout << "===========================================================" << endl << endl;

    int bil1;

    cout << "masukkan sebuah bilangan bulat = ";
    cin >> bil1;

    if (bil1 >= 3)
    {
        for (int i = 3; i <= bil1; i+=3)     
        {
            if(i % 2 == 1 && i % 5 != 0) 
            {
                cout << i <<" ";
            }
        }

        cout << endl;
        
    }

    return 0;
}