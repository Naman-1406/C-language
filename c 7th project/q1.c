// Menu-Driven Calculator using UDF
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int mod(int a, int b) {
    if (b != 0)
        return a % b;
    else {
        printf("Error: Modulo by zero!\n");
        return 0;
    }
}

int main() {
    int choice, a, b;

    do {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter the first number: ");
            scanf("%d", &a);
            printf("Enter the second number: ");
            scanf("%d", &b);
        }

        switch (choice) {
            case 1:
                printf("Addition of %d and %d is %d\n", a, b, add(a, b));
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n", a, b, subtract(a, b));
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n", a, b, multiply(a, b));
                break;
            case 4:
                printf("Division of %d and %d is %d\n", a, b, divide(a, b));
                break;
            case 5:
                printf("Modulo of %d and %d is %d\n", a, b, mod(a, b));
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}
