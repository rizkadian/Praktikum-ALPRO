#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class studikasus{
  public:
    void input();
    void proses();
    void output();
  private:
    typedef struct{
      int id;
      char nama[20];
      int stock;
    }
    brg;
    brg barang[5];
    brg temp;
    int n, i, b, cari, ada;
};
void studikasus::input(){
  cout<<"============================================"<<endl;
  cout<<"       PROGRAM SORTING DAN SEARCHING        "<<endl;
  cout<<"============================================"<<endl;
  cout<<"Masukan Jumlah Barang : ";
  cin>>n;
  for(int i=0; i<n; i++){
    cout<<"\nMasukkan ID Barang : ";
    cin>>barang[i].id;
    cout<<"Masukkan Nama Barang : ";
    cin>>barang[i].nama;
    cout<<"Masukkan Jumlah Stok Barang : ";
    cin>>barang[i].stock;
  }
  cout<<"\nDaftar barang anda "<<endl;
  cout<<"============================================"<<endl;
  cout<<"|   ID   |           Nama           | Stok |"<<endl;
  cout<<"============================================"<<endl;
  for(int i=0; i<n; i++){
    cout<<"|  "<<barang[i].id<<"  |    \t\t"<<barang[i].nama<<"\t\t    |  "<<barang[i].stock<<"  | "<<endl;
  }
  cout<<"============================================"<<endl;
}
void studikasus::proses(){
  for(i=0;i<n;i++){
    for(b=0;b<n-1;b++){
      if(barang[b].id > barang[b+1].id){
        temp.id=barang[b].id;
        barang[b].id=barang[b+1].id;
        barang[b+1].id=temp.id;
        strcpy(temp.nama,barang[b].nama);
        strcpy(barang[b].nama,barang[b+1].nama);
        strcpy(barang[b+1].nama,temp.nama);
        temp.stock=barang[b].stock;
        barang[b].stock=barang[b+1].stock;
        barang[b+1].stock=temp.stock;
      }
    }
  }
}
void studikasus::output(){
  cout<<"\nDaftar barang setelah diurutkan"<<endl;
  cout<<"============================================"<<endl;
  cout<<"|   ID   |           Nama           | Stok |"<<endl;
  cout<<"============================================"<<endl;
  for(int b=0; b<n; b++){
    cout<<"|  "<<barang[b].id<<"  |    \t\t"<<barang[b].nama<<"\t\t    |  "<<barang[b].stock<<"  | "<<endl;
  }
  cout<<"============================================"<<endl;
  cout<<"\nMasukkan ID barang yang akan dicari : ";
  cin>>cari;
  ada = 0;
  for(b=0;b<n;b++){
    if(barang[b].id==cari){
      ada=1;
      cout<<"============================================"<<endl;
      cout<<"|   ID   |           Nama           | Stok |"<<endl;
      cout<<"============================================"<<endl;
      cout<<"|  "<<barang[b].id<<"  |    \t\t"<<barang[b].nama<<"\t\t    |  "<<barang[b].stock<<"  | "<<endl;
      cout<<"============================================"<<endl;
    }
  }
  if (ada == 0){
    cout<<"Data Tidak Ditemukan"<<endl;
  }
}
int main(){
  studikasus a;
  a.input();
  a.proses();
  a.output();
  return 0;
}