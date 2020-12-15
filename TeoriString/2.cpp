#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    
    char kalimat1[] = "Teknik ";
  	char kalimat2[] = "Informatika";

    strcat(kalimat1, kalimat2);

    cout << kalimat1 << endl;

    return 0;
}