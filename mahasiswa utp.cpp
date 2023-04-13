#include <iostream>
#include <cstring>
using namespace std;

class Mahasiswa {
  private:
    char nama[50];
    char jurusan[50];
    int umur;

  public:
    void setNama(char* n) {
      strcpy(nama, n);
    }

    void setJurusan(char* j) {
      strcpy(jurusan, j);
    }

    void setUmur(int u) {
      umur = u;
    }

    void tampilkanInfo() {
      cout << "Nama mahasiswa: " << nama << endl;
      cout << "Jurusan: " << jurusan << endl;
      cout << "Umur: " << umur << endl;
    }
};

void tampilkanJurusanMahasiswa(Mahasiswa* m) {
  cout << "Jurusan mahasiswa: " << m->jurusan << endl;
}

int main() {
  Mahasiswa m1;
  char namaMahasiswa[] = "Andi";
  char jurusanMahasiswa[] = "Teknik Informatika";
  int umurMahasiswa = 20;

  m1.setNama(namaMahasiswa);
  m1.setJurusan(jurusanMahasiswa);
  m1.setUmur(umurMahasiswa);

  m1.tampilkanInfo();

  Mahasiswa* m2 = new Mahasiswa;
  char namaMahasiswa2[] = "Budi";
  char jurusanMahasiswa2[] = "Sistem Informasi";
  int umurMahasiswa2 = 21;

  m2->setNama(namaMahasiswa2);
  m2->setJurusan(jurusanMahasiswa2);
  m2->setUmur(umurMahasiswa2);

  tampilkanJurusanMahasiswa(m2);

  delete m2;

  return 0;
}

