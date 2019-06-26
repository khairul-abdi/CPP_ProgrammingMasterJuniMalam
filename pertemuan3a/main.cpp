#include <iostream>
#include <conio.h>
#include <windows.h>
main()
{

float komisi, jasa, total, pen;
char nama[15], jab[10];
system("color A");
cout<<"++++++++++++++++++++++++++++++++++";
cout<<"PERUSAHAAN LOMBA TARGET ";
cout<<"++++++++++++++++++++++++++++++++++";

cout<<"Nama Pegawai    = ";cin >>nama;
cout<<"Jabatan Pegawai = ";cin >>jab;
cout<<"Penjualan "<<nama<<" perhari Rp. ";cin>>pen;
if (pen>=0 && pen<=200000)
{
	jasa=10000;
   komisi=0.1*pen;
}
else if (pen<=500000)
{
	jasa=20000;
   komisi=0.15*pen;
}
else
{
	jasa=30000;
   komisi=0.2*pen;
}
total=komisi+jasa;
//system("color 1f");
gotoxy(25,11);cout<<"==================================";
gotoxy(30,12);cout<<"Uang Jasa Rp. "<<jasa;
gotoxy(30,13);cout<<"Uang Komisi Rp. "<<komisi;
gotoxy(30,14);cout<<"Uang Total Rp. "<<total;
gotoxy(25,15);cout<<"==================================";
getch();
}
