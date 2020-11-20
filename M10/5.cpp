#include <iostream>

using namespace std;

void inputValue(int * arry, int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Input element " << i+1 << " : ";
        cin >> arry[i];
    }
    
}

void printPosition(int f, int * arry, int &n)
{
    cout << "Position " << f << " in the array is : ";
    for (int i = 0; i < n; i++)
    {
        if(arry[i] == f)
        {
            cout << i+1 << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n = 10;
    int arry[n];

    inputValue(arry, n);

    printPosition(8, arry, n);

    return 0;
}