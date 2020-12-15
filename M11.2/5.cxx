#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char arr[100];
    printf("Masukkan 1 baris kalimat\n");
    scanf("%s", arr);
    printf("\n");

    for(int i = 0; i < strlen(arr); i++)
    {
        printf("%c", toupper(arr[i]));
    }

    printf("\n");

    for(int i = 0; i < strlen(arr); i++)
    {
        printf("%c", tolower(arr[i]));
    }

    printf("\n");

    return 0;

}