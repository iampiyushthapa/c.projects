#include<stdio.h>

int main (){

//Q33: Write a program to check if a number is an Armstrong number.

int n;
int digit ;
int armstrong_number = 0;
printf("Enter the number : ");
scanf("%d",&n);
int given_number = n ;
for (;n>0; n =n/10){
 
 digit = n%10;
armstrong_number = armstrong_number + digit*digit*digit;
  }   

if (given_number == armstrong_number ){
  printf("The number is a Armstrong number");
}else {
  printf("The number is not a Armstrong number");
}
return 0;
}

