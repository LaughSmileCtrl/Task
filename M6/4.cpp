#include <iostream>

using namespace std;

int main()
{
    int bil;

    cout << "Masukkan Bilangan Bulat = "; 
    cin >> bil;
    
    for (int i = 1; i <= bil; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}