#include <iostream>

using namespace std;

int main()
{
    cout << "\n  P  |  Q  |P OR Q|P AND Q|NOT P|P XOR Q|" << endl;
    cout << "-----|-----|------|-------|-----|-------|" << endl;
    for (int p = 1; p >= 0; p--)
    {
        for (int q = 1; q >= 0; q--)
        {
            cout << "  " << p << "  |  " << q << "  |   " << (p || q) << "  |   " << (p && q) << "   |  " << (!p) << "  |   " << (p^q) << "   |" << endl;
        }
        
    }

    cout << endl;
    

    return 0;
}