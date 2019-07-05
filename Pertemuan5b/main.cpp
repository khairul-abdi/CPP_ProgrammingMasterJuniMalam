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
cout<<"==================================================\n";
}




int main()
{
        int n,x,nis[100];
        char nama[30][100],hr[100],*ket[100],yes;
        float na[100];

do{
        system("cls");
        garis();
        cout<<"Daftar Nilai Siswa \n";
        garis();
        cout<<"Banyak Siswa \t : ";cin>>n;


        for(x=1;x<=n;x++){
            cout<<"Data ke - "<<x<<endl;
            cout<<"Nis \t\t : ";cin>>nis[x];
            cout<<"Nama \t\t : ";cin>>nama[x];
            cout<<"Nilai \t\t : ";cin>>na[x];


            if(na[x]>=85 && na[x] <= 100)
            {
                hr[x]='A';
                ket[x]="Sangat Memuaskan";
            }
            else if(na[x]>=75)
            {
                hr[x]='B';
                ket[x]="Baik";
            }
            else if(na[x]>=65)
            {
                hr[x]='C';
                ket[x]="Cukup";
            }
             else
            {
                hr[x]='D';
                ket[x]="Buruk";
            }

    cout<<"Kategori \t : "<<hr[x]<<endl;
    cout<<"Keterangan \t : "<<ket[x]<<endl;
        }

        system("cls");
        gotoxy(1,1);garis();
        gotoxy(1,2);cout<<"Daftar Nilai Siswa";
        gotoxy(1,3);cout<<"     Kelas XI-3       ";
        gotoxy(1,4);garis();
        gotoxy(1,5);cout<<"No    NIS       Nama     Nilai  Huruf   Keterangan ";
                                      //1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6
                                      //                                              1                      2
        gotoxy(1,6);garis();

        for(x=1; x<=n; x++)
        {
            gotoxy(1,6+x);cout<<x;
            gotoxy(4,6+x);cout<<nis[x];
            gotoxy(17,6+x);cout<<nama[x];
            gotoxy(27,6+x);cout<<na[x];
            gotoxy(34,6+x);cout<<hr[x];
            gotoxy(42,6+x);cout<<ket[x];
        }
    gotoxy(1,6+x);garis();
    getch();
    cout<<"Apakah anda ingin mengulang : [y/n]";cin>>yes;
    }while(yes=='Y' || yes=='y');

}
