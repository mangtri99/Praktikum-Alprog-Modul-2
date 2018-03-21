#include <iostream>
#include <limits>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int uas,uts,tugas,angka;
    cout<< "======= PRAKTIKUM ALPROG ======="<<endl;
    cout<< "========== KELOMPOK 26 ========="<<endl;
    cout<< "=KONVERTER NILAI ANGKA KE HURUF="<<endl<<endl;
    cout<< "Masukkan Nilai UAS : ";
    string line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> uas))
        {
           cout << "inputan salah, silahkan masukkan angka : " ;
             continue;
        }
        if (uas < 0)
        {
            cout << "inputan salah, silahkan masukkan angka : " ;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
             cout << "inputan salah, silahkan masukkan angka : " ;
             continue;
        }
        cout<< "Masukkan Nilai UTS : ";
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> uts))
        {
           cout << "inputan salah, silahkan masukkan angka : " ;
             continue;
        }
        if (uts < 0)
        {
            cout << "inputan salah, silahkan masukkan angka : " ;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
             cout << "inputan salah, silahkan masukkan angka : " ;
             continue;
        }
            cout<< "Masukkan Nilai TUGAS : ";
    string line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> tugas))
        {
           cout << "inputan salah, silahkan masukkan angka : " ;
             continue;
        }
        if (tugas < 0)
        {
            cout << "inputan salah, silahkan masukkan angka : " ;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
             cout << "inputan salah, silahkan masukkan angka : " ;
             continue;
        }
    angka = (uts*25/100)+(uas*50/100)+(tugas*25/100);
    cout << "nilai akhir adalah "<<angka<<endl;

    if ((angka > 80) && (angka < 100)){
        cout<< "Nilai akhir adalah A "<<endl;
    }
    else if ((angka > 65) && (angka < 80)){
        cout << "Nilai akhir adalah B "<<endl;
    }
    else if ((angka > 55) && (angka < 65)){
        cout << "Nilai akhir adalah C "<<endl;
    }
    else if ((angka > 45) && (angka < 55)){
        cout << "Nilai akhir adalah D "<<endl;
    }
    else if ((angka > 0) && (angka < 45)){
        cout << "Nilai akhir adalah E "<<endl;
    }
    return 0;
}}}}
