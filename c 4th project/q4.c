// Inverted Left Half Triangle
#include <stdio.h>
int main() {
    for (int i = 5; i >= 1; i--) {
        for (int s = 5; s > i; s--)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("%d", j % 2);
        printf("\n");
    }
    return 0;
}
