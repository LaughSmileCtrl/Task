#include <iostream>

using namespace std;

void inputValue(char arry[])
{
    for (int i = 0; i < 20; i++)
    {
        cin >> arry[i];
    }
    
}

void tampilkanIndeksGanjil(char arry[])
{
    cout << "Hasil : " << endl;
    cout << "--------" << endl;
    
    for (int i = 0; i < 20; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }

        cout << arry[i] << endl;
    }
    
}

int main()
{
    char arry[20];
    inputValue(arry);
    tampilkanIndeksGanjil(arry);

    return 0;
}