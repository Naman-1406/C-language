//Sum of Elements in Row & Column of 2D Array
#include <stdio.h>

int main() {
    int rows, cols, i, j, row_num, col_num, row_sum = 0, col_sum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input 
    printf("Enter array elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Input for row and column number
    printf("Enter row number (0 to %d): ", rows - 1);
    scanf("%d", &row_num);
    printf("Enter column number (0 to %d): ", cols - 1);
    scanf("%d", &col_num);

    // Sum of row
    printf("Elements of row %d: ", row_num);
    for (j = 0; j < cols; j++) {
        printf("%d ", arr[row_num][j]);
        row_sum += arr[row_num][j];
    }
    printf("\nThe sum of row = %d\n", row_sum);

    // Sum of column
    printf("Elements of column %d: ", col_num);
    for (i = 0; i < rows; i++) {
        printf("%d ", arr[i][col_num]);
        col_sum += arr[i][col_num];
    }
    printf("\nThe sum of column = %d\n", col_sum);

    return 0;
}
