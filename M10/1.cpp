#include <iostream>

using namespace std;

int readUserInput(string userInput[])
{
    cout << "Masukkan string" << endl;
    cout << "Untuk Berhenti menginputkan String silahkan masukkan 0" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Inputkan string ke-" << i+1 << " : ";
        getline(cin, userInput[i]);

        if(userInput[i] == "0")
        {
            return i;
        }
    }
    
    return 10;
}

void writeUserInput(string userInput[], int &n)
{
    cout << "\n------------------------------------------" << endl;
    cout << "Menampilkan string-string yang di masukkan" << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << userInput[i] << endl;
    }
    
}

int main()
{
    string userInput[10];
    int n;

    n = readUserInput(userInput);
    writeUserInput(userInput, n);

    return 0;
}