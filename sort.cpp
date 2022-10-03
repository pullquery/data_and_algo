#include <iostream>

#include "lib.h"

void bubbleSort(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            if (compare(arr[i], arr[j]) < 0) {
                swap(&arr[i], &arr[j]);
            }
        }
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

int main() {
    int len = 10;
    int *arr = new int[len]{};

    generate(arr, len);
    print(arr, len);

//    bubbleSort(arr, len);
    quickSort(arr, 0, len - 1);
    print(arr, len);
}