using namespace std;

class Output {
	public :
		void cetak(){
			cout << "STRUK PEMBELIAN \n";
			cout << "Yang dibeli : \n";
			cout << "  Ayam Geprek  -> " << data_file[3] << endl;
			cout << "  Ayam Goreng   -> " << data_file[4] << endl;
			cout << "Harga total Rp. " << data_file[0] << endl;
			cout << "Diskon      Rp. " << data_file[1] << endl;
			cout << "Harga Bayar Rp. " << data_file[2] << endl;
		}

		void getData(){
			ambil_data.open("api_data.txt");
			while(!ambil_data.eof()){
				ambil_data >> data_file[index];
				index += 1;
			}
			ambil_data.close();
		}

	private :
		ifstream ambil_data;
		string data_file[30];
		int index = 0;
};