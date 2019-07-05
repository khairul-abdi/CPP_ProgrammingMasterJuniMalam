#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //for menaik
    int awal,akhir,aw,ak;
    cout<<"Masukkan Nilai Awal : ";cin>>awal;
    cout<<"Masukkan Nilai Akhir : ";cin>>akhir;

    cout<<endl;
    for(awal;awal<=akhir;awal++){
        cout<<awal<<" Looping"<<endl;
    }

    cout<<"Masukkan Nilai Awal : ";cin>>aw;
    cout<<"Masukkan Nilai Akhir : ";cin>>ak;
    //for menurun
    for(ak; ak>=aw;ak--){
        cout<<ak<<" Looping"<<endl;
    }

getch();
}
