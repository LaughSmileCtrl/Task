#include <iostream>

using namespace std;

void tabelView(string namaJurusan[3], int data[][4], int tahun)
{
    int max = 0;
    for(int i = 0; i < 3; i++)
    {
        if(max < namaJurusan[i].length())
        {
            max = namaJurusan[i].length();
        }
    }

    printf("| %-*s | %-*s|\n", max, "Nama Jurusan", 6*4+2, "Tahun");
    printf("| %-*s | %i | %i | %i | %i |\n", max, "", tahun++, tahun++, tahun++, tahun++);
    printf("|%s|%s|\n", "------------------------", "---------------------------");

    for (int i = 0; i < 3; i++)
    {
        printf("| %-*s | %4i | %4i | %4i | %4i |\n", max, namaJurusan[i].c_str(), data[i][0], data[i][1], data[i][2], data[i][3]);
    }
    

    
}

int main()
{
    int data[3][4] = {{35, 45, 80, 120}, {100, 110, 70, 101}, {10, 15, 20, 17}};
    string namaJurusan[] = {"Teknik Informatika", "Management Informatika", "Teknik Komputer"};

    tabelView(namaJurusan, data, 1992);
    return 0;
}