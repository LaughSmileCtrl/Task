#include <iostream>
#include <cstring>

using namespace std;

// this method to override strrev
// cause in unix os this method not available
char* strrev(char* str) {
    char* front = str;
    char* back  = str + strlen(str) - 2;
    
    while (back > front)
    {
        swap(*back--, *front++); 
    }
    return str;
}

int main()
{
    char str[256];
    
    printf("kalimat : ");
    fgets(str, 256, stdin);
    char strCopy[(unsigned)strlen(str)-1];
    strcpy(strCopy, str);
    strrev(strCopy);

    if(strcmp(strCopy, str) == 0)
    {
        printf("Termasuk PALINDROM\n");
    }
    else
    {
        printf("BUKAN PALINDROM\n");
    }
    

    return 0;
}