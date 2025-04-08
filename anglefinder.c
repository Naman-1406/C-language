#include<stdio.h>
int main (){
    int angle1, angle2,angle3;
    // user input

    printf("enter first value:");
    scanf("%d",&angle1);

    printf("enter second value:");
    scanf("%d",&angle2);

    // find the angle3
    angle3=180-(angle1+angle2);

    // output
    printf("enter the angle3:%d\n",angle3);

    return 0;
}