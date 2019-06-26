#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>


using namespace std;

int main()
{
    char ns[50],kl[10];
    int no,nq,nm,nf;
    float na;

    system("color E");
   //input
    cout <<"Nomor Induk Siswa \t : ";cin>>no;
    cout <<"Nama Siswa \t\t : ";gets(ns);
    cout <<"Kelas \t\t\t : ";cin>>kl;
    cout <<"Nilai Quis \t\t : ";cin>>nq;
    cout <<"Nilai Mid \t\t : ";cin>>nm;
    cout <<"Nilai Final \t\t : ";cin>>nf;
    cout <<"=========================="<<endl;

    //proses
        na=(2*nq+3*nm+5*nf)/10;

    //output
    cout <<"Nama Siswa \t\t : "<<ns<<endl;
    cout <<"Kelas \t\t\t : "<<kl<<endl;
    cout <<"Nilai Akhir \t\t : "<<na<<endl;
    cout <<"Nilai Akhir : "<<nq<<"+"<<nm<<"+"<<nf<<" /3 :"<<na<<endl;
   getch();
}
