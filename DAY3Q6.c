#include<stdio.h>
int main (){

    //Q6: Write a program to swap two num ers using a third variable.


    int a ;
    int b ;
    int c;
    printf("Enter number a:");
    scanf("%d",&a);
    printf("Enter number b:");
    scanf("%d",&b);
    c =a;
    a =b;
    b = c;

printf("The numbers after swapping are : %d  and %d ",a,b);
return 0;
}


                   