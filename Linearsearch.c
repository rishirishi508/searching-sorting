#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

int main() {
    int arr[] = {4, 2, 9, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    int result = linearSearch(arr, n, key);
    if (result != -1)
        printf("Found at index %d", result);
    else
        printf("Not found");
}
