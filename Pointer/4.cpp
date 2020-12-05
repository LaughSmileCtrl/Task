#include <iostream>

using namespace std;

void urutanBulan()
{
    char bulan[][12] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};

    printf(" ke | Nama Bulan\n");
    for (int i = 0; i < 12; i++)
    {
        printf(" %2d | %s\n", i+1, *(bulan+i));
    }
    
}

int main()
{
    urutanBulan();

    return 0;
}