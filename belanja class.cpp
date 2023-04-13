#include <iostream>
using namespace std;

// Deklarasi class
class Toko {
  public:
    double totalBelanjaan;
    double hitungDiskon() {
      if (totalBelanjaan >= 100000) {
        return 0.1 * totalBelanjaan;
      } else {
        return 0.0;
      }
    }
};

int main() {
  // Membuat objek dari class Toko
  Toko toko;

  // Mengisi nilai atribut pada objek
  toko.totalBelanjaan = 125000;

  // Menghitung diskon dan menampilkan total belanjaan dan diskon
  double diskon = toko.hitungDiskon();
  cout << "Total belanjaan: " << toko.totalBelanjaan << endl;
  cout << "Diskon: " << diskon << endl;
  cout << "Total yang harus dibayar: " << toko.totalBelanjaan - diskon << endl;

  return 0;
}

