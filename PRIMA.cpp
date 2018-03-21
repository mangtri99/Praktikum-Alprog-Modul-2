#include <iostream>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <conio.h>
 using namespace std;
 int main (){
    int x,a,b,cek;
    cout<< "======= PRAKTIKUM ALPROG ======="<<endl;
    cout<< "========== KELOMPOK 26 ========="<<endl;
    cout<< "======== BILANGAN PRIMA ========"<<endl<<endl;
    cout<< " Masukkan n bilangan prima : ";
    string line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> x))
        {
           cout << "inputan salah, silahkan masukkan angka : " ;
             continue;
        }
        if (x < 0)
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

    cout<<" Cetak bilangan prima"<<endl;

    for (a=2;a<=x;a++){
        cek=0;
    for (b=2;b<a;b++)
        {
            if (a%b==0)
            {cek= 1;
            }}if (cek==0)
            {
                cout<<a<<" ";
            }}
            {
                cout<<endl;
            }

return 0;
}}
