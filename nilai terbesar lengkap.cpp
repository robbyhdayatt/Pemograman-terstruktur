#include <iostream>
using namespace std;

// Deklarasi class
class Nilai {
  public:
    int nilai;
    void tampilkanInfo() {
      cout << "Nilai: " << nilai << endl;
    }
};

// Deklarasi fungsi
void cariNilaiTerbesar(Nilai *arr, int n) {
  int nilaiTerbesar = arr[0].nilai;
  for (int i = 1; i < n; i++) {
    if (arr[i].nilai > nilaiTerbesar) {
      nilaiTerbesar = arr[i].nilai;
    }
  }
  cout << "Nilai terbesar: " << nilaiTerbesar << endl;
}

int main() {
  // Membuat array dari class Nilai
  Nilai arr[5];

  // Memasukkan nilai ke dalam array
  for (int i = 0; i < 5; i++) {
    cout << "Nilai ke-" << i+1 << ": ";
    cin >> arr[i].nilai;
  }

  // Memanggil fungsi cariNilaiTerbesar
  cariNilaiTerbesar(arr, 5);

  return 0;
}

