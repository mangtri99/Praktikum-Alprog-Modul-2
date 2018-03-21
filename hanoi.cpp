#include<iostream>

using namespace std;

void MenaraHanoi(int N, char asal, char bantu, char tujuan);

int main()

{

    int piringan;

    cout<< "\nPROGRAM MENARA HANOI\n";

    cout<< "--------------------\n\n";

    cout<< "Banyaknya piringan: ";

    cin >> piringan;

    cout<< endl;

    MenaraHanoi(piringan,'A','B','C');

    return 0;

}

void MenaraHanoi(int N, char asal, char bantu, char tujuan)

{

    if(N == 1)

        cout<<"Piringan 1 dari "<<asal<< " ke " << tujuan <<endl;

    else

        {

            MenaraHanoi(N-1,asal,tujuan, bantu);

            cout<<"Piringan " << N <<" dari " << asal << " ke " << tujuan<<endl;

            MenaraHanoi(N-1, bantu, asal, tujuan);

        }

}
