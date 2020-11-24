#include <iostream>

using namespace std;

void inputArry(int * arry, int n)
{
    cout << "Input data" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai ke-" << i+1 << ": ";
        cin >> arry[i];
    }
    
}


void cetakNilaiMin(int min, int * arry, int n)
{
    cout << "\n\tCetak nilai dengan minimum " << min << endl;

    for (int i = 0; i < n; i++)
    {
        if (arry[i] >= min)
        {
            cout << "\t\t - " << arry[i] << endl;
        }
        
    }
    
}



int main()
{
    int n = 10;
    int arry[n];

    inputArry(arry, n);
    cetakNilaiMin(60, arry, n);

    return 0;
}