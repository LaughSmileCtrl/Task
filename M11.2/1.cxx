#include <iostream>

using namespace std;

const int MAX = 6;

void inputMatrix(char name, int matrix[][MAX], int &row, int &col)
{
    cout << "\nMenginputkan Matriks" << name << endl;
    cout << "Baris matriks " << name << " maks(" << MAX << "): ";
    cin >> row;
    cout << "Kolom matriks " << name << " maks(" << MAX << "): ";
    cin >> col;
    cout << "Inputkan Matriks " << name << " " << row << "x" << col << endl;

    for(int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin  >> matrix[i][j];
        }
    }

    cout << endl;
}

void printMatrix(char name,int matrix[][MAX], int &row, int &col)
{
    cout << "\n\tMatriks " << name << endl;

    for (int i = 0; i < row; i++)
    {
        cout << "\t";
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void penjumlahanMatrix(char nameA , int matrixA[][MAX],int &rowA, int &colA, char nameB, int matrixB[][MAX],int &rowB, int &colB)
{
    if(colA != colB || rowA != rowB)
    {
        cout << "Baris/kolom kedua matrik tidak sama" << endl;
    }else
    {
        cout << "\n\tHasil Penjumlahan Matriks " << nameA << " dan " << " Matriks " << nameB << endl;

        for (int i = 0; i < rowA; i++)
        {
            cout << "\t";
            for (int j = 0; j < colA; j++)
            {
                cout << matrixA[i][j] + matrixB[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void penguranganMatrix(char nameA , int matrixA[][MAX],int &rowA, int &colA, char nameB, int matrixB[][MAX],int &rowB, int &colB)
{
    if(colA != colB || rowA != rowB)
    {
        cout << "Baris/kolom kedua matrik tidak sama" << endl;
    }else
    {
        cout << "\n\tHasil Pengurangan Matriks " << nameA << " dan " << " Matriks " << nameB << endl;

        for (int i = 0; i < rowA; i++)
        {
            cout << "\t";
            for (int j = 0; j < colA; j++)
            {
                cout << matrixA[i][j] - matrixB[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void perkalianMatrix(char nameA , int matrixA[][MAX],int &rowA, int &colA, char nameB, int matrixB[][MAX],int &rowB, int &colB)
{
    if((rowA != colB || colA != rowB))
    {
        cout << "baris dan kolom kedua matriks tisak sama" << endl;
    }
    else
    {
        int result[MAX][MAX];

        // set default element result 
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colB; j++)
            {
                result[i][j] = 0;
            }
        }
        
        for(int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colA; j++)
            {
                for (int k = 0; k < rowA; k++)
                {
                    result[k][i] += matrixA[k][j]*matrixB[j][i];

                }
            }
        }

        cout << "\n\tHasil Perkalian Matriks " << nameA << " dan " << " Matriks " << nameB << endl;
        printMatrix('C', result, rowA, colB);
    }
    cout << endl;
}

void transpose(char name,int matrix[][MAX], int &row, int &col)
{
    cout << "\n\tTranspose Matriks " << name << endl;

    for(int i = 0; i < col; i++)
    {
        cout << "\t";
        for (int j = 0; j < row; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void diagonal(char name,int matrix[][MAX], int &row, int &col)
{
    cout << "\n\tDiagonal Matriks " << name << endl;
    for(int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if(i == j)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }
    cout << endl << endl;
}

void nilaiMaks(char name,int matrix[][MAX], int &row, int &col)
{
    int maks;
    cout << "\n\tNilai Maksimal " << name << " : ";
   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if((i == 0 && j == 0) || matrix[i][j] > maks)
            {
                maks = matrix[i][j];
            }
        }
    }
    cout << maks << endl << endl;
}

void nilaiMin(char name,int matrix[][MAX], int &row, int &col)
{
    int min;
    cout << "\n\tNilai Minimal " << name << " : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if((i == 0 && j == 0) || matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }
    cout << min << endl << endl;
}


int main()
{
    int rowA, colA, rowB, colB;
    int matrixA[MAX][MAX];
    int matrixB[MAX][MAX];

    cout << "Program Operasi Matrix" << endl;
    cout << "======================" << endl << endl;

    inputMatrix('A',matrixA, rowA, colA);
    inputMatrix('B',matrixB, rowB, colB);
    
    printMatrix('A',matrixA, rowA, colA);
    printMatrix('B',matrixB, rowB, colB);

    penjumlahanMatrix('A', matrixA, rowA, colA, 'B', matrixB, rowB, colB);
    penguranganMatrix('A', matrixA, rowA, colA, 'B', matrixB, rowB, colB);
    perkalianMatrix('A', matrixA, rowA, colA, 'B', matrixB, rowB, colB);
    transpose('A',matrixA, rowA, colA);
    transpose('B',matrixB, rowB, colB);
    diagonal('A',matrixA, rowA, colA);
    diagonal('B',matrixB, rowB, colB);
    nilaiMaks('A',matrixA, rowA, colA);
    nilaiMin('A',matrixA, rowA, colA);
    nilaiMaks('B',matrixB, rowB, colB);
    nilaiMin('B',matrixB, rowB, colB);

    
    return 0;
}