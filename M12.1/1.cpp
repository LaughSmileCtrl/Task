#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[256];
    int upper = 0;
    int lower = 0;
    printf("Input String : ");
    fgets(str, 256, stdin);

    for (int i = 0; i < (unsigned)strlen(str)-1; i++)
    {
        if(islower(str[i]))
        {
            lower++;
        }else if(isupper(str[i]))
        {
            upper++;
        }
    }
    
    printf("\n\tJumlah huruf kecil = %d \n\tJumlah huruf besar = %d\n", lower, upper);

    return 0;
}