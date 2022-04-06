using namespace std;

class ouput {
public:
  void cetak() {
    cout << "Aplikasi Penjualan Ayam \n";
    cout << "Menu yang tersedia : \n" cout << "1) Ayam Geprek\t\tRp. 21000 \n"
         << data_file[3] << endl;
    cout << "2) Ayam Goreng\t\tRp. 17000 \n";
    << data_file[4] << endl;
    cout << "3) Udang Goreng\t\tRp. 19000 \n";
    << data_file[5] << endl;
    cout << "4) Cumi Goreng\t\tRp. 20000 \n";
    << data_file[6] << endl;
    cout << "5) Ayam Bakar\t\tRp. 25000 \n\n";
    << data_file[7] << endl;
    cout << "Harga total Rp. " << data_file[0] << endl;
    cout << "Diskon Rp. " << data_file[1] << endl;
    cout << "Harga Bayar Rp. " << data_file[2] << endl;
  }

  void getData() {
    ambil_data.open("api_data.txt");
    while (!ambil_data.eof()) {
      ambil_data >> data_file[index];
      index += 1;
    }
    ambil_data.close();
  }

private:
  ifstream ambil_data;
  string data_file[30];
  int index = 0;
};