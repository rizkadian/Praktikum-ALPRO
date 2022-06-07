#include <iostream>
using namespace std;
class matriks{
  public:
    void data();
    void rata();
  private:
    int a[3][3]={{60,65,80}, {45,80,90}, {45,90,90}};
    int tahun[3]={2015, 2016, 2017};
    float ratarata1, ratarata2;
    int jumlah=0;
};
void matriks::data(){
  cout<<"================================================="<<endl;
  cout<<"| TAHUN |   TEKNIK   |   TEKNIK   |   TEKNIK    |"<<endl;
  cout<<"| PRODI |  KOMPUTER  |  ELEKTRO   |  PEMESINAN  |"<<endl;
  cout<<"================================================="<<endl;
  for(int i=0; i<3; i++){
    cout<<"  "<<tahun[i]<<endl;
  	for (int j=0; j<3; j++){
  		cout<<"            "<<a[i][j];
	  }
    cout<<endl;
  } 
  cout<<"=================================================\n"<<endl;
}
void matriks::rata(){
  for(int i=0; i<3; i++){ 
    for(int j=0; j<3; j++){
      jumlah = jumlah+a[i][j];
      ratarata1 = jumlah/3;
    }
    cout <<"Rata-rata kelulusan pertahun "<<tahun[i]<<" : "<<ratarata1<< endl;
    jumlah =0;
  }
  cout << endl << endl; 
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      jumlah = jumlah+a[j][i];
      ratarata2 = jumlah/3;
    }
    cout <<"Rata-rata kelulusan perprodi "<<tahun[i]<<" : "<<ratarata2<< endl;
    jumlah =0;
  }
}
int main(){
  matriks a;
  a.data();
  a.rata();
  return 0;
}