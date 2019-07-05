#include <iostream>
#include <conio.h>

using namespace std;

int umur [] = {18,29,12,21,20};
int n, hasil;

int main()
{
   for (n=0; n<5 ; n++){
        hasil += umur[n];
    //hasil = umur [0] + umur [1] + umur [2] + umur [3] +umur [4] ;
   }
   cout<<hasil;
   getch();

     }

