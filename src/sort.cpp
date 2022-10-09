#include <iostream>

#include "../lib/lib.h"

void bubbleSort(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            if (compare(arr[i], arr[j]) < 0) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void insertionSort(int arr[], int len) {
    for (int i = 1; i < len; ++i) {
        int key = arr[i];

        int j;
        for (j = i - 1; j >= 0 && compare(arr[j], key) > 0; --j) {
            arr[j + 1] = arr[j];
        }

        arr[j + 1] = key;
    }
}

void quickSort(int arr[], int left, int right) {
    int pivot = left;
    int l = left;
    int r = right;

    while (l < r) {
        while (l < right && compare(arr[l], arr[pivot]) <= 0) l++; // Find bigger than pivot
        while (r > left && compare(arr[r], arr[pivot]) >= 0) r--; // Find smaller than pivot

        if (l < r) swap(&arr[l], &arr[r]);
        swap(&arr[pivot], &arr[r]);

        quickSort(arr, left, r - 1);
        quickSort(arr, r + 1, right);
    }
}