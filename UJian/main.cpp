#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

garis()
{
cout<<"============================================================\n";//60 kolom
}

int main(){

    int kode[100],jumbel[100],x,n,i;
    long harga[100],total[100],totalkes=0,disc,totbay,bayar,uangkem;
    string namabrg[100];
    char uk[100],yes;

do{
    system("cls");

    cout<<"Program Penjualan"<<endl;
     cout<<"Banyak barang di beli \t : ";cin>>n;
    for(x=1;x<=n;x++){
    cout<<"\n";
    cout<<"\nData ke - "<<x<<endl;
    cout<<"Kode Barang \t\t : ";cin>>kode[x];
    cout<<"Ukuran Barang \t\t : ";cin>>uk[x];
    //cout<<"Jumlah \t\t : ";cin>>jumbel;


    if (kode[x]==1){
        namabrg[x]="Susu Dancow";
            if(uk[x]=='B' || uk[x]=='b'){
                harga[x]=50000;
            }
            else if(uk[x]=='S' || uk[x]=='s'){
                harga[x]=35000;
            }
            else if(uk[x]=='K' || uk[x]=='k'){
                harga[x]=25000;
            }
    }
    else if(kode[x]==2){
        namabrg[x]="Vape";
            if(uk[x]=='B' || uk[x]=='b'){
                harga[x]=30000;
            }
            else if(uk[x]=='S' || uk[x]=='s'){
                harga[x]=25000;
            }
            else if(uk[x]=='K' || uk[x]=='k'){
                harga[x]=20000;
            }
    }
    else if(kode[x]==3){
        namabrg[x]="Sunlight";
            if(uk[x]=='B' || uk[x]=='b'){
                harga[x]=20000;
            }
            else if(uk[x]=='S' || uk[x]=='s'){
                harga[x]=15000;
            }
            else if(uk[x]=='K' || uk[x]=='k'){
                harga[x]=10000;
            }
    }
     else if(kode[x]==4){
        namabrg[x]="Kecap ABC";
            if(uk[x]=='B' || uk[x]=='b'){
                harga[x]=15000;
            }
            else if(uk[x]=='S' || uk[x]=='s'){
                harga[x]=10000;
            }
            else if(uk[x]=='K' || uk[x]=='k'){
                harga[x]=8000;
            }
     }else if(kode[x]==5){
        namabrg[x]="Bimoli";
            if(uk[x]=='B' || uk[x]=='b'){
                harga[x]=15000;
            }
            else if(uk[x]=='S' || uk[x]=='s'){
                harga[x]=10000;
            }
            else if(uk[x]=='K' || uk[x]=='k'){
                harga[x]=8000;
            }
     }

    cout<<"Nama Barang \t\t : "<<namabrg[x]<<endl;
    cout<<"Ukuran \t\t\t : "<<uk[x]<<endl;
    cout<<"Harga \t\t\t : "<<harga[x]<<endl;
    cout<<"Jumlah Beli \t\t : ";cin>>jumbel[x];
    total[x] = harga[x]*jumbel[x];
    cout<<"Total \t\t\t : "<<total[x];
    }

        system("cls");
        gotoxy(1,1);garis();
        gotoxy(23,2);cout<<"Daftar Penjualan";
        gotoxy(20,3);cout<<"Swalayan Suka Maju";
        gotoxy(1,4);garis();
        gotoxy(1,5);cout<<"No    Nama      Ukuran    Harga     Jumlah   Total ";
                                      //1       9
        gotoxy(1,6);garis();


        for(x=1; x<=n; x++)
        {
            gotoxy(1,6+x);cout<<x;
            gotoxy(5,6+x);cout<<namabrg[x];
            gotoxy(19,6+x);cout<<uk[x];
            gotoxy(27,6+x);cout<<harga[x];
            gotoxy(39,6+x);cout<<jumbel[x];
            gotoxy(46,6+x);cout<<total[x];
            //totalkes[x] += total[x];
            //gotoxy(1,8+x);cout<<"Total Seluruhnya : "<<totalkes[x];
        }

        gotoxy(1,6+x);garis();

        for (x=1;x<=n;x++){
            totalkes=totalkes+total[x];
        }
        //cout<<"Total Keseluruhan : "<<totalkes;
        //cout<<"total 1 "<<total[1]<<endl;
        //cout<<"total 2 "<<total[2]<<endl;

        if(totalkes>=500000){
            disc=150000;
        }else if(totalkes>=300000){
        disc=100000;
        }else if(totalkes>=150000){
        disc=50000;
        }else{
        disc=0;
        }

        totbay=totalkes-disc;

    gotoxy(1,7+x);cout<<"Total Keseluruhan \t : "<<totalkes<<endl;
    gotoxy(1,8+x);cout<<"Discount\t\t : "<<disc<<endl;
    gotoxy(1,9+x);cout<<"Total Bayar \t\t : "<<totbay<<endl;
    gotoxy(1,10+x);cout<<"Bayar \t\t\t : ";cin>>bayar;
    uangkem=bayar-totbay;
    if(bayar<totbay){
    gotoxy(1,11+x);cout<<"Uang Anda Kurang";
    }else if(bayar>=totbay){
    gotoxy(1,11+x);cout<<"Uang kembalian \t : "<<uangkem;
    }
    gotoxy(1,12+x);garis();



cout<<"\nApakah Anda Ingin Mengulang [y/n]: ";cin>>yes;
    }while(yes=='y'|| yes=='Y');
}
