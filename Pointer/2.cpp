#include <iostream>

using namespace std;

void timesBy3(int *aInt, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(aInt + i) *= 3;
    }
    
}

int main()
{
    int aInt[4];

    cout << "Masukkan 4 buah integer yang di pisahkan oleh spasi" << endl;
    
    for (int i = 0; i < 4; i++)
    {
        cin >> aInt[i];
    }

    timesBy3(aInt, 4);

    cout << "Hasil : ";
    for(auto a : aInt)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}