#include <iostream>

using namespace std;

int main()
{
    int stt = 2, i = 1;

    while (i <= 55)
    {
        cout << i << " ";
        i += stt;
        stt++;
    }

    cout << endl;
    
    return 0;
}
