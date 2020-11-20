#include <iostream>

using namespace std;

void inputElementMatrix(int matrix[2][2], int &n)
{
    cout << "\n\t- - - - - - - - - - " << endl;
    cout << "\tInput Element Matrix" << endl;
    cout << "\t- - - - - - - - - - " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

}


void matrixAddition(int matrixA[2][2], int matrixB[2][2], int matrixC[2][2], int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
        
    }

}


void printMatrix(int matrixC[2][2], int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrixC[i][j] << " ";
        }

        cout << endl;
        
    }
    
}


int main()
{
    int n = 2;
    int matrixA[2][2];
    int matrixB[2][2];
    int matrixC[2][2];

    inputElementMatrix(matrixA, n);
    inputElementMatrix(matrixB, n);

    matrixAddition(matrixA, matrixB, matrixC, n);

    cout << "\n\n\tResult" << endl;
    cout << "\t======" << endl;
    printMatrix(matrixC, n);

    return 0;
}