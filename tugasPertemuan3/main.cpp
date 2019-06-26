#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>


using namespace std;

int main()
{
    char ns[50],kl[10],nh;
    int no,nq,nm,nf;
    float na;

    system("color E");
   //input
    /*
    printf("Nomor Induk Siswa \t : ");scanf("%i",&no);
    printf("Nama Siswa \t\t : ");gets(ns);
    */
    cout <<"Nomor Induk Siswa \t : ";cin>>no;
    cout <<"Nama Siswa \t\t : ";cin>>ns;
    cout <<"Kelas \t\t\t : ";cin>>kl;
    cout <<"Nilai Quis \t\t : ";cin>>nq;
    cout <<"Nilai Mid \t\t : ";cin>>nm;
    cout <<"Nilai Final \t\t : ";cin>>nf;
    cout <<"=========================="<<endl;

    //proses
        na=(2*nq+3*nm+5*nf)/10;


        if (na>=80 && na<=100){
            nh='A';
        }
        else if (na >=70){
            nh='B';
        }
        else if(na>=60){
            nh='C';
        }
        else if(na>=50){
            nh='D';
        }
        else{
            nh='E';
        }

    //output
    cout <<"Nama Siswa \t\t : "<<ns<<endl;
    cout <<"Kelas \t\t\t : "<<kl<<endl;
    cout <<"Nilai Akhir \t\t : "<<na<<endl;
    //cout <<"Nilai Akhir : "<<nq<<"+"<<nm<<"+"<<nf<<" /3 :"<<na<<endl;
    cout <<"Nilai Huruf \t\t : "<<nh;
   getch();
}
