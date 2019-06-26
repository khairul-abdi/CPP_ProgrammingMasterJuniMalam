#include <iostream>
#include <windows.h>

using namespace std;
int main(){

    float bil1,bil2,tambah,kurang,kali,bagi;

    //input
    system("color A");
cout <<"Masukkan Bilangan 1 : ";cin>>bil1;
cout <<"Masukkan Bilangan 2 : ";cin>>bil2;

    //proses
    tambah=bil1+bil2;
    kurang = bil1-bil2;
    kali = bil1 * bil2;
    bagi = bil1 / bil2;

    //output
    cout <<"========================"<<endl;
    cout <<" Hasil Penjumlahan dari "<<bil1<< "+"<<bil2<<"="<<tambah<<endl;
    cout <<" Hasil Pengurangan dari "<<bil1<< "-"<<bil2<<"="<<kurang<<endl;
    cout <<" Hasil Bagi dari "<<bil1<< "+"<<bil2<<"="<<bagi<<endl;
    cout <<" Hasil Kali dari "<<bil1<< "+"<<bil2<<"="<<kali<<endl;
}
