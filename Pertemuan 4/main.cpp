#include <iostream>
using namespace std;
class menghitung
{
	public:
		int interatif();
		void akhir();
	private:
		int saku, kuliah, jajan, pengeluaran, total, i, bln;
		float sisa, tabungan, totsak;
};

int menghitung::interatif()
{
	total = 0;
	tabungan = 0;
	cout<<"Masukkan uang saku = Rp. ";
	cin>>saku;
	cout<<"Masukkan jumlah bulan = ";
	cin>>bln;
	for(i=0; i<bln; i++)
	{
		cout<<"\nMasukkan pengeluaran bulan ke - "<<i+1<<endl;
		cout<<"Masukkan biaya pengeluaran kuliah = Rp. ";
		cin>>kuliah;
		cout<<"Masukkan biaya jajan = Rp. ";
		cin>>jajan;
		totsak=saku*bln;
		pengeluaran=kuliah+jajan;
		total=total+pengeluaran;
		sisa=saku-pengeluaran;
		cout<<"Sisa uang saku bulan ke - "<<i+1<<" = Rp. "<<sisa<<endl;
		tabungan=tabungan+sisa;
	} 
	akhir();
	return 0; 
}
void menghitung::akhir()       
{                                                                                                        
	cout<<"\n==============================================="<<endl;
	cout<<"              RINCIAN DATA TABUNGAN"<<endl;
	cout<<"==============================================="<<endl;
	for(i=0; i<bln; i++)
	{
		cout<<" Total Pengeluaran Bulan Ke - "<<i+1<<"  = RP. "<<pengeluaran<<endl;
	}                                                    
	cout<<"==============================================="<<endl;
	cout<<" Total Pengeluaran \t\t = RP. "<<total<<endl;
 	cout<<" Total Uang Saku Selama "<<bln<<" Bulan  = RP. "<<totsak<<endl;
 	cout<<"==============================================="<<endl;
  	cout<<" Total Tabungan \t\t = RP. "<<tabungan<<endl;
  	cout<<"==============================================="<<endl;
}                                                  
int main()
{                             
  	menghitung H;              
  	H.interatif();                          
  	return 0;                                       
}