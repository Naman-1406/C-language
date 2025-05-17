//negative elements in 1D array
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the array's size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Negative elements from an Array: ");
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
