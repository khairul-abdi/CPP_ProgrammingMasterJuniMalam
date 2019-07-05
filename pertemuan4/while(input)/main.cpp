#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int aw,ak,akhir,awal;

    cout<<"Masukkan Nilai Awal : ";cin>>aw;
    cout<<"Masukkan Nilai Akhir: ";cin>>ak;

    //while menaik
    while(aw<=ak){
        cout<<aw<<" Looping While Input"<<endl;
        aw++;
    }

    cout<<endl;
    //while menurun
    cout<<"Masukkan Nilai Awal : ";cin>>awal;
    cout<<"Masukkan Nilai Akhir : ";cin>>akhir;
    while(akhir>=awal){
        cout<<akhir<<" Looping While Input"<<endl;
        akhir--;
    }
    getch();
}
