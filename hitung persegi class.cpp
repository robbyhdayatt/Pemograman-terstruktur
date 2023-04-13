#include <iostream>
using namespace std;

// Deklarasi class
class PersegiPanjang {
  public:
    double panjang;
    double lebar;
    double hitungLuas() {
      return panjang * lebar;
    }
};

int main() {
  // Membuat objek dari class PersegiPanjang
  PersegiPanjang pp;

  // Mengisi nilai atribut pada objek
  pp.panjang = 4.5;
  pp.lebar = 2.3;

  // Memanggil metode pada objek dan menampilkan hasilnya
  cout << "Luas Persegi Panjang: " << pp.hitungLuas() << endl;

  return 0;
}

