#include <iostream>
#include <limits>
#include <sstream>
#include <string>
using namespace std;

int main()
{
   int x,y,z;
        cout << "==== PRAKTIKUM ALPROG =====" << endl;
        cout << "======= KELOMPOK 26 =======" << endl;
        cout << "========== F P B ==========" << endl<<endl;
        cout << "Masukkan bilangan pertama : ";
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
        cout<< "Masukkan bilangan kedua : ";
         string line;
    while(getline(cin, line))
    {
        stringstream linestream(line);
        if (!(linestream >> y))
        {
           cout << "inputan salah, silahkan masukkan angka : " ;
             continue;
        }
        if (y < 0)
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
    z = x % y;
    while (z != 0){
        x=y;
        y=z;
        z=x%y;
    }
    cout<< "FPB bilangan pertama dan kedua adalah : "<< y <<endl;
    return 0;
}}}
