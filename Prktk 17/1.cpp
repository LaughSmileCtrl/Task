#include <iostream>

using namespace std;

string initNamaBintang[] = { "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagitarius", "Capricorn", "Aquarius", "Pisces"};
int initTglAwal[] = {21, 20, 21, 21, 23, 23, 23, 23, 22, 22, 20, 19};
int initTglAkhir[] = {19, 20, 20, 22, 22, 22, 22, 21, 21, 19, 18, 20};
int initBlnAwal[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 2};
int initBlnAkhir[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 2, 3};

struct Zodiak
{
    string namaBintang;
    int tglAwal;
    int tglAkhir;
    int blnAwal;
    int blnAkhir;
};


void setupZodiak(int n, Zodiak zodiak[])
{
    for (int i = 0; i < n; i++)
    {
        zodiak[i].namaBintang = initNamaBintang[i];
        zodiak[i].tglAwal = initTglAwal[i];
        zodiak[i].tglAkhir = initTglAkhir[i];
        zodiak[i].blnAwal = initBlnAwal[i];
        zodiak[i].blnAkhir = initBlnAkhir[i];
    }
    
}

string findZodiak(int n, Zodiak * zodiak, int cTgl, int cBln)
{
    for (int i = 0; i < n; i++)
    {
        bool isMatchDate1 = (cTgl >= zodiak[i].tglAwal && cBln == zodiak[i].blnAwal);
        bool isMatchDate2 = (cTgl <= zodiak[i].tglAkhir && cBln == zodiak[i].blnAkhir);
        if(isMatchDate1 || isMatchDate2)
        {
            return zodiak[i].namaBintang;
        }
    }
    
    return "NOT FOUND!";
}


int main()
{
    int n = 12;
    struct Zodiak zodiak[n];    
    setupZodiak(n, zodiak);
    int cTgl, cBln;

    cout << "\tProgram Menentukan Zodiak" << endl;
    cout << "\t=========================" << endl << endl;
    cout << "Masukkan Tanggal Lahir (dd mm) : ";
    cin >> cTgl >> cBln;

    cout << "\t Hasil Pencarian :" << findZodiak(n, zodiak, cTgl, cBln) << endl;

    return 0;
}