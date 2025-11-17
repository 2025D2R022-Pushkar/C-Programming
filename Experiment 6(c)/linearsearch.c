#include <stdio.h>

void linearSearch(int arr[], int size, int target) {
    int i, isFound = 0;
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("%d found at index %d\n", target, i);
            isFound = 1;
            break;
        }
    }
    if (!isFound) {
        printf("%d not found in the array\n", target);
    }
}

int main() {
    int size, i, target;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &target);
    
    linearSearch(arr, size, target);
    
    return 0;
}
