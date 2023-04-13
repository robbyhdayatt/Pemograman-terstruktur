#include <iostream>
using namespace std;

// Deklarasi class
class Mahasiswa {
  public:
    string nama;
    int umur;
    void tampilkanInfo() {
      cout << "Nama: " << nama << endl;
      cout << "Umur: " << umur << endl;
    }
};

// Deklarasi fungsi
void tambahData(Mahasiswa *mhs, int n) {
  for (int i = 0; i < n; i++) {
    cout << "Data Mahasiswa ke-" << i+1 << endl;
    cout << "Nama: ";
    cin >> mhs[i].nama;
    cout << "Umur: ";
    cin >> mhs[i].umur;
    cout << endl;
  }
}

int main() {
  // Membuat array dari class Mahasiswa
  Mahasiswa mhs[3];

  // Memanggil fungsi tambahData
  tambahData(mhs, 3);

  // Menampilkan informasi mahasiswa
  for (int i = 0; i < 3; i++) {
    cout << "Informasi Mahasiswa ke-" << i+1 << endl;
    mhs[i].tampilkanInfo();
    cout << endl;
  }

  return 0;
}

