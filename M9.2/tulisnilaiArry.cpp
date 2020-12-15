#include <iostream>

using namespace std;

int main()
{
    int a[3][3] = {{1,8}, {2, 4, 6}, {5}};

    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(a[i][j] == 0)
            {
                continue;
            }

            cout << a[i][j] << " ";
        }

        cout << endl;
        
    }

    cout << endl;

    return 0;
}