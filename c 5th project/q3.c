//Transpose of 2D Array 
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols], transpose[cols][rows];

    printf("Enter array elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Transpose logic
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    // Print transpose
    printf("The transpose matrix of an array:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
