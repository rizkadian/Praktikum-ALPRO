#include <iostream>
using namespace std;
int main ()
{
	int jumlah, total, harga, jarak, menu, ongkir, diskon, bayar, subtotal;
	
	cout<<"============================================="<<endl;
	cout<<"        PROGRAM RUMAH MAKAN DELIVERY"<<endl;
	cout<<"============================================="<<endl<<endl;
	cout<<"Menu Rumah Makan :"<<endl;
	cout<<" 1. Ayam Geprek : 21000"<<endl;
	cout<<" 2. Ayam Goreng : 17000"<<endl;
	cout<<" 3. Udang Goreng : 19000"<<endl;
	cout<<" 4. Cumi Goreng : 20000"<<endl;
	cout<<" 5. Ayam Bakar : 25000"<<endl<<endl;
	cout<<"Pilih menu yang akan dipesan (1-5) : ";
	cin>>menu;
	switch (menu) 
	{
		case (1) :
			cout<<"Masukan jumlah pesanan : ";
			cin>>jumlah;
			cout<<"Masukan jarak antar : ";
			cin>>jarak;
			if (jarak <= 3)
			{ 
				total=21000*jumlah;
				cout<<"Total pesanan : "<<total<<endl;
				if (total==25000||total<50000)
				{
					ongkir=15000-3000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total==25000||total<150000)
				{
					ongkir=15000-5000;
					diskon=total*85/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total>=150000) 
				{
					ongkir=15000-8000;
					diskon=total*65/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else 
				{
					ongkir=15000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
			}
			if (jarak > 3)
			{
				total=21000*jumlah;
				cout<<"Total pesanan : "<<total<<endl;
				if (total==25000||total<50000)
				{
					ongkir=25000-3000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total==25000||total<150000)
				{
					ongkir=25000-5000;
					diskon=total*85/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total>=150000) 
				{
					ongkir=25000-8000;
					diskon=total*65/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else 
				{
					ongkir=25000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
			}
			break;
		case (2) :
			cout<<"Masukan jumlah pesanan : ";
			cin>>jumlah;
			cout<<"Masukan jarak antar : ";
			cin>>jarak;
			if (jarak <= 3)
			{ 
				total=17000*jumlah;
				cout<<"Total pesanan : "<<total<<endl;
				if (total==25000||total<50000)
				{
					ongkir=15000-3000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total==25000||total<150000)
				{
					ongkir=15000-5000;
					diskon=total*85/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total>=150000) 
				{
					ongkir=15000-8000;
					diskon=total*65/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else 
				{
					ongkir=15000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
			}
			if (jarak > 3)
			{
				total=17000*jumlah;
				cout<<"Total pesanan : "<<total<<endl;
				if (total==25000||total<50000)
				{
					ongkir=25000-3000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total==25000||total<150000)
				{
					ongkir=25000-5000;
					diskon=total*85/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total>=150000) 
				{
					ongkir=25000-8000;
					diskon=total*65/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else 
				{
					ongkir=25000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
			}
			break;
		case (3) :
			cout<<"Masukan jumlah pesanan : ";
			cin>>jumlah;
			cout<<"Masukan jarak antar : ";
			cin>>jarak;
			if (jarak <= 3)
			{ 
				total=19000*jumlah;
				cout<<"Total pesanan : "<<total<<endl;
				if (total==25000||total<50000)
				{
					ongkir=15000-3000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total==25000||total<150000)
				{
					ongkir=15000-5000;
					diskon=total*85/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total>=150000) 
				{
					ongkir=15000-8000;
					diskon=total*65/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else 
				{
					ongkir=15000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
			}
			if (jarak > 3)
			{
				total=19000*jumlah;
				cout<<"Total pesanan : "<<total<<endl;
				if (total==25000||total<50000)
				{
					ongkir=25000-3000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total==25000||total<150000)
				{
					ongkir=25000-5000;
					diskon=total*85/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total>=150000) 
				{
					ongkir=25000-8000;
					diskon=total*65/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else 
				{
					ongkir=25000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
			}
			break;
		case (4) :
			cout<<"Masukan jumlah pesanan : ";
			cin>>jumlah;
			cout<<"Masukan jarak antar : ";
			cin>>jarak;
			if (jarak <= 3)
			{ 
				total=20000*jumlah;
				cout<<"Total pesanan : "<<total<<endl;
				if (total==25000||total<50000)
				{
					ongkir=15000-3000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total==25000||total<150000)
				{
					ongkir=15000-5000;
					diskon=total*85/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total>=150000) 
				{
					ongkir=15000-8000;
					diskon=total*65/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else 
				{
					ongkir=15000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
			}
			if (jarak > 3)
			{
				total=20000*jumlah;
				cout<<"Total pesanan : "<<total<<endl;
				if (total==25000||total<50000)
				{
					ongkir=25000-3000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total==25000||total<150000)
				{
					ongkir=25000-5000;
					diskon=total*85/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total>=150000) 
				{
					ongkir=25000-8000;
					diskon=total*65/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else 
				{
					ongkir=25000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
			}
			break;
		case (5) :
			cout<<"Masukan jumlah pesanan : ";
			cin>>jumlah;
			cout<<"Masukan jarak antar : ";
			cin>>jarak;
			if (jarak <= 3)
			{ 
				total=25000*jumlah;
				cout<<"Total pesanan : "<<total<<endl;
				if (total==25000||total<50000)
				{
					ongkir=15000-3000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total==25000||total<150000)
				{
					ongkir=15000-5000;
					diskon=total*85/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total>=150000) 
				{
					ongkir=15000-8000;
					diskon=total*65/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else 
				{
					ongkir=15000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
			}
			if (jarak > 3)
			{
				total=25000*jumlah;
				cout<<"Total pesanan : "<<total<<endl;
				if (total==25000||total<50000)
				{
					ongkir=25000-3000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total==25000||total<150000)
				{
					ongkir=25000-5000;
					diskon=total*85/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else if (total>=150000) 
				{
					ongkir=25000-8000;
					diskon=total*65/100;
					subtotal=ongkir+diskon;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
				else 
				{
					ongkir=25000;
					diskon=total;
					subtotal=total+ongkir;
					cout<<"Subtotal : "<<subtotal<<endl;
					cout<<"Bayar : ";
					cin>>bayar;
				}
			}
			break;
			
	}
	cout<<"\n============================================="<<endl;
	cout<<"         STRUCK PEMBELIAN RUMAH MAKAN"<<endl;
	cout<<"============================================="<<endl;
	cout<<"Menu Rumah Makan :"<<endl;
	cout<<" 1. Ayam Geprek : 21000"<<endl;
	cout<<" 2. Ayam Goreng : 17000"<<endl;
	cout<<" 3. Udang Goreng : 19000"<<endl;
	cout<<" 4. Cumi Goreng : 20000"<<endl;
	cout<<" 5. Ayam Bakar : 25000"<<endl;
	cout<<"============================================="<<endl;
	cout<<"Menu Yang Dipesan \t\t = "<<menu<<endl;
	cout<<"Jumlah Pesanan \t\t\t = "<<jumlah<<endl;
	cout<<"============================================="<<endl;
	cout<<"Total \t\t\t\t = Rp. "<<total<<endl;
	if (total==25000||total<50000) 
	{
		cout<<"Diskon \t\t\t\t = -"<<endl;
	}
	else if (total==25000||total<150000) 
	{
		cout<<"Diskon \t\t\t\t = 15%"<<endl;
	}
	else if (total>=150000) 
	{
		cout<<"Diskon \t\t\t\t = 35%"<<endl;
	}
	else 
	{
		cout<<"Diskon \t\t\t\t = -"<<endl;
	}
	cout<<"============================================="<<endl;
	cout<<"Total Setelah Diskon \t\t = Rp. "<<diskon<<endl;
	cout<<"Ongkos Kirim \t\t\t = Rp. "<<ongkir<<endl;
	cout<<"============================================="<<endl;
	cout<<"Subtotal \t\t\t = Rp. "<<subtotal<<endl;
	cout<<"Bayar \t\t\t\t = Rp. "<<bayar<<endl;
	cout<<"============================================="<<endl;
	cout<<"Kembali \t\t\t = Rp. "<<bayar-subtotal<<endl;
	cout<<"============================================="<<endl;
	cout<<"                TERIMA KASIH"<<endl;
	cout<<"============================================="<<endl;
	return 0;
}