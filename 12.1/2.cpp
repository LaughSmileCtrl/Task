#include <iostream>
#include <cstring>

using namespace std;

void toUpperCase(char str[], int length)
{
    for (int i = 0; i < length; i++)
    {
        str[i] = toupper(str[i]);
    }
    
}

void toLowerCase(char str[], int length)
{
    for (int i = 0; i < length; i++)
    {
        str[i] = tolower(str[i]);
    }   
}

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
    char name[256];

    printf("Input your name : ");
    fgets(name, 256, stdin);

    toUpperCase(name, (unsigned)strlen(name)-1);
    printf("\tTo uppercase : %s\n", name);
    toLowerCase(name, (unsigned)strlen(name)-1);
    printf("\tTo lowercase : %s\n", name);
    strrev(name);
    printf("\tReverse      : %s\n", name);

    return 0;
}