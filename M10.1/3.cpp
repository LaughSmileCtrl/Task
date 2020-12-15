#include <iostream>

using namespace std;

void filter(int * nilai, int * lulus, int * gagal, int n)
{
    int li = 0;
    int gi = 0;

    for (int i = 0; i < n; i++)
    {
        if(nilai[i] >= 60)
        {
            lulus[li++] = nilai[i];
        }
        else
        {
            gagal[gi++] = nilai[i];
            
        }
    }    
}


void tampilkan(string m,int * nilai, int n)
{
    int sum = 0;
    cout << "List Nilai Mahasiswa yang " << m << " : " << endl;

    for (int i = 0; i < n; i++)
    {
        if(nilai[i] != 0)
        {
            cout << "\t\t - " << nilai[i] << endl;
            sum++;
        }else if((nilai[i] == 0) && (nilai[i+1] == 0))
        {
            cout << endl;
            break;
        }
        
    }

    cout << "\tJumlah mahasiswa " << m << " = " << sum << endl;
    
}


int main()
{
    int nilai[] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int n = sizeof(nilai)/sizeof(int);

    int lulus[n];
    int gagal[n];

    fill(lulus, lulus+n, 0);
    fill(gagal, gagal+n, 0);

    filter(nilai, lulus, gagal, n);

    tampilkan("Lulus",lulus, n);
    tampilkan("Gagal",gagal, n);


    return 0;
}