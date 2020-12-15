#include <iostream>

using namespace std;

int fibo(int &n)
{
    int tmp[n+1];

    for (int i = 0; i <= n; i++)
    {
        if(i == 0)
        {
            tmp[i] = 0;
        }
        else if (i == 1)
        {
            tmp[i] = 1;
        }
        else
        {
            tmp[i] = tmp[i-1] + tmp[i-2];
        }
    }
    return tmp[n];
}

string checkPrime(int &n)
{
    if (n < 2)
    {
        return "Bukan Bilangan prima";
    }
    

    for (int i = 2; i < n && n != 2; i++)
    {
        if(n % i == 0)
        {
            return "Bukan Bilangan prima";
        }
    }

    return "Merupakan Bilangan prima";
    
}

int main()
{
    int n;
    cout << "Menampilkan deret fibonaci" << endl;
    cout << "==========================" << endl << endl;
    cout << "Masukkan sebuah integer : ";
    cin >> n;


    cout << "bilangan fibo ke-" << n << " adalah " << fibo(n) << " dan " << checkPrime(n) << endl;

    return 0;
}