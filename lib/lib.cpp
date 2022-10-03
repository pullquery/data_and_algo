#include <iostream>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int compare(int x, int y) {
    return x - y;
}

int generate(int arr[], int len) {
    srand(time(0));
    for (int i = 0; i < len; ++i) {
        arr[i] = rand() % 9 + 1;
    }
}

int print(int arr[], int len) {
    std::cout << "{ ";
    for (int i = 0; i < len; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "}" << std::endl;
}