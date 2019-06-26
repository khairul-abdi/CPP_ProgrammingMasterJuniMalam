#include <iostream>

using namespace std;

int main()
{
    int no,nq,nm,nf;
    char nama[20],kel[5];
    float na;
    //output
    cout << "Nomor Induk Siswa \t : ";cin>>no;
    cout << "Nama Siswa \t\t : ";cin>>nama;
    cout << "Kelas \t\t\t : ";cin>>kel;
    cout << "Nilai Quis \t\t : ";cin>>nq;
    cout << "Nilai MID \t\t : ";cin>>nm;
    cout << "Nilai Final \t\t : ";cin>>nf;

    //proses
    na=(2*nq+3*nm+5*nf)/10;

    //output
    cout << "Nama Siswa \t\t : "<<nama<<endl;
    cout << "Nilai Quis \t\t : "<<nq<<" Nilai MID : "<<nm<<" Nilai Final : "<<nf<<endl;
    cout << "Nilai Akhir \t\t : "<<na<<endl;
}
