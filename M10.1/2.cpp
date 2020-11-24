#include <iostream>

using namespace std;

void fillArray(int c[][2], int to)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = to;
        }
    }
}


void kalikanmatrix(int a[2][3], int b[3][2], int c[2][2])
{
    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                c[k][i] += a[k][j]*b[j][i];

            }
        }
    }
}

void printArray(int c[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int a[][3] = {
                    {2, 3, 6}, 
                    {4, 7, 8}
                };

    int b[][2] = {
                    {3, 5}, 
                    {2, 4},
                    {8, 6}
                };

    int c[2][2];

    fillArray(c, 0);
    
    kalikanmatrix(a, b, c);

    printArray(c);

    return 0;
}