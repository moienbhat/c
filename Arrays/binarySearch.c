#include <stdio.h>
int main() {
    int n,i,x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);
      int low = 0, high = n - 1, mid, found = 0, index = -1;
    
    while (low <= high) {
        mid = (low + high) / 2;
          if (arr[mid] == x) {
            found = 1;
            index = mid;
            break;
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (found) {
        printf("%d found at index %d\n", x, index+1);
    } else {
        printf("%d not found in the array\n", x);
    }
    
    return 0;
}
