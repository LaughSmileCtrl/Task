#include <iostream>
#include <vector>

using namespace std;

const int MAX_COLUMN = 10;

void inputElementMatrix(int arry[][MAX_COLUMN], int row,int column)
{
    cout << "\n\tInput matrix " << row << "x" << column << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arry[i][j];
        }
        
    }
    
}
void printMatrixMultiply(int arry[][MAX_COLUMN],int &row,int &column,int n = 1)
{
    cout << "\n\n\tprint " << n << " x matrix " << row << "x" << column << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arry[i][j]*n << " ";
        }

        cout << endl;
    }

}

int main()
{
    int row, column;

    cout << "How much row of matrix? ";
    cin >> row;
    cout << "How much column of matrix? ";
    cin >> column;

    int arry[MAX_COLUMN][MAX_COLUMN];
    inputElementMatrix(arry, row, column);


    printMatrixMultiply(arry, row, column, 5);

    return 0;
}