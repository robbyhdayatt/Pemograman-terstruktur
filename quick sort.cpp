#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
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

        // Quick Sort
        start = clock();
        quickSort(arr, 0, n-1);
        end = clock();
        time_taken = double(end - start) / CLOCKS_PER_SEC;
        cout << "Quick Sort\tO(n log n)\t" << time_taken * 1000 << " ms" << endl;

    }

    return 0;
}