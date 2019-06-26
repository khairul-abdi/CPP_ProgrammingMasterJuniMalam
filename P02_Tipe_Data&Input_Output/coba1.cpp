#include <iostream>
#include <windows.h>

using namespace std;
int main(){

char ns[50],kl[10];
int nq,nm,nf,no;
float na;

//input
system("color E");
cout <<"Nomor Induk Siswa \t : ";cin>>no;
cout <<"Nama Siswa \t\t : ";cin>>ns;
cout <<"Kelas Siswa \t\t : ";cin>>kl;
cout <<"Nilai Quis \t\t : "; cin>>nq;
cout <<"Nilai Mid \t\t : ";cin>>nm;
cout <<"Nilai Final \t\t : ";cin>>nf;
cout <<"========================="<<endl;

//proses
na=(2*nq+3*nm+5*nf)/10;

//output
cout <<"Nomor Induk Siswa \t : "<<no<<endl;
cout <<"Nama Siswa \t\t : "<<ns<<endl;
cout <<"Nilai Akhir \t\t : "<<na<<endl;
return 0;


}
