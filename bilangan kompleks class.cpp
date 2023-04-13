#include <iostream>
using namespace std;

// Deklarasi class
class BilanganKompleks {
  public:
    double real;
    double imajiner;
    BilanganKompleks tambah(BilanganKompleks bk) {
      BilanganKompleks hasil;
      hasil.real = real + bk.real;
      hasil.imajiner = imajiner + bk.imajiner;
      return hasil;
    }
    BilanganKompleks kurang(BilanganKompleks bk) {
      BilanganKompleks hasil;
      hasil.real = real - bk.real;
      hasil.imajiner = imajiner - bk.imajiner;
      return hasil;
    }
};

int main() {
  // Membuat objek dari class BilanganKompleks
  BilanganKompleks bk1, bk2, bk3;

  // Mengisi nilai atribut pada objek bk1 dan bk2
  bk1.real = 2.0;
  bk1.imajiner = 3.0;
  bk2.real = 1.5;
  bk2.imajiner = 2.5;

  // Menjumlahkan bilangan kompleks dan menampilkan hasilnya
  bk3 = bk1.tambah(bk2);
  cout << "Hasil penjumlahan: " << bk3.real << " + " << bk3.imajiner << "i" << endl;

  // Mengurangkan bilangan kompleks dan menampilkan hasilnya
  bk3 = bk1.kurang(bk2);
  cout << "Hasil pengurangan: " << bk3.real << " + " << bk3.imajiner << "i" << endl;

  return 0;
}

