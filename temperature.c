#include <stdio.h>

int main (){
    float celsius,fahrenheit;
    // input
  printf("enter temperature value:");
  scanf("%f",&celsius);

//   convert to fahrenheit  
fahrenheit=(9.0/5.0)*celsius+32;

// output
printf("temperature in fahrenheit:%.2f      \n",fahrenheit);

 return 0;

}