#include <iostream>
#include <cstring>
using namespace std;

class Buku {
  private:
    char judul[50];
    char penulis[50];
    int tahunTerbit;

  public:
    void setJudul(char* j) {
      strcpy(judul, j);
    }

    void setPenulis(char* p) {
      strcpy(penulis, p);
    }

    void setTahunTerbit(int t) {
      tahunTerbit = t;
    }

    void tampilkanInfo() {
      cout << "Judul buku: " << judul << endl;
      cout << "Penulis buku: " << penulis << endl;
      cout << "Tahun terbit: " << tahunTerbit << endl;
    }
};

void tampilkanJudulBuku(Buku* b) {
  cout << "Judul buku: " << b->judul << endl;
}

int main() {
  Buku b1;
  char judulBuku[] = "Harry Potter and The Philosopher's Stone";
  char penulisBuku[] = "J.K. Rowling";
  int tahunTerbit = 1997;

  b1.setJudul(judulBuku);
  b1.setPenulis(penulisBuku);
  b1.setTahunTerbit(tahunTerbit);

  b1.tampilkanInfo();

  Buku* b2 = new Buku;
  char judulBuku2[] = "The Lord of The Rings: The Fellowship of The Ring";
  char penulisBuku2[] = "J.R.R. Tolkien";
  int tahunTerbit2 = 1954;

  b2->setJudul(judulBuku2);
  b2->setPenulis(penulisBuku2);
  b2->setTahunTerbit(tahunTerbit2);

  tampilkanJudulBuku(b2);

  delete b2;

  return 0;
}

