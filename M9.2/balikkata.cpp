#include <iostream>
#include <string.h>
#include <array>

using namespace std;

int main()
{
    cout << "balik kata" << endl;
    cout << "----------" << endl << endl;

    string word;
    cout << "Masukkan kata : ";
    cin >> word;

    cout << endl;

    int n = word.length(); 

    char wordChar[n + 1];
    char wordCharInvers[n+1];
    strcpy(wordChar, word.c_str());

    int i;
    for (i = 0; i < n; i++)
    {
        wordCharInvers[n-i-1] = wordChar[i];
    }

    i = 0;
    while (wordChar[i] == wordCharInvers[i])
    {
        i++;
        if(i == n)
        {
            cout << "\t-------------------------------------" << endl;
            cout << "\tKata balikan sama dengan kata aslinya" << endl;
            cout << "\t-------------------------------------" << endl << endl;
        }
    }
    
    cout << "\tkata yang dimasukkan : " << wordChar << endl;
    cout << "\tinversnya            : ";

    for(i = 0; i < n; i++)
    {
        cout << wordCharInvers[i];
    }
    
    cout << endl;

    return 0;
}