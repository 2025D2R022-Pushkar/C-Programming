#include <stdio.h>

void insertionSort(int arr[], int n) {
    int current, value, prev;

    for (current = 1; current < n; current++) {
        value = arr[current];
        prev = current - 1;

        while (prev >= 0 && arr[prev] > value) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = value;
    }
}

int main() {
    int n, i;

    printf("Enter the no of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}