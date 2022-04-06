using namespace std;

class Proses {
	public :
		void cetak(){
			
		}

		void getData(){
			ambil_data.open("api_data.txt");
			bool ayam_goreng = true;
			while(!ambil_data.eof()){
				if (ayam_goreng){
					ambil_data >> bnyk_aymGr;
					ayam_goreng = false;
				}
				else{
					ambil_data >> bnyk_aymGp;
				}
			}
			ambil_data.close();
		}

		void toFile(){
			int total = (hrg_aymGr * bnyk_aymGr) + (hrg_aymGp * bnyk_aymGp);
			float batas = 45000;
			float t2 = float(total);
			float diskon = t2 * 0.1;

			if (total >= batas)
				t2 = t2 - diskon;


			tulis_data.open("api_data.txt");
			tulis_data << total << endl;
			tulis_data << diskon << endl;
			tulis_data << t2 << endl;
			tulis_data << bnyk_aymGr << endl;
			tulis_data << bnyk_aymGp;
			tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
		int bnyk_aymGr;
		int bnyk_aymGp;
		int hrg_aymGr = 17000;
		int hrg_aymGp = 21000;
};