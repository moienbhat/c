#include <stdio.h>

int main() {
    int size, key;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
  
    int arr[size];
    
    // Input elements of the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    
    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    // Perform the search
    int found = 0; // Flag to indicate if key is found
    int index = -1; // Variable to store index of key if found
    
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            found = 1;
            index = i+1;
            break; // Exit the loop once key is found
        }
    }
    
    // Output the result
    if (found) {
        printf("%d found at index %d\n", key, index);
    } else {
        printf("%d not found in the array\n", key);
    }
    
    return 0;
}
