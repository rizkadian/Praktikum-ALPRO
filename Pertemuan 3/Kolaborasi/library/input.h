using namespace std;

class Input {
	public :
		void cetak(){
			cout << "Aplikasi Penjualan Ayam \n";
			cout << "Menu yang tersedia : ";
			cout << "1) Ayam Goreng  Rp. 17000 \n";
			cout << "2) Ayam Geprek   Rp. 21000 \n\n";
			cout << "Pesan Ayam Goreng  -> "; cin >> bnyk_aymGr;
			cout << "Pesan Ayam Geprek  -> "; cin >> bnyk_aymGp;
		}

		void toFile(){
			tulis_data.open(".../pra_data/input.txt");
			tulis_data << bnyk_aymGr << endl;
			tulis_data << bnyk_aymGp;
			tulis_data.close();
		}

	private :
		ofstream tulis_data;
		int bnyk_aymGr, bnyk_aymGp;
};