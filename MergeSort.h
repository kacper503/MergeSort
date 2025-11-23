#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>
using namespace std;

template <typename T>
// MergeSort klasa która implementuje algorytm sortowania przez scalanie
class MergeSort {
public:
    // Publiczna metoda do sortowania wektora
    void sort(vector<T>& arr) {
        if (arr.size() <= 1) return;
        mergeSort(arr, 0, arr.size() - 1);
    }

private:
    // Rekurencyjna metoda do dzielenia i scalania
    void mergeSort(vector<T>& arr, int left, int right) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }

    // Metoda do scalania dwóch posortowanych połówek
    void merge(vector<T>& arr, int left, int mid, int right) {
        int i = left;
        int j = mid + 1;
        vector<T> temp;
        // Scalanie dwóch połówek do tymczasowego wektora
        while (i <= mid && j <= right) {
            if (arr[i] < arr[j]) {
                temp.push_back(arr[i]);
                i++;
            } else {
                temp.push_back(arr[j]);
                j++;
            }
        }
        // Dodawanie pozostałych elementów z lewej połowy
        while (i <= mid) {
            temp.push_back(arr[i]);
            i++;
        }
        // Dodawanie pozostałych elementów z prawej połowy
        while (j <= right) {
            temp.push_back(arr[j]);
            j++;
        }
        // Kopiowanie posortowanych elementów z powrotem do oryginalnego wektora
        for (int k = 0; k < temp.size(); k++) {
            arr[left + k] = temp[k];
        }
    }
};

#endif