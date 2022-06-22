#include <iostream>
#include "input.hpp"
using namespace std;

class Mhs{
	public:
		void Buat_berikut_list();
  private:
		char nama[20];
		char nim[10];
		Mhs*berikut;
};

void Mhs::Buat_berikut_list(){
	Mhs*Ptr_Kepala = NULL;
	Mhs*Ptr_Baru;
	char lagi;
	do{
		Ptr_Baru = new Mhs;
		cout<<"\nNama Mahasiswa : "; //mengiputkan nama mahasiswa
		cin>>Ptr_Baru->nama;
		cout<<"Nim Mahasiswa : "; //menginpukan nim mahasiswa
		cin>>Ptr_Baru->nim;
		Ptr_Baru->berikut=Ptr_Kepala;
		Ptr_Kepala = Ptr_Baru;
		cout<<"Tambah (y/t) : "; 
	}	while((lagi=getch())!='t');
	cout<<"\n\nData Mahasiswa :"; //menampilkan data mahasiswa
	Mhs*cetak=Ptr_Kepala;
  cout<<"\n==================================="<<endl;
  cout<<" Nama Mahasiswa      Nim Mahasiswa"<<endl;
  cout<<"==================================="<<endl;
	while(cetak!=NULL){
		cout<<"      "<<cetak->nama<<"            "<<cetak->nim<<endl;
		cetak = cetak->berikut;
	}
  cout<<"==================================="<<endl;
}

int main(){
	Mhs*simpul;
	simpul->Buat_berikut_list();
	getch();
}