#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
    int nis,nq,nm,nf;
    float na;
    char ns[100],kl[20];

    system("color A");
    cout <<"Nomor Induk Siswa \t : ";cin>>nis;
    cout <<"Nama Siswa \t\t : ";cin>>ns;
    cout <<"Kelas Siswa \t\t : ";cin>>kl;
    cout <<"Nilai Quis \t\t : ";cin>>nq;
    cout <<"Nilai Mid \t\t : ";cin>>nm;
    cout <<"Nilai Final \t\t : ";cin>>nf;
    cout<<"=========================="<<endl;
    na=(1*nq+4*nm+5*nf)/10;
    cout <<"Nilai Akhir \t\t : "<<na;
    return 0;
}
