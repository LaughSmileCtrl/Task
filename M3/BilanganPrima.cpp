#include <iostream>

using namespace std;

int main()
{
    int bilangan;
    bool status = true;

    cout << "Masukkan sebuah bilangan : ";
    cin >> bilangan;

    if(bilangan == 1)
    {
        cout << "Bilangan tersebut BUKAN prima" << endl;
        status = false;

    }else
    {
        for (int i = 2; i < bilangan; i++)
        {
            if(bilangan % i == 0)
            {
                status = false;
                cout << "Bilangan tersebut BUKAN prima" << endl;
                break;
            }
        }
    }

    if(bilangan == 2 || status)
    {
        cout << "Bilangan tersebut PRIMA" << endl;
    }
    
    return 0;
}