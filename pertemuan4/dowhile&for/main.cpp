#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char jawab;
    int awal,akhir;

do{
    system("cls");//clrscr
    cout<<"Masukkan Nilai Awal : ";cin>>awal;
    cout<<"Masukkan Nilai Akhir : ";cin>>akhir;

        for(awal;awal<=akhir;awal++){
            cout<<awal<<" Perulangan Campuran"<<endl;
        }
    cout<<"\nApakah Ingin Ulang Lagi[y/n]?";cin>>jawab;
    }while(jawab=='y' || jawab=='Y');

 //getch();
}
