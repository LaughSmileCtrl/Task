#include <iostream>

using namespace std;

void inputElement(int * arry, int &n)
{
    cout << "\n\tInput Element Array" << endl;
    cout << "\t===================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Input integer " << i+1 << " : ";
        cin >> arry[i];
    }
    
}


int findMaxValue(int * arry, int &n)
{
    int max;

    for (int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            max = arry[i];
        }
        else
        {
            max = (arry[i] > max) ? arry[i] : max;
        }
    }
    
    return max;
}

int main()
{
    int n;

    cout << "Masukkan Banyak Element : ";
    cin >> n;

    int arry[n];

    inputElement(arry, n);

    cout << "\n\t Maximum : " << findMaxValue(arry, n) << endl;

    return 0;
}