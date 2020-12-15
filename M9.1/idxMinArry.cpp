#include <iostream>

using namespace std;

int main()
{
    int min;
    int TabInt[10];
    int n = 10;

    for (int i = 0; i < n ; i++)
    {
        cout << "masukkan angka ke-" << i+1 << " : ";
        cin >> TabInt[i];
    }

    min = 0;
    
    for (int i = 0; i < n; i++)
    {
        if(TabInt[i] < TabInt[min])
        {
            min = i;
        }
    }
    


    cout << "\tIndex Nilai minimum adalah index: " << min << endl;
    

    return 0;
}
