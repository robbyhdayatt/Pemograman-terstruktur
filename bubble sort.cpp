#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    // Jumlah data yang digunakan pada tabel
    int dataSize[] = {100, 1000, 10000, 100000, 1000000};

    for (int i = 0; i < sizeof(dataSize)/sizeof(dataSize[0]); i++) {
        int n = dataSize[i];
        vector<int> arr(n);

                // Generate bilangan acak
        srand(time(0));
        for (int j = 0; j < n; j++) {
            arr[j] = rand() % 100;
        }

        // Kode untuk mengukur waktu eksekusi
        clock_t start, end;
        double time_taken;    
        
        // Bubble Sort
        start = clock();
        bubbleSort(arr);
        end = clock();
        time_taken = double(end - start) / CLOCKS_PER_SEC;
        cout << "Bubble Sort\tO(n^2)\t\t" << time_taken * 1000 << " ms" << endl;

        }

    return 0;
}