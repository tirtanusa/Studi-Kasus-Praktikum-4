using namespace std;

class Proses {
public:
  void getData() {
    aymGp = true;
    ifstream getfile;
    getfile.open("");
    while (!getfile.eof()) {
      if (aymGp) {
        getfile >> bnyk_aymGp;
        aymGp = false;
        aymGr = true;
      } else if (aymGr) {
        getfile >> bnyk_aymGr;
        aymGr = false;
        udGr = true;
      } else if (udGr) {
        getfile >> bnyk_aymGr;
        udGr = false;
        cuGr = true;
      } else if (cuGr) {
        getfile >> bnyk_aymGr;
        cuGr = false;
        aymBk = true;
      } else {
        getfile >> bnyk_aymBk;
      }
    }
    getfile.close();
    cout << bnyk_aymGp << endl;
    cout << bnyk_aymGr << endl;
    cout << bnyk_udGr << endl;
    cout << bnyk_cuGr << endl;
    cout << bnyk_aymBk << endl;
  }

private:
  int bnyk_aymGr;
  int bnyk_aymGp;
  int bnyk_udGr, bnyk_cuGr, bnyk_aymBk;
  bool aymGp, aymGr, udGr, cuGr, aymBk;
};