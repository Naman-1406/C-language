// Custom Numeric Pattern
#include <stdio.h>
int main() {
    int space;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        space = (5 - i) * 2;
        for (int j = 1; j <= space; j++) {
            printf("  ");
        }

        for (int j = i; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
