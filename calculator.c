#include <stdio.h>

int main() {
    int score;
    char grade;



    
    printf("Enter your score (out of 100): ");
    scanf("%d", &score);

    if (score >= 96)
        grade = 'A';
    else if (score >= 81)
        grade = 'B';
    else if (score >= 77)
        grade = 'C';
    else if (score >= 69)
        grade = 'D';
    else if (score >= 58)
        grade = 'E';
    else
        grade = 'F';

    printf("Your grade is %c\n", grade);

       

    switch (grade) {
        case 'A':
            printf("Excellent work\n");
            break;
        case 'B':
            printf("Well done\n");
            break;
        case 'C':
            printf("Good job\n");
            break;
        case 'D':
            printf("You passed. You could do better.\n");
            break;
        case 'E':
            printf("You passed. But you could do better.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }


    if (grade != 'F') {
        printf("Congratulations You are eligible for the next level.\n");
    } else {
        printf("Please try again next time.\n");
    }

return 0;
}