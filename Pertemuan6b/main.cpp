#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x,n,beli,kode,jumlah;
    string merk;
    long total,harga;
    char uk,yes;




cout<<"Program Jualan Baju"<<endl;
cout<<"Banyak Beli :";cin>>n;

do{
        system("cls");
    for(x=1;x<=n;x++){

            cout<<"\nData Ke - "<<x<<endl;
            cout<<"Masukkan Kode Baju : ";cin>>kode;
            cout<<"Masukkan Ukuran Baju : ";cin>>uk;

        if(kode==1){
            merk="IMP";
                    if(uk=='s' || uk=='S'){
                    harga=200000;
                    }else if(uk=='M' || uk=='m'){
                    harga=220000;
                    }else{
                    harga=240000;
                    }
        }
        else if(kode==2){
            merk="Prada";
                   if(uk=='s' || uk=='S'){
                    harga=100000;
                    }else if(uk=='M' || uk=='m'){
                    harga=110000;
                    }else{
                    harga=120000;
                    }
        }
         else if(kode==3){
            merk="Gucci";
                   if(uk=='s' || uk=='S'){
                    harga=150000;
                    }else if(uk=='M' || uk=='m'){
                    harga=160000;
                    }else{
                    harga=170000;
                    }
        }else{
        merk="Error";
        cout<<"\n== Salah Input Kode Baju ==";
        }

cout<<"\nMerk \t : "<<merk;
cout<<"\nUkuran \t : "<<uk;
cout<<"\nHarga \t : "<<harga;
cout<<"\nJumlah Beli : ";cin>>beli;
total= harga*beli;
cout<<"Total Belanja : "<<total;


}
cout<<"\nApakah anda ingin mengulang[y/n]: ";cin>>yes;
}while(yes=='Y' || yes=='y');
}
