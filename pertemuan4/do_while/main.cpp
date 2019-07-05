#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i=1;
    //do-while menaik
    do{
        cout<<i<<" Looping Do While"<<endl;
        i++;
    }while(i<=10);

    cout<<endl;
    //do-while menurun
    do{
        cout<<i<<" Looping Do While Menurun"<<endl;
        i--;
    }while(i>=1);

    getch();
}
