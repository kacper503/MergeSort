/**
 * @file main.cpp
 * @brief Przykładowe użycie klasy MergeSort z typami int, float i double.
 *
 * Program demonstruje działanie szablonowej klasy MergeSort,
 * sortując trzy różne wektory: int, float oraz double.
 */

#include <iostream>
#include <vector>
#include "MergeSort.h"
using namespace std;

/**
 * @brief Funkcja główna programu.
 *
 * Wykonuje trzy testy na różnych typach danych:
 * - sortowanie wektora int,
 * - sortowanie wektora float,
 * - sortowanie wektora double.
 *
 * Wypisuje dane przed i po sortowaniu.
 *
 * @return Kod wyjścia programu (0 oznacza sukces).
 */
int main() {

    //  testowanie na Int
    /**
     * @brief Wektor liczb całkowitych do sortowania.
     */
    vector<int> data = { 9, 1, 5, 3, 7, 2, 8, 6, 4 };

    /**
     * @brief Obiekt sortera dla typu int.
     */
    MergeSort<int> sorterInt;

    cout << "INT - Przed sortowaniem: ";
    for (auto& x : data) cout << x << " ";
    cout << endl;

    sorterInt.sort(data);

    cout << "INT - Po sortowaniu:    ";
    for (auto& x : data) cout << x << " ";
    cout << endl << endl;


    // Testowanie na Float
    /**
     * @brief Wektor liczb zmiennoprzecinkowych float.
     */
    vector<float> dataF = { 3.5f, 1.1f, 2.8f, 0.4f, 9.9f };

    /**
     * @brief Obiekt sortera dla typu float.
     */
    MergeSort<float> sorterFloat;

    cout << "FLOAT - Przed sortowaniem: ";
    for (auto& x : dataF) cout << x << " ";
    cout << endl;

    sorterFloat.sort(dataF);

    cout << "FLOAT - Po sortowaniu:    ";
    for (auto& x : dataF) cout << x << " ";
    cout << endl << endl;


    // Testowanie na Double
    /**
     * @brief Wektor liczb zmiennoprzecinkowych double.
     */
    vector<double> dataD = { 10.01, 7.7, 3.1415, -2.5, 8.8 };

    /**
     * @brief Obiekt sortera dla typu double.
     */
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
