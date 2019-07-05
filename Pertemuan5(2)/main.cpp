#include <iostream>
#include <conio.h>

using namespace std;



int Umur [] = {18,19,20,21,22};
int n,hasil;

int main()
{
int a,b,c,d,e;
a=20;
b=19;
hasil=a+b;

cout<<hasil<<endl;

    for(n=0;n<5;n++){
        hasil += Umur[0] + Umur[1]+ Umur[2]+Umur[3]+Umur[4];
    }
    cout<<hasil<<endl;
    getch();
}
