#include <iostream>

using namespace std;

int main()
{
    cout << "Menentukan bilangan terbesar dan terkecil dari 4 buah bilangan" << endl;
    cout << "==============================================================" << endl << endl;
    int userInput[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Masukkan Bilangan ke " << i+1 << " = ";
        cin >> userInput[i]; 
    }

    // urutkan array
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            if(userInput[i] > userInput[j])
            {
                int tmp = userInput[i];
                userInput[i] = userInput[j];
                userInput[j] = tmp;
            }
        }
        
    }

    cout << "Bilangan terbesar adalah = " << userInput[3] << endl;
    cout << "Bilangan terkecil adalah = " << userInput[0] << endl;

    return 0;
}