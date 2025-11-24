#include "pch.h"
#include "gtest/gtest.h"
#include "MergeSort.h"
#include <vector>

using namespace std;

TEST(MergeSortTest, AlreadySorted) {
    vector<int> arr = { 1, 2, 3, 4, 5 };
    vector<int> expected = arr;

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, ReverseSorted) {
    vector<int> arr = { 5, 4, 3, 2, 1 };
    vector<int> expected = { 1, 2, 3, 4, 5 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, RandomArray) {
    vector<int> arr = { 3, 1, 4, 5, 2 };
    vector<int> expected = { 1, 2, 3, 4, 5 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, OnlyNegative) {
    vector<int> arr = { -3, -1, -4, -2 };
    vector<int> expected = { -4, -3, -2, -1 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, NegativeAndPositive) {
    vector<int> arr = { 3, -1, -4, 2, 0 };
    vector<int> expected = { -4, -1, 0, 2, 3 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, EmptyArray) {
    vector<int> arr;
    vector<int> expected;

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, SingleElement) {
    vector<int> arr = { 42 };
    vector<int> expected = { 42 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, Duplicates) {
    vector<int> arr = { 3, 1, 2, 3, 2 };
    vector<int> expected = { 1, 2, 2, 3, 3 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, NegativeWithDuplicates) {
    vector<int> arr = { -1, -3, -1, -2 };
    vector<int> expected = { -3, -2, -1, -1 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, MixedWithDuplicates) {
    vector<int> arr = { 3, -1, 2, -1, 3, 0 };
    vector<int> expected = { -1, -1, 0, 2, 3, 3 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, TwoElementsSorted) {
    vector<int> arr = { 1, 2 };
    vector<int> expected = { 1, 2 };

    MergeSort<int> sorter;
    sorter.sort(arr);

    EXPECT_EQ(arr, expected);
}

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