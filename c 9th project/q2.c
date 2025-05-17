// structures and percentage calculation
#include <stdio.h>

int main() {
    int i, phy, chem, math, total;
    float percent;
    char result[10];
    char name[50];

    for (i = 1; i <= 5; i++) {
        printf("\nEnter marks of Student %d:\n", i);
        
        printf("Physics: ");
        scanf("%d", &phy);
        
        printf("Chemistry: ");
        scanf("%d", &chem);
        
        printf("Maths: ");
        scanf("%d", &math);

        total = phy + chem + math;
        percent = total / 3.0;

        if (phy >= 35 && chem >= 35 && math >= 35) {
            sprintf(result, "Pass");
        } else {
            sprintf(result, "Fail");
        }

        printf("\nTotal Marks of Student %d = %d\n", i, total);
        printf("Result = %s\n", result);
        printf("Percentage = %.2f%%\n", percent);
    }

    return 0;
}






