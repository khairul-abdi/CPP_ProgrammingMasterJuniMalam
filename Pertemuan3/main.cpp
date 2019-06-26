#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
    system("color A");

    char pil;

    cout << "Masukkan Kode Jenis Kelamin : " ;cin>>pil;
    if (pil=='P' || pil=='p'){
        cout<<"Jenis Kelamin Anda Perempuan";
    }else if(pil=='L' || pil=='l'){
        cout<<"Jenis Kelamin Anda Laki - Laki";
    }else{
    cout<<"Bencong";
    }

getch();
}
