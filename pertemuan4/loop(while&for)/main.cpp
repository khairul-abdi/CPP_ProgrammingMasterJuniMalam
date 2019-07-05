#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int awal,akhir;
    char jawab;

    //do-while menaik
    do{
            system("cls");

    cout<<"Masukkan Nilai Awal : ";cin>>awal;
    cout<<"Masukkan Nilai Akhir : ";cin>>akhir;
        for(awal;awal<=akhir;awal++){
            cout<<awal<<" Looping mix"<<endl;
        }
        cout<<"\n Apakah Ingin Ulang Lagi[y/n]?";cin>>jawab;
    }while(jawab=='y' || jawab=='Y');
}
