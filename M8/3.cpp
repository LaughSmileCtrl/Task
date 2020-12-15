#include <iostream>

using namespace std;

float terbesar(float bil, float tmpTerbesar)
{
    if(bil > tmpTerbesar)
    {
        return bil;
    }
    else
    {
        return tmpTerbesar;
    }
}

float terkecil(float bil, float tmpTerkecil)
{
    if(bil < tmpTerkecil)
    {
        return bil;
    }
    else
    {
        return tmpTerkecil;
    }
}

int main()
{
    float data, tmpKecil, tmpBesar;
    cout << "Mencari nilai terbesar dan terkecil" << endl;
    cout << "===================================" << endl << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "masukkan bilangan " << i+1 << " = ";
        cin >> data;

        if(i > 0)
        {
            tmpBesar = terbesar(data, tmpBesar);
            tmpKecil = terkecil(data, tmpKecil);
        }else
        {
            tmpBesar = data;
            tmpKecil = data;
        }
        
    }
        
    cout << "\n\n\tNilai terkecil = " << tmpKecil << endl;
    cout << "\tNilai terbesar = " << tmpKecil << endl;

    return 0;
}