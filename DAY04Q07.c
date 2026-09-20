#include<stdio.h>
int main (){

    //Q7: Write a program to swap two numbers without using a third variable.

    int a ;
    int b ;
    printf("Enter number a:");
    scanf("%d",&a);
    printf("Enter number b:");
    scanf("%d",&b);
    a= a*b;
    b=a/b;
    a=a/b;
printf("The numbers after swapping are : %d  and %d ",a,b);
return 0;
}


                   
