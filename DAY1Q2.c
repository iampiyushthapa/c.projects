#include<stdio.h>
int main (){

    //Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

    int a;
    int b;
    printf("Enter number a :");
    scanf("%d",&a);
    printf("Enter number b :");
    scanf("%d",&b);
   int sum = a + b ;
   int difference = a-b ;
   int product = a*b ;
   int quotient = a/b ;
printf("The sum is : %d\n",sum);
printf("The difference is %d\n",difference);
printf("The product is : %d\n",product);
printf("The quotient is : %d",quotient);
return 0;
}

                   