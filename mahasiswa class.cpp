#include <iostream>
using namespace std;

// Deklarasi class
class Mahasiswa {
  public:
    string nama;
    int nim;
    string jurusan;
    double ipk;
    void tampilkanInfo() {
      cout << "Nama: " << nama << endl;
      cout << "NIM: " << nim << endl;
      cout << "Jurusan: " << jurusan << endl;
      cout << "IPK: " << ipk << endl;
    }
};

int main() {
  // Membuat objek dari class Mahasiswa
  Mahasiswa mhs;

  // Mengisi nilai atribut pada objek
  mhs.nama = "Ahmad";
  mhs.nim = 12345;
  mhs.jurusan = "Teknik Informatika";
  mhs.ipk = 3.5;

  // Memanggil metode pada objek dan menampilkan informasi mahasiswa
  mhs.tampilkanInfo();

  return 0;
}

