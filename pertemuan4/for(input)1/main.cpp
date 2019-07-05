#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int awal,akhir;

    cout<<"Masukkan Nilai Awal : ";cin>>awal;
    cout<<"Masukkan Nilai Akhir : ";cin>>akhir;

    for(awal;awal<=akhir;awal++){
        cout<<awal<<" Perulangan"<<endl;
    }

    getch();
}
