#include <iostream>
#include <cstring>

using namespace std;

void camelCase(char *word)
{
    *word = toupper(*word);
}

int main()
{
    char word[256];

    printf("Input String : ");
    fgets(word, 255, stdin);

    camelCase(word);

    printf("\nHasil : %s\n", word);

    return 0;
}