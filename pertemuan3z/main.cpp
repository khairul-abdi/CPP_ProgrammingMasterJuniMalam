#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    char np[20],jp[30];
    long int penj,jasa;
    float komisi;
    double total;

    cout <<"========================"<<endl;
    cout <<"PERUSAHAAN LOMBA TARGET"<<endl;
    cout <<"========================"<<endl;
    cout << "Nama Pegawai \t : ";cin>>np;
    cout << "Jabatan Pegawai  : ";cin>>jp;
    cout << "Penjualan "<<np<<" Per hari Rp ";cin>>penj;

    if(penj>=0 && penj<=200000){
        jasa=10000;
        komisi = 0.1*penj;
    }else if(penj<=500000){
        jasa=20000;
        komisi = 0.15*penj;
    }else{
        jasa=30000;
        komisi = 0.2*penj;
    }

    //proses
    total=komisi+jasa;

    //output
    cout<<"Nama Pegawai \t : "<<np<<endl;
    cout<<"Uang Jasa \t : "<<jasa<<endl;
    cout<<"Uang Komisi \t : "<<komisi<<endl;
    cout<<"Uang Total \t : "<<total<<endl;


getch();
}
