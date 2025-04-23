#include <stdio.h>

int main() {
    int num, first, last;
    printf("Enter any number: ");
    scanf("%d", &num);

    last = num % 10;

    while (num >= 10) {
        num = num / 10;
    }
    first = num;

    int sum = first + last;
    printf("Sum of first and last digit: %d\n", sum);
return 0;
}