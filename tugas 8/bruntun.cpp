#include<iostream>
using namespace std;

int main(){
	int array[10]= {33,43,53,63,73,83,93,13,23,33};
	int i,cari;
	bool ketemu=false;
	cout<<"SEQUENTIAL SEARCH"<<endl;
	cout<<"Isi data Array:"<<endl;
	for(i=0;i<10;i++){
		cout<<"Array ["<<i<<"] = "<<array[i]<<endl;
	}
	
	cout<<"Masukkan data yang akan dicari: ";
	cin>>cari;
	i=0;
	while(i<10){
		if(cari==array[i]){
			ketemu=true;
			break;
		}else{
			i++;
		}
	}
	
	if(ketemu=true){
		cout<<"Data ditemukan pada indeks array ke-"<<i;
	}else{
		cout<<"Data tidak ditemukan";
	}
	return 0;
}
