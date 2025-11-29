/**
 * @file Test.cpp
 * @brief Zestaw testów jednostkowych GoogleTest dla klasy MergeSort.
 *
 * Plik zawiera komplet testów sprawdzających poprawność działania
 * algorytmu sortowania przez scalanie (MergeSort) dla typów:
 * - int
 * - float
 * - double
 *
 * Testy obejmują przypadki:
 * - tablice posortowane
 * - tablice odwrotnie posortowane
 * - tablice losowe
 * - liczby ujemne i dodatnie
 * - duże tablice
 * - duplikaty
 * - pojedyncze elementy i tablice puste
 */

#include "pch.h"
#include "gtest/gtest.h"
#include "MergeSort.h"
#include <vector>
#include <algorithm>

using namespace std;

//                               TESTY INT

/**
 * @test Sprawdza sortowanie już posortowanej tablicy liczb całkowitych.
 */
TEST(MergeSortTest, AlreadySorted) {
    vector<int> arr = { 1, 2, 3, 4, 5 };
    vector<int> expected = arr;

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sprawdza sortowanie tablicy posortowanej w odwrotnej kolejności.
 */
TEST(MergeSortTest, ReverseSorted) {
    vector<int> arr = { 5, 4, 3, 2, 1 };
    vector<int> expected = { 1, 2, 3, 4, 5 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie losowej tablicy liczb całkowitych.
 */
TEST(MergeSortTest, RandomArray) {
    vector<int> arr = { 3, 1, 4, 5, 2 };
    vector<int> expected = { 1, 2, 3, 4, 5 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie liczb wyłącznie ujemnych.
 */
TEST(MergeSortTest, OnlyNegative) {
    vector<int> arr = { -3, -1, -4, -2 };
    vector<int> expected = { -4, -3, -2, -1 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie mieszanych wartości dodatnich i ujemnych.
 */
TEST(MergeSortTest, NegativeAndPositive) {
    vector<int> arr = { 3, -1, -4, 2, 0 };
    vector<int> expected = { -4, -1, 0, 2, 3 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie pustej tablicy.
 */
TEST(MergeSortTest, EmptyArray) {
    vector<int> arr;
    vector<int> expected;

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie tablicy jednoelementowej.
 */
TEST(MergeSortTest, SingleElement) {
    vector<int> arr = { 42 };
    vector<int> expected = { 42 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie tablicy zawierającej duplikaty.
 */
TEST(MergeSortTest, Duplicates) {
    vector<int> arr = { 3, 1, 2, 3, 2 };
    vector<int> expected = { 1, 2, 2, 3, 3 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie tablicy liczb ujemnych z duplikatami.
 */
TEST(MergeSortTest, NegativeWithDuplicates) {
    vector<int> arr = { -1, -3, -1, -2 };
    vector<int> expected = { -3, -2, -1, -1 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie tablicy z wartościami mieszanymi oraz duplikatami.
 */
TEST(MergeSortTest, MixedWithDuplicates) {
    vector<int> arr = { 3, -1, 2, -1, 3, 0 };
    vector<int> expected = { -1, -1, 0, 2, 3, 3 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie tablicy dwuelementowej.
 */
TEST(MergeSortTest, TwoElementsSorted) {
    vector<int> arr = { 1, 2 };
    vector<int> expected = { 1, 2 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie większej tablicy liczb całkowitych.
 */
TEST(MergeSortTest, LargeArray) {
    vector<int> arr;
    vector<int> expected;

    for (int i = 200; i > 100; --i) {
        arr.push_back(i);
        expected.push_back(i);
    }

    sort(expected.begin(), expected.end());

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie dużej tablicy zawierającej liczby ujemne, dodatnie i duplikaty.
 */
TEST(MergeSortTest, LargeMixedArray) {
    vector<int> arr;
    vector<int> expected;

    for (int i = 50; i >= -50; --i) {
        arr.push_back(i);
        arr.push_back(i);
        expected.push_back(i);
        expected.push_back(i);
    }

    sort(expected.begin(), expected.end());

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

//                               TESTY FLOAT

/**
 * @test Sprawdza sortowanie już posortowanej tablicy typu float.
 */
TEST(MergeSortTest, FloatAlreadySorted) {
    vector<float> arr = { 1.1f, 2.2f, 3.3f };
    vector<float> expected = arr;

    MergeSort<float> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sprawdza sortowanie tablicy typu float posortowanej odwrotnie.
 */
TEST(MergeSortTest, FloatReverseSorted) {
    vector<float> arr = { 3.3f, 2.2f, 1.1f };
    vector<float> expected = { 1.1f, 2.2f, 3.3f };

    MergeSort<float> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sprawdza sortowanie losowych wartości typu float.
 */
TEST(MergeSortTest, FloatRandomArray) {
    vector<float> arr = { 3.2f, 1.1f, 2.8f };
    vector<float> expected = { 1.1f, 2.8f, 3.2f };

    MergeSort<float> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie mieszanki wartości dodatnich i ujemnych typu float.
 */
TEST(MergeSortTest, FloatNegativeAndPositive) {
    vector<float> arr = { -1.5f, 3.2f, 0.0f, -2.7f };
    vector<float> expected = { -2.7f, -1.5f, 0.0f, 3.2f };

    MergeSort<float> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie tablicy float zawierającej duplikaty.
 */
TEST(MergeSortTest, FloatDuplicates) {
    vector<float> arr = { 1.1f, 2.2f, 1.1f, 3.3f };
    vector<float> expected = { 1.1f, 1.1f, 2.2f, 3.3f };

    MergeSort<float> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie większej tablicy typu float.
 */
TEST(MergeSortTest, FloatLargeArray) {
    vector<float> arr;
    vector<float> expected;

    for (int i = 0; i < 100; i++) {
        float val = (i * 0.1f);
        arr.push_back(val);
        expected.push_back(val);
    }

    random_shuffle(arr.begin(), arr.end());
    sort(expected.begin(), expected.end());

    MergeSort<float> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

//                               TESTY DOUBLE

/**
 * @test Sprawdza sortowanie już posortowanej tablicy typu double.
 */
TEST(MergeSortTest, DoubleAlreadySorted) {
    vector<double> arr = { 1.11, 2.22, 3.33 };
    vector<double> expected = arr;

    MergeSort<double> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sprawdza sortowanie tablicy typu double posortowanej odwrotnie.
 */
TEST(MergeSortTest, DoubleReverseSorted) {
    vector<double> arr = { 3.33, 2.22, 1.11 };
    vector<double> expected = { 1.11, 2.22, 3.33 };

    MergeSort<double> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie losowej tablicy wartości typu double.
 */
TEST(MergeSortTest, DoubleRandomArray) {
    vector<double> arr = { 3.25, 1.12, 2.89 };
    vector<double> expected = { 1.12, 2.89, 3.25 };

    MergeSort<double> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie tablicy double zawierającej liczby dodatnie i ujemne.
 */
TEST(MergeSortTest, DoubleNegativeAndPositive) {
    vector<double> arr = { -2.5, 0.0, 4.7, -1.1 };
    vector<double> expected = { -2.5, -1.1, 0.0, 4.7 };

    MergeSort<double> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie tablicy double zawierającej duplikaty.
 */
TEST(MergeSortTest, DoubleDuplicates) {
    vector<double> arr = { 1.11, 2.22, 1.11, 3.33 };
    vector<double> expected = { 1.11, 1.11, 2.22, 3.33 };

    MergeSort<double> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

/**
 * @test Sortowanie dużej tablicy typu double.
 */
TEST(MergeSortTest, DoubleLargeArray) {
    vector<double> arr;
    vector<double> expected;

    for (int i = 0; i < 120; i++) {
        double val = (i * 0.05);
        arr.push_back(val);
        expected.push_back(val);
    }

    random_shuffle(arr.begin(), arr.end());
    sort(expected.begin(), expected.end());

    MergeSort<double> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}
