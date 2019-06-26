#include<iostream.h>
#include<conio.h>
#include<windows.h>
main()
{
clrscr();
float komisi, jasa, total, pen;
char nama[15], jab[10];
system("COLOR 71");
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
cout<<"==================================";
cout<<"Uang Jasa Rp. "<<jasa;
cout<<"Uang Komisi Rp. "<<komisi;
cout<<"Uang Total Rp. "<<total;
cout<<"==================================";
}
