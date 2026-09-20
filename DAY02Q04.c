#include<stdio.h>
int main (){

    //Q4: Write a program to calculate the area and circumference of a circle given its radius.

    int r;
    float pi = 3.14;
    printf("Enter radius r :");
    scanf("%d",&r);
    float area = pi*r*r ;
   float circumference = 2*pi*r ;

printf("The area is : %f\n",area);
printf("The circumference is : %f\n",circumference);
return 0;
}

                   
