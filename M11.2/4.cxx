#include <iostream>

using namespace std;

const int MAX_MATKUL = 8;
const int MAX_MHS = 15;

int main()
{
    int matkul, mhs;

    cout << "Masukkan banyak mahasiswa (MAKS 15 Orang) : ";
    cin >> mhs;
    cout << "Masukkan banyak mata kuliah(MAKS 8 Matkul : ";
    cin >> matkul;

    int data[mhs][matkul];
    int nMhs[mhs];
    int nMatkul[matkul];

    cout << "Mhs|  Matkul ke" << endl;
    cout << "Ke |";
    
    for (int i = 0; i < matkul; i++)
    {
        cout << " " << i+1 << " | ";
    }
    cout << endl;

    for (int i = 0; i < mhs; i++)
    {
        printf("%3d|",i+1);
        nMhs[i] = 0;
        for (int j = 0; j < matkul; j++)
        {
            cin >> data[i][j];
            nMatkul[j] = 0;
        }
    }

    for (int i = 0; i < mhs; i++)
    {
        for (int j = 0; j < matkul; j++)
        {
            nMhs[i] += data[i][j];
            nMatkul[i] += data[j][i];
        }   
    }

    cout << "\n\nrata-rata nilai per mahasiswa" << endl;
    for (int i = 0; i < mhs; i++)
    {
        printf("%3d|", i+1);
        cout << nMhs[i]/(char(matkul)*1.0) << endl;
    }
    
    cout << "\n\nrata-rata nilai per matkul" << endl;
    for (int i = 0; i < matkul; i++)
    {
        printf("%3d|", i+1);
        cout << nMatkul[i]/(char(mhs)*1.0) << endl;
    }
    


    
    



    return 0;
}