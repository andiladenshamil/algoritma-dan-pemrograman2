#include <iostream>
#include <string>
using namespace std;
 
struct mahasiswa{
    string nama;
    string jurusan;
    float ipk;
};
 
int main(){
 
    mahasiswa mhs;
 
    mhs.nama="laden";
    mhs.jurusan="informatika";
    mhs.ipk=3.50;
    
    cout<<"DATA MAHASISWA"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Nama    : "<<mhs.nama<<endl;
    cout<<"Jurusan : "<<mhs.jurusan<<endl;
    cout<<"IPK     : "<<mhs.ipk<<endl;
      
    return 0;
}
