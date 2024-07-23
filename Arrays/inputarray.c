#include <stdio.h>

int main() {
    int size;
    
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    // Declare an array of given size
    int arr[size];
    
    // Input elements of the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    
    // Print the elements of the array
    printf("Elements of the array are: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
