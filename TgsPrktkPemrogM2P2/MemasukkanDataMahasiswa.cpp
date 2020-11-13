#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nim, namaMhs, alamat;

    cout << "Memasukkan data mahasiswa" << endl;
    cout << "=========================" << endl << endl;
    cout << "Masukkan Nama mahasiswa = ";
    getline(cin, namaMhs); // karena jika hanya cin >> namaMhs tidak bisa menginputkan space
    cout << "Masukkan NIM mahasiswa = ";
    getline(cin, nim); 
    cout << "Masukkan Alamat mahasiswa = ";
    getline(cin, alamat);
   
   

    cout << "Nama mahasiswa   = " << namaMhs << endl;
    cout << "NIM mahasiswa    = " << nim << endl;
    cout << "Alamat mahasiswa = " << alamat << endl;

    return 0;
}
