#include <iostream>
using namespace std;
union mahasiswa
{
int kelas;
int stambuk;
};
int main(){
union mahasiswa p1;
p1.stambuk = 13020190153;
p1.kelas =  3;
cout<<"Stambuk : "<<p1.stambuk<< "\nKelas : "
<<p1.kelas ;
return 0;
}
