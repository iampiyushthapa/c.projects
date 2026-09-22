#include<stdio.h>
int main () {

   // Q43: Write a program to check if a number is a strong number.

int n;
int sum = 0;
int original;
int factorial=1;
int digit;

printf("enter the number :");
scanf("%d",&n);
original = n;

for (;n>0;n=n/10){
 digit = n%10;
factorial = 1;
for(int i=1;i<=digit;i++){ 
    factorial = factorial*i;
} sum = sum + factorial ;
}


if (sum== original){
printf("The number is a strong number");}
else {
    printf("The number is not a strong number");
}
return 0;
}