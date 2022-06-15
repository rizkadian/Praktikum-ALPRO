#include <iostream>
using namespace std;
class matriks{
  public:
    void input();
    void sorting();
    void konversi();
  private:
    int n, brs, klm, i, j, tmp;
	  int data[20]; 
    int output[4][5];
	  int d=0;
};
void matriks::input(){
  cout<<"Masukkan banyaknya data : ";
	cin>>n; //proses memasukkan data
	for(int i=0;i<n;i++){
		cout<<"Masukkan data ke-"<<i+1<<" = ";
		cin>>data[i];
	}
  cout<<endl;
	cout<<"Data sebelum diurutkan : "<<endl;
	for(i=0;i<n;i++){ //proses menampilkan array 1 dimensi
		cout<<data[i]<<" ";
	}
	cout<<endl;
}
void matriks::sorting(){
  for(int i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(data[i]>data[j])
			{
				tmp=data[i];
				data[i]=data[j];
				data[j]=tmp;
			}
		}
	}
  cout<<endl;
  cout<<"Data setelah diurutkan : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<data[i]<<" ";
	}
}
void matriks::konversi(){
  cout<<endl<<endl;
  cout<<"Masukkan banyaknya kolom : ";
	cin>>klm;
	cout<<"Masukkan banyaknya baris : ";
	cin>>brs;
	for(int k=0;k<brs;k++){ //proses perubahan array 1d ke 2d
		for(int l=0;l<klm;l++){
			output[k][l]=data[d];
			d++;
		}
	}
	for(int k=0;k<brs;k++){ //proses menampilkan bentuk array 2d
		for(int l=0;l<klm;l++){
			cout<<output[k][l]<<" ";
		}
		cout<<endl;
	}
  
}
int main(){
  matriks a;
  a.input();
  a.sorting();
  a.konversi();
	return 0;
}