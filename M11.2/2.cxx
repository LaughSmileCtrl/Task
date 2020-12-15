#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Menampilkan deret fibonaci" << endl;
    cout << "==========================" << endl << endl;
    cout << "Masukkan sebuah integer : ";
    cin >> n;
    int tmp[n+1];

    for (int i = 0; i <= n; i++)
    {
        if(i == 0)
        {
            tmp[i] = 0;
        }
        else if (i == 1)
        {
            tmp[i] = 1;
            cout << tmp[i] << " ";
        }
        else
        {
            tmp[i] = tmp[i-1] + tmp[i-2];
            cout << tmp[i] << " ";
        }
    }

    cout << endl;

    return 0;
}