#include<stdio.h>
int main (){

//Q39: Write a program to find the product of odd digits of a number.

int digit = 0;
int n;
int product = 1;
int sum =0;
printf("Enter number n: ");
scanf("%d",&n);

for(;n>0 ;n=n/10){
digit = n % 10;
if(digit%2==0){
product = product;
}else {
    product = product *digit ;
}
}
printf("The product is : %d",product);
return 0;
}