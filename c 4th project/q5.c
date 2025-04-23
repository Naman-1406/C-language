// Full Pyramid Pattern
#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        for (int s = 5; s > i; s--)
            printf(" ");
        for (int j = 5 - i + 1; j <= 5; j++)
            printf("%d", j);
        for (int j = 4; j >= 5 - i + 1; j--)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}
