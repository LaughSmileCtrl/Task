#include <iostream>

using namespace std;

int main()
{
    char str[256];
    int i = 0;
    printf("Input String : ");
    fgets(str, 256, stdin);

    while (i <= 256)
    {
        if(str[i] == ' ')
        {
            printf("\n");
        }
        else if (str[i] == '.')
        {
            break;
        }else
        {
            printf("%c",str[i]);
        }
        i++;
    }
    
    printf("\n");

    return 0;
}