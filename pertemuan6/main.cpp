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
cout<<"|=======================================|\n";
}


int main()
{
    int pilmenu2,x;
    string menu;
    long harga;
    char pilmenu1,*pilihan[100];
    garis();
    cout << "| Daftar Menu Restoran Nikmat Bersama\t| " <<endl;
    garis();
    cout << "| a. MAKANAN: \t\t\t\t|"<<endl;
    cout << "|    1. Bakso Udang Besar \t\t|"<<endl;
    cout << "|    2. Soto Medan \t\t\t|"<<endl;
    cout << "|    3. Ikan Bakar  \t\t\t|"<<endl;
    cout << "|    4. Sop Ikan Hiu \t\t\t|"<<endl;
    cout << "|    5. Daging Goreng Rendang \t\t|"<<endl;
    cout << "|    \t\t\t\t\t|"<<endl;
    cout << "| b. MINUMAN: \t\t\t\t|"<<endl;
    cout << "|    1. Juice Mangga \t\t\t|"<<endl;
    cout << "|    2. Juice Sirsak \t\t\t|"<<endl;
    cout << "|    3. TST \t\t\t\t|"<<endl;
    cout << "|    4. Milo \t\t\t\t|"<<endl;
    cout << "|    5. Bandrek \t\t\t|"<<endl;
    garis();

    cout << "Masukkan Pilihan Menu Anda [A/B] : ";cin>>pilmenu1;
    cout<<"\n Masukkan Jenis Menu : ";cin>>pilmenu2;

    if (pilmenu1=='a' || pilmenu1=='A'){
            menu="Makanan";
        if(pilmenu2=='1'  ){
                pilihan[x]="Bakso Udang Besar";
                harga=10000;
        }else if(pilmenu2=='2'  ){
                pilihan[x]="Soto Medan";
                harga=12000;
        }else if(pilmenu2=='3'  ){
                pilihan[x]="Ikan Bakar";
                harga=14000;
        }else if(pilmenu2=='4'  ){
                pilihan[x]="Sop Ikan Hiu";
                harga=16000;
        }else if(pilmenu2=='5'  ){
                pilihan[x]="Daging Goreng Rendang";
                harga=18000;
        }else{
                pilihan[x]="Pilihan Anda Tidak Tersedia";
                //harga[x]="";
        }


    }else if(pilmenu1=='b' || pilmenu1=='B'){
        menu="Minuman";
            if(pilmenu2=='1'  ){
                pilihan[x]="Juice Mangga";
                harga=7000;
            }else if(pilmenu2=='2'  ){
                pilihan[x]="Juice Sirsak";
                harga=8000;
            }else if(pilmenu2=='3'  ){
                pilihan[x]="TST";
                harga=9000;
            }else if(pilmenu2=='4'  ){
                pilihan[x]="Milo";
                harga=10000;
            }else if(pilmenu2=='5'  ){
                pilihan[x]="Bandrek";
                harga=11000;
            }else{
                pilihan[x]="Pilihan Anda Tidak Tersedia";
                //harga="";
            }

    }else{


        pilihan[x]="Pilihan Anda Tidak Tersedia";
    }

    cout<<"\n Pilihan \t : "<<pilihan[x];
    cout<<"\n Harga \t : "<<harga;
getch();
}
