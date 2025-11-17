#include <stdio.h>

void findMaxElement(int arr[], int n) {
    int i, max, index;
    
    max = arr[0];
    index = 0;
    
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    
    printf("Maximum element is %d at index %d\n", max, index);
}

int main() {
    int n, i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    findMaxElement(arr, n);
    
    return 0;
}