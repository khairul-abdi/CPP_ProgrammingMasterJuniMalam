#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int harga;
    char nama[20];

    printf("Harga Barang \n" );
    printf("Masukkan Nama : ");gets(nama);
    printf("Masukkan harga barang : " );scanf("%d",&harga);


    printf("Total harga barang adalah : %d", harga);

    getch();
}
