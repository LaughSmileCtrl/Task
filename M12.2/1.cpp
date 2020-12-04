#include <iostream>

using namespace std;

void segitiga(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j  ++)
        {
            cout << word[j];
        }
        cout << endl;
    }
    
}

int main()
{
    char word[] = "POLITEKNIK";
    int n = (sizeof(word)/sizeof(char))-1;

    segitiga(word, n);

    return 0;
}