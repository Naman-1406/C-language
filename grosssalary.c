#include<stdio.h>
int main(){
    float basesalary,hrasalary,dasalary,tasalary,grosssalary;
    // user input

    printf("enter base salary:");
    scanf("%f",&basesalary);

    printf("enter hrasalary:");
    scanf("%f",&hrasalary);

    printf("enter dasalary:");
    scanf("%f",&dasalary);

    printf("enter tasalary:");
    scanf("%f",&tasalary);

    // calculation of grosssalary
    grosssalary=basesalary+(basesalary*hrasalary/100)+
                (basesalary*dasalary/100)+(basesalary*tasalary/100);

    //   output 
    printf("GROSS salary value:RS.%.2f\n",grosssalary);         


    return 0;
}