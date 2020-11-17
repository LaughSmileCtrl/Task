#include <iostream>

using namespace std;

int main()
{
    int tabel[4][6] = {{1, 1, 1, 1, 0, 0}, {1, 0, 1, 0, 0, 1}, {0, 1, 1, 0, 1, 1}, {0, 0, 0, 0, 1, 0}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << tabel[i][j] << " | ";
        }

        cout << endl;
        
    }
    

    return 0;
}