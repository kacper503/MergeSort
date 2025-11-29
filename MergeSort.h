#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>
using namespace std;

/**
 * @class MergeSort
 * @brief Szablonowa klasa implementująca algorytm sortowania przez scalanie.
 *
 * Klasa umożliwia sortowanie dowolnego typu danych T,
 * który wspiera operator porównania `<`.
 *
 * @tparam T Typ danych przechowywany w wektorze.
 */
template <typename T>
class MergeSort {
public:

    /**
     * @brief Sortuje podany wektor za pomocą algorytmu Merge Sort.
     *
     * Funkcja jest publiczna i wywołuje rekurencyjną metodę sortującą.
     * Jeżeli wektor posiada 0 lub 1 element — jest już posortowany.
     *
     * @param arr Referencja do wektora elementów do posortowania.
     */
    void sort(vector<T>& arr) {
        if (arr.size() <= 1) return;
        mergeSort(arr, 0, arr.size() - 1);
    }

private:

    /**
     * @brief Rekurencyjna funkcja dzieląca wektor na części i je sortująca.
     *
     * Implementuje zasadę „dziel i zwyciężaj” — dzieli tablicę na dwie połowy,
     * sortuje je, a następnie scala w jedną posortowaną całość.
     *
     * @param arr Referencja do wektora.
     * @param left Indeks początku przedziału.
     * @param right Indeks końca przedziału.
     */
    void mergeSort(vector<T>& arr, int left, int right) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }

    /**
     * @brief Scala dwie posortowane części tablicy w jedną większą posortowaną całość.
     *
     * Pierwsza część to przedział [left, mid],  
     * druga część to przedział [mid + 1, right].
     *
     * @param arr Referencja do wektora.
     * @param left Lewy indeks pierwszej części.
     * @param mid Środkowy indeks — koniec pierwszej części.
     * @param right Prawy indeks drugiej części.
     */
    void merge(vector<T>& arr, int left, int mid, int right) {
        int i = left;
        int j = mid + 1;
        vector<T> temp;

        // Scalanie dwóch posortowanych połówek
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

        // Przepisanie danych z powrotem do oryginalnego wektora
        for (int k = 0; k < temp.size(); k++) {
            arr[left + k] = temp[k];
        }
    }
};

#endif
