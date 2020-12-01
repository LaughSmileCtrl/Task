#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[256];
    int space = 0;
    int character = 0;
    printf("Input String : ");
    fgets(str, 256, stdin);
    character = (unsigned)strlen(str)-1;

    for (int i = 0; i < character; i++)
    {
        if(str[i] == ' ')
        {
            space++;
        }
    }
    
    printf("\n\tJumlah spasi = %d \n\tJumlah seluruh karakter = %d\n", space, character);

    return 0;
}