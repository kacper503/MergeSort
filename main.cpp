#include <iostream>
#include <vector>
#include "MergeSort.h"
using namespace std;

int main() {
    // Testowanie na INT
    vector<int> data = { 9, 1, 5, 3, 7, 2, 8, 6, 4 };
    MergeSort<int> sorterInt;

    cout << "INT - Przed sortowaniem: ";
    for (auto& x : data) cout << x << " ";
    cout << endl;

    sorterInt.sort(data);

    cout << "INT - Po sortowaniu:    ";
    for (auto& x : data) cout << x << " ";
    cout << endl << endl;

    // Testowanie na Float
    vector<float> dataF = { 3.5f, 1.1f, 2.8f, 0.4f, 9.9f };
    MergeSort<float> sorterFloat;

    cout << "FLOAT - Przed sortowaniem: ";
    for (auto& x : dataF) cout << x << " ";
    cout << endl;

    sorterFloat.sort(dataF);

    cout << "FLOAT - Po sortowaniu:    ";
    for (auto& x : dataF) cout << x << " ";
    cout << endl << endl;

    // Testowanie na Double
    vector<double> dataD = { 10.01, 7.7, 3.1415, -2.5, 8.8 };
    MergeSort<double> sorterDouble;

    cout << "DOUBLE - Przed sortowaniem: ";
    for (auto& x : dataD) cout << x << " ";
    cout << endl;

    sorterDouble.sort(dataD);

    cout << "DOUBLE - Po sortowaniu:    ";
    for (auto& x : dataD) cout << x << " ";
    cout << endl;

    return 0;
}
