#include <iostream>

using namespace std;

float rp2usd(float &rupiah)
{
    return (rupiah/9600);
}

int main()
{
    float rupiah;
    cout << "program konversi mata uang rupiah ke dollar" << endl;
    cout << "===========================================" << endl << endl;
    cout << "Masukkan rupiah = ";
    cin >> rupiah;
    cout << "\n\n\tRp." << rupiah << " = " << rp2usd(rupiah) << " USD" << endl;

    return 0;
}