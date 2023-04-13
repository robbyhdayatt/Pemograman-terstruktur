#include <iostream>
using namespace std;

// Deklarasi class
class Buku {
  public:
    string judul;
    string penulis;
    int jumlahHalaman;
    void tampilkanInfo() {
      cout << "Judul: " << judul << endl;
      cout << "Penulis: " << penulis << endl;
      cout << "Jumlah Halaman: " << jumlahHalaman << endl;
    }
};

int main() {
  // Membuat objek dari class Buku
  Buku buku;

  // Mengisi nilai atribut pada objek
  buku.judul = "Dilan";
  buku.penulis = "Pidi Baiq";
  buku.jumlahHalaman = 392;

  // Menampilkan informasi buku
  buku.tampilkanInfo();

  return 0;
}

