#include <iostream>
#include <cstring>

using namespace std;

struct Waktu
{
    int jam;
    int menit;
};

void swap(Waktu * waktu)
{
    int tmp;
    tmp = waktu[0].jam;
    waktu[0].jam = waktu[1].jam;
    waktu[1].jam = tmp;

    tmp = waktu[0].menit;
    waktu[0].menit = waktu[1].menit;
    waktu[1].menit = tmp;
}

string selisihWaktu(Waktu * waktu)
{
    string tmp = to_string(waktu[1].jam - waktu[0].jam) + " jam, " + to_string(waktu[1].menit - waktu[0].menit) + " menit";
    return tmp;
}


int main()
{
    Waktu waktu[2];
    cout << "menentukan   selisih   antara   dua   waktu" << endl;
    cout << "==========================================="  << endl;

    cout << "\tmasukkan jam 1   : ";
    cin >> waktu[0].jam;
    cout << "\tmasukkan menit 1 : ";
    cin >> waktu[0].menit;
    cout << "\tmasukkan jam 2   : ";
    cin >> waktu[1].jam;
    cout << "\tmasukkan menit 2 : ";
    cin >> waktu[1].menit;

    if (waktu[0].jam >= waktu[1].jam && waktu[0].menit > waktu[1].menit)
    {
        swap(waktu);
    }
    
    cout << "\n\tSelisih waktu = " << selisihWaktu(waktu) << endl;

    return 0;
}