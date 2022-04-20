#include <iostream>
using namespace std;
class proses {
	public: 
    	int ambil_matkul(int x);
    	void hitung(); 
	private:
  		int sks, total, diskon, total_biaya1, total_biaya2, total_diskon, pembayaran;
  		int jml_matkul, biaya, hasil;
  		string matkul;
  		char nim[20], nama[50];
};  
void proses::hitung() {
  	proses p;
  	cout << "Masukkan Nama Mahasiswa : ";
  	cin >> nama;
  	cout << "Masukkan NIM Mahasiswa : ";
  	cin >> nim;
  	cout << "Masukkan jumlah matakuliah yang diambil : ";
  	cin >> jml_matkul;
  	
  	hasil = 1;
  	hasil = p.ambil_matkul(jml_matkul);
  	total = hasil * 120000;
  	diskon = total * 15/100;
  	total_diskon = total - diskon;
  
  	cout <<"\n\n=============================================="<<endl;
  	cout <<"      MENENTUKAN BIAYA SKS SAAT PANDEMI"<<endl;
  	cout <<"=============================================="<<endl;
  	cout << "NIM Mahasiswa \t\t\t = " << nim << endl;
  	cout << "Nama Mahasiswa \t\t\t = " << nama << endl;
  	cout << "Jumlah Matakuliah \t\t = " << jml_matkul << endl;
  	cout << "Jumlah SKS \t\t\t = " << hasil << endl;
  	cout <<"=============================================="<<endl;
  	cout << "Total biaya \t\t\t = " << total << endl;
  	cout << "Diskon 15% \t\t\t = "<< diskon << endl;
  	cout << "Total biaya setelah di diskon \t = " << total_diskon  << endl;
  	cout <<"=============================================="<<endl;
}
int proses::ambil_matkul(int x){
  if (x==0){
    cout << "Jumlah keseluruhan sks : " << hasil;
	return hasil;
  }
  else{
    cout << "Masukkan mata kuliah yang diambil : ";
    cin >> matkul;
    cout << "Masukkan jumlah SKS yang diambil : ";
    cin >> sks;
    hasil=+sks;
    return ambil_matkul(x-1);
  }
}
int main() {
  int x;
  proses p;
  cout << "MENENTUKAN BIAYA SKS SAAT PANDEMI" << endl;
  p.hitung();
  return 0;
}
