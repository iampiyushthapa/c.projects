#include<stdio.h>
int main (){

//Q38: Write a program to find the sum of digits of a number.

int i ;
int digit = 0;
int n;
int sum = 0;

printf("Enter number n: ");
scanf("%d",&n);

for(;n>0 ;n=n/10){
digit = n % 10;
sum = sum + digit;
}
printf("The sum is : %d",sum);
return 0;
}
