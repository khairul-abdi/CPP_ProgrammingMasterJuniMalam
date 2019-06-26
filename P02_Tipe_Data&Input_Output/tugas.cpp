#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    system("color E");
  float bil1,bil2,tambah,kali,bagi,kurang;

  //input
  cout <<"Masukkan Bilangan 1 : ";cin>>bil1;
  cout <<"Masukkan Bilangan 2 : ";cin>>bil2;
  cout<<"============================="<<endl;

  //proses
  tambah=bil1+bil2;
  kurang=bil1-bil2;
  kali=bil1*bil2;
  bagi=bil1/bil2;

  //output
    cout << "\nHasil penjumlahan dari "<<bil1<<" + "<<bil2<<" = "<<tambah<<endl;
    cout << "\nHasil pengurangan dari "<<bil1<<" - "<<bil2<<" = "<<kurang<<endl;
    cout << "\nHasil perkalian dari "<<bil1<<" * "<<bil2<<" = "<<kali<<endl;
    cout << "\nHasil pembagian dari "<<bil1<<" : "<<bil2<<" = "<<bagi<<endl;
    cout<<"======================================"<<endl;
}

