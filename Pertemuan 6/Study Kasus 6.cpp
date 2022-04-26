#include <iostream>
using namespace std;
class array {
  public:
    int input();
    int proses();
    int output();
  private:
  	string matkul, dosen;
    int mhs, nilai, n, min, mak, total;
    float rata;
};
int array::input(){
  cout<<"Masukkan nama dosen : "; cin>>dosen;
  cout<<"Masukkan mata kuliah : "; cin>>matkul;
  cout<<"Masukkan jumlah mahasiswa : "; cin>>n;
  return n;
}
int array::proses(){
  cout<<"\nMASUKKAN NILAI MAHASISWA"<<endl;
  int nilai[n];
  for(int i=0; i<n; i++){
    cout<<"Masukkan nilai absen ke-"<<i+1<<" : "; cin>>nilai[i];
    if(i==1){
      min=nilai[i];
      mak=nilai[i];
    }
    else if(min>nilai[i]){
      min=nilai[i];
    }
    else if(mak<nilai[i]){
      mak=nilai[i];
    }
    total += nilai[i];
    rata=total/n;
  }
  return rata;
}
int array::output(){
  int nilai[n];
  cout<<endl;
  cout<<"======================================"<<endl;
  cout<<"        DAFTAR NILAI MAHASISWA"<<endl;
  cout<<"======================================"<<endl;
  cout<<"Nama dosen         = "<<dosen<<endl;
  cout<<"Mata kuliah        = "<<matkul<<endl;
  for(int i=0; i<n; i++){
    cout<<" Nilai absen ke-"<<i+1<<"  = "<<nilai[i]<<endl;
  }
  cout<<"Nilai minimum      = "<<min<<endl;
  cout<<"Nilai maksimum     = "<<mak<<endl;
  cout<<"Rata-rata nilai    = "<<rata<<endl;
  return mak;
}
int main() {
  cout<<"======================================"<<endl;
  cout<<" PROGRAM MENGINPUTKAN NILAI MAHASISWA"<<endl;
  cout<<"======================================"<<endl;
  array a;
  a.input();
  a.proses();
  a.output();
  return 0;
}