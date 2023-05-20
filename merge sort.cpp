#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1);
    vector<int> R(n2);

    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);

        merge(arr, left, mid, right);
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

        // Merge Sort
        start = clock();
        mergeSort(arr, 0, n-1);
        end = clock();
        time_taken = double(end - start) / CLOCKS_PER_SEC;
        cout << "Merge Sort\tO(n log n)\t" << time_taken * 1000 << " ms" << endl;
    }

    return 0;
}