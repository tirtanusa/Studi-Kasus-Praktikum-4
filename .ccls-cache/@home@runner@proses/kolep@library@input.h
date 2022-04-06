using namespace std;

class Input {
public:
  void cetak() {
    cout << "Aplikasi Penjualan Kedai Uncle Muthu \n";
    cout << "Menu yang tersedia : \n";
    cout << "1) Ayam Geprek\t\tRp. 21000 \n";
    cout << "2) Ayam Goreng\t\tRp. 17000 \n";
    cout << "3) Udang Goreng\t\tRp. 19000 \n";
    cout << "4) Cumi Goreng\t\tRp. 20000 \n";
    cout << "5) Ayam Bakar\t\tRp. 25000 \n\n";
    cout << "Pesan Ayam Geprek  -> ";
    cin >> bnyk_aymGprk;
    cout << "Pesan Ayam Goreng  -> ";
    cin >> bnyk_aymGr;
    cout << "Pesan Udang Goreng -> ";
    cin >> bnyk_udgGr;
    cout << "Pesan Cumi Goreng  -> ";
    cin >> bnyk_cmGr;
    cout << "Pesan Ayam Bakar   -> ";
    cin >> bnyk_aymBkr;
  }
  void cfile() {
    ofstream cetakfile;
    cetakfile.open("../pra_data/api_data.txt");
    cetakfile << bnyk_aymGprk << endl;
    cetakfile << bnyk_aymGr << endl;
    cetakfile << bnyk_udgGr << endl;
    cetakfile << bnyk_cmGr << endl;
    cetakfile << bnyk_aymBkr;
    cetakfile.close();
  }

private:
  ofstream tulis_data;
  int bnyk_aymGprk, bnyk_aymGr, bnyk_udgGr, bnyk_cmGr, bnyk_aymBkr;
};