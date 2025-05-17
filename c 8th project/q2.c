// Cubes of 2D Array Elements using Pointer & UDF
#include <stdio.h>

void findCubes(int *arr, int size) {
    for (int i = 0; i < size * size; i++) {
        int val = *(arr + i);
        printf("%d ", val * val * val);
        if ((i + 1) % size == 0)
            printf("\n");
    }
}

int main() {
    int size;
    printf("Enter array's size: ");
    scanf("%d", &size);

    int arr[size][size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Cubes of all elements:\n");
    findCubes(&arr[0][0], size);

    return 0;
}
