#include <iostream>

using namespace std;

void inputData(int data[][2], int n)
{
    for (int i = 0; i < n; i++)
    {
        data[i][0] = i+1;
        data[i][1] = ((i+1) % 20 == 0) ? ((i+1) * 60) : ((i+1) * 80);
    }
    
}

void tampilkanTabel(int data[][2], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" - %4d lembar = Rp.%5d\n", data[i][0], data[i][1]);
    }
    
}

int main()
{
    int n = 100;
    int data[n][2];

    inputData(data, n);

    tampilkanTabel(data, n);

    return 0;
}