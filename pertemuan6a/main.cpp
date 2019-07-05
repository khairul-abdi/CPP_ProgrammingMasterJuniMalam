#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
     long harga=0,total,beli;
     char KodeBaju, Ukuran;
     string Merk;
     int n,x;

     cout<<"\t== Program Jualan Baju ==\n\n";
     cout<<"Banyak Beli \t : ";cin>>n;
     for(x=1;x<=n;x++){
     cout<<"Data ke - "<<x<<endl;
     cout<<"Masukkan Kode Baju   : ";
     cin>>KodeBaju;

     cout<<"Masukkan Ukuran Baju : ";
     cin>>Ukuran;

     if(KodeBaju=='1'){
          Merk="IMP i";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=200000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=220000;
          }
          else{
               harga=250000;
          }
     }
     else if(KodeBaju=='2'){
          Merk="Prada";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=150000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=160000;
          }
          else{
               harga=170000;
          }
     }
     else if(KodeBaju=='3'){
          Merk="Gucci";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=200000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=200000;
          }
          else{
               harga=200000;
          }
     }
     else if(KodeBaju=='4'){
          Merk="Louis Vuitton";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=300000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=300000;
          }
          else{
               harga=350000;
          }
     }
     else if(KodeBaju=='5'){
          Merk="Kick Denim";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=100000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=120000;
          }
          else{
               harga=130000;
          }
     }
     else{
          Merk="Error";
          cout<<"\n== Salah Input Kode Baju ==";
     }


     cout<<"\n\nMerek Baju  = "<<Merk;
     cout<<"\nUkuran Baju = "<<Ukuran;
     cout<<"\nHarga Baju  = "<<harga;
     cout<<"\nJumlah Beli = ";cin>>beli;
     total=harga*beli;

     cout<<"Total Belanja = "<<total;
    }
    getch();
}
