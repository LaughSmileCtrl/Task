#include <iostream>

using namespace std;

void inputArry(float arry[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nilai-" << i+1 << " : ";
        cin >> arry[i];
    }
}

float findAverage(float arry[], int n)
{
    float tmp = 0;

    for (int i = 0; i < n; i++)
    {
        tmp += arry[i];
    }
    
    return (tmp/n);
}

int main()
{
    string name;
    int n;
    float result;

    cout << "Nama : ";
    getline(cin, name);
    cout << "Jumlah nilai : ";
    cin >> n;

    float arry[n];

    inputArry(arry, n);
    result = findAverage(arry, n);

    cout << name << ", nilai rata-rata adalah " << result << "." << endl;

    return 0;
}