#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
int main()

{

float komisi, jasa, total, pen;
char nama[15], jab[10];
cout<<"++++++++++++++++++++++++++++++++++" <<endl;
cout<<"PERUSAHAAN LOMBA TARGET "<<endl;
cout<<"++++++++++++++++++++++++++++++++++"<<endl;

cout<<"Nama Pegawai    = ";cin>>nama;
cout<<"Jabatan Pegawai = ";cin>>jab;
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
cout<<"=================================="<<endl;
cout<<"Uang Jasa Rp. "<<jasa<<endl;
cout<<"Uang Komisi Rp. "<<komisi<<endl;
cout<<"Uang Total Rp. "<<total<<endl;
cout<<"=================================="<<endl;

}
