#include <iostream>
using namespace std;
int main ()
{
    int jenis, liter, total, bayar, kembali;
    string nama;
    cout<<"================ PROGRAM SPBU ================"<<endl;
    cout<<"JENIS BENSIN"<<endl;
    cout<<"1. Pertalite"<<endl;
    cout<<"2. Pertamax"<<endl;
    cout<<"Pilih jenis bensin : ";
    cin>>jenis;
    if (jenis==1)
    {
        cout<<"\nMasukan nama pembeli : ";
        cin>>nama;
        cout<<"Masukan jumlah liter : ";
        cin>>liter;
        total=7000*liter;
        cout<<"Total pembayaran : "<<total<<endl;
        cout<<"Masukan jumlah bayar : ";
        cin>>bayar;
        kembali=bayar-total;
        cout<<"Kembalian : "<<kembali<<endl;
        cout<<"\n=============================================="<<endl;
        cout<<"             STRUK PEMBELIAN SPBU"<<endl;
        cout<<"=============================================="<<endl;
        cout<<"Nama Pembeli \t\t\t = "<<nama<<endl;
        cout<<"Jenis Bensin \t\t\t = Pertalite"<<endl;
        cout<<"Harga Per-liter \t\t = Rp. 7000"<<endl;
        cout<<"Jumlah Pesanan (Per-liter) \t = "<<liter<<" liter"<<endl;
        cout<<"=============================================="<<endl;
        cout<<"Total \t\t\t\t = Rp. "<<total<<endl;
        cout<<"Bayar \t\t\t\t = Rp. "<<bayar<<endl;
        cout<<"=============================================="<<endl;
        cout<<"Kembali \t\t\t = Rp. "<<kembali<<endl;
        cout<<"=============================================="<<endl;
        cout<<"                 TERIMA KASIH"<<endl;
        cout<<"=============================================="<<endl;
    }
    else if (jenis==2)
    {
        cout<<"\nMasukan nama pembeli : ";
        cin>>nama;
        cout<<"Masukan jumlah liter : ";
        cin>>liter;
        total=9000*liter;
        cout<<"Total pembayaran : "<<total<<endl;
        cout<<"Masukan jumlah bayar : ";
        cin>>bayar;
        kembali=bayar-total;
        cout<<"Kembalian : "<<kembali<<endl;
        cout<<"\n=============================================="<<endl;
        cout<<"             STRUK PEMBELIAN SPBU"<<endl;
        cout<<"=============================================="<<endl;
        cout<<"Nama Pembeli \t\t\t = "<<nama<<endl;
        cout<<"Jenis Bensin \t\t\t = Pertamax"<<endl;
        cout<<"Harga Per-liter \t\t = Rp. 9000"<<endl;
        cout<<"Jumlah Pesanan (Per-liter) \t = "<<liter<<" liter"<<endl;
        cout<<"=============================================="<<endl;
        cout<<"Total \t\t\t\t = Rp. "<<total<<endl;
        cout<<"Bayar \t\t\t\t = Rp. "<<bayar<<endl;
        cout<<"=============================================="<<endl;
        cout<<"Kembali \t\t\t = Rp. "<<kembali<<endl;
        cout<<"=============================================="<<endl;
        cout<<"                 TERIMA KASIH"<<endl;
        cout<<"=============================================="<<endl;
    }
    return 0;
}
