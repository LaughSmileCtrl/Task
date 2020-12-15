#include <iostream>
#include <string>

using namespace std;

struct Kompleks
{
    int real;
    int imaginer;
};

void inputKompleks(Kompleks * kompleks)
{
    cout << "Masukkan bagian real 1     : ";
    cin >> kompleks[0].real;
    cout << "Masukkan bagian imajiner 1 : ";
    cin >> kompleks[0].imaginer;
    cout << "Masukkan bagian real 2     : ";
    cin >> kompleks[1].real;
    cout << "Masukkan bagian imajiner 2 : ";
    cin >> kompleks[1].imaginer;
}


string tambahKompleks(Kompleks * kompleks)
{
    return (to_string(kompleks[0].real + kompleks[1].real) + "+(" + to_string(kompleks[0].imaginer + kompleks[1].imaginer) + "i)");
}

string kurangiKompleks(Kompleks * kompleks)
{
    return (to_string(kompleks[0].real - kompleks[1].real) + "+(" + to_string(kompleks[0].imaginer - kompleks[1].imaginer) + "i)");
}

string kaliKompleks(Kompleks * kompleks)
{
    int real = (kompleks[0].real * kompleks[1].real) - (kompleks[0].imaginer * kompleks[1].imaginer);
    int imaginer = (kompleks[0].real * kompleks[1].imaginer) + (kompleks[1].real * kompleks[0].imaginer);
    return to_string(real) + "+(" + to_string(imaginer) + "i)";
}



int main()
{
    Kompleks kompleks[2];
    int n;

    cout << "\tBilangan Kompleks" << endl;
    cout << "\t=================" << endl;

    do 
    {
        cout << "Pilihan : " << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "\tMasukkan pilihan : ";
        cin >> n;
    } while (n < 1 || n > 3);    

    inputKompleks(kompleks);

    switch (n)
    {
    case 1:
        cout << "\tHasil :" << tambahKompleks(kompleks) << endl;
        break;
    case 2:
        cout << "\tHasil :" << kurangiKompleks(kompleks) << endl;
        break;
    case 3:
        cout << "\tHasil :" << kaliKompleks(kompleks) << endl;
        break;
    }

    return 0;
}