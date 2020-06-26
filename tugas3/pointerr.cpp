#include <iostream>
using namespace std;
void tambah(int *nilai){
*nilai+=10;
}
int main(){
int data=14;
cout<<"Nilai dari data adalah = "<<data<<endl;
tambah(&data);
cout<<"Nilai dari data adalah = "<<data;
return 0;
}
