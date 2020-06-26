#include <iostream>
using namespace std;
struct mhs { //deklarasi tipe struct
char nama[30];
int stambuk;
float nilai;
} ;
void display(struct mhs *st)
{
std::cout << "Stambuk : " << st->stambuk ;
std::cout << "\nNama : " << st->nama ;
std::cout << "\nNilai : " << st->nilai ;
}
int main()
{
mhs data_mahasiswa;
std::cout <<"Stambuk : "; std::cin>>data_mahasiswa.stambuk;
std::cout <<"Nama : "; std::cin>>data_mahasiswa.nama;
std::cout <<"Nilai : ";std::cin>>data_mahasiswa.nilai;
display(&data_mahasiswa);
return 0;
}
