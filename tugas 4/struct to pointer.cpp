#include <iostream>
using namespace std;
struct siswa
{
char nama[50];
int stambuk;
};
int main(){
struct siswa stud = {"ladenn",1};
struct siswa *ptr;
ptr = &stud; 
std::cout << stud.nama << stud.stambuk ;
std::cout << "\n"<<ptr->nama << ptr->stambuk ;
return 0;
}
