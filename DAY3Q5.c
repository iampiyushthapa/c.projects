#include<stdio.h>
int main (){

    //Q5: Write a program to convert temperature from Celsius to Fahrenheit.

    int T;
    printf("Enter temperature(in celsius) T :");
    scanf("%d",&T);
    float fahrenheit = (T*9/5.0) + 32;

printf("The temperature in fahrenheit is : %f\n",fahrenheit);
return 0;
}

                   