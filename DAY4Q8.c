#include<stdio.h>
int main (){

    //Q8: Write a program to find and display the sum of the first n natural numbers.

    int n;
    printf("Enter number of terms :");
    scanf("%d",&n);
    int sum = n*(n+1)/2 ;
printf("The sum of first n natural numbers is : %d ",sum);
return 0;
}


                   