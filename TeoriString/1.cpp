#include <iostream>
#include <string.h>

using namespace std;

// this method to override strrev
// cause in unix this method not available
char* strrev(char* str) {
    char* front = str;
    char* back  = str + strlen(str) - 1;
    
    while (back > front)
    {
        swap(*back--, *front++); 
    }
    return str;
}

int main()
{
    char kalimat[] = "Mahasiswa Teknik Informatika Politeknik Elektronika Negeri Surabaya Program Studi Diluar Kampus Utama Sumenep sedang melakukan Praktik matakuliah Konsep Pemprograman";

    cout << strrev(kalimat) << endl;


    return 0;
}