#include <iostream>
#include <cstring>

using namespace std;

int wordCalculate(char *words)
{
    int space = 1;
    int n = strlen(words) - 1 ;
    for (int i = 0; i < n; i++)
    {
        if(*(words + i) == ' ')
        {
            space++;
        }
    }
    return space;
}

int main()
{
    char words[256];
    int result;

    cout << "Masukkan kalimat" << endl;
    fgets(words, 255, stdin);
    result = wordCalculate(words);\
    cout << "Banyak kata = " << result << endl;


    return 0;
}