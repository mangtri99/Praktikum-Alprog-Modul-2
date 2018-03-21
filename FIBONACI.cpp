#include <iostream>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
using namespace std;
int fibonaci (int i){
if (i==0){
    return 0;
}
else
if (i==1){
    return 1;
}
else{
    return fibonaci(i-1)+(i-2);
}
}
int main()
{
    int x,i;
    cout<< "======== PRAKTIKUM ALPROG ======="<<endl;
    cout<< "=========== KELOMPOK 26 ========="<<endl;
    cout<< "======= BILANGAN FIBONACI ======="<<endl<<endl;
    cout<< "Masukkan n bilangan : ";
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
        cout << "Menampilkan Deret fibonaci "<<endl<<endl;
    for (i=1;i<=x;i++){
        cout<< " "<<fibonaci(i);
    }
    return 0;
}}

