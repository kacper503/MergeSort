#include <iostream>
#include <vector>
#include "MergeSort.h"
using namespace std;

int main() {
    // Przykładowy wektor do posortowania
    vector<int> data = { 9, 1, 5, 3, 7, 2, 8, 6, 4 };

    // Obiekt klasy MergeSort
    MergeSort<int> sorter;

    cout << "Przed sortowaniem: ";
    for (auto& x : data)
        cout << x << " ";
    cout << endl;

    // Sortowanie danych
    sorter.sort(data);

    cout << "Po sortowaniu:    ";
    for (auto& x : data)
        cout << x << " ";
    cout << endl;

    return 0;
}
