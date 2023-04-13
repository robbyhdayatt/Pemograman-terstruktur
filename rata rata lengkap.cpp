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
void hitungRataRata(Nilai *arr, int n) {
  int total = 0;
  for (int i = 0; i < n; i++) {
    total += arr[i].nilai;
  }
  double rataRata = (double) total / n;
  cout << "Rata-rata nilai: " << rataRata << endl;
}

int main() {
  // Membuat array dari class Nilai
  Nilai arr[5];

  // Memasukkan nilai ke dalam array
  for (int i = 0; i < 5; i++) {
    cout << "Nilai ke-" << i+1 << ": ";
    cin >> arr[i].nilai;
  }

  // Memanggil fungsi hitungRataRata
  hitungRataRata(arr, 5);

  return 0;
}

