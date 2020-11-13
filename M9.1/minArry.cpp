#include <iostream>

using namespace std;

int main()
{
    int min;
    int TabInt[10];
    int n = 10;

    for (int i = 0; i <n ; i++)
    {
        cout << "masukkan angka ke-" << i+1 << " : ";
        cin >> TabInt[i];
    }

    min = TabInt[0];

    for(int i = 0; i < n; i++)
    {
        if(TabInt[i] < min)
        {
            min = TabInt[i];
        }
    }

    cout << "\tNilai minimum: " << min << endl;

    return 0;
}
