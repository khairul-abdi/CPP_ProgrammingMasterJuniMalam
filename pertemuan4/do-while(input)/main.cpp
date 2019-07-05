#include <iostream>

using namespace std;

int main()
{
    int aw,ak,akhir,awal;

    cout<<"Masukkan Nilai Awal: ";cin>>aw;
    cout<<"Masukkan Nilai Akhir: ";cin>>ak;

    //do-while menaik
    do{
        cout<<aw<<" Looping Do-While Up Input"<<endl;
        aw++;
    }while(aw<=ak);

    //do-while menurun
    cout<<endl;
    cout<<"Masukkan Nilai Awal : ";cin>>awal;
    cout<<"Masukkan Nilai Akhir : ";cin>>akhir;
    do {
        cout<<akhir<<" Looping Do-While Downhill Input"<<endl;
        akhir--;
    }while(akhir>=awal);

}
