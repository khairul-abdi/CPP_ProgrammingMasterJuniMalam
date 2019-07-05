#include <iostream>

using namespace std;

int main()
{
    int awal,akhir,aw,ak;

    cout<<"Masukkan Nilai Awal : ";cin>>awal;
    cout<<"Masukkan Nilai Akhir : ";cin>>akhir;
    //while menaik
    while(awal<=akhir ){
        cout<<awal<<" Perulangan While Menaik"<<endl;
        awal++;
    }

    //while menurun
        cout<<"Masukkan Nilai Awal : ";cin>>aw;
        cout<<"Masukkan Nilai Akhir : ";cin>>ak;

    while(ak>=aw ){
        cout<<ak<<" Perulangan While Menurun"<<endl;
        ak--;
    }
}
