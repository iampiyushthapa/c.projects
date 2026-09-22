#include<stdio.h>

int main (){

// Q32: Write a program to check if a number is a palindrome.

int n;
int reverse = 0;
int digit ;
printf("Enter the number : ");
scanf("%d",&n);
int given_number = n ;
for (;n>0; n =n/10){
 
 digit = n%10;
reverse = reverse *10 + digit;
  }   

if (given_number == reverse){
  printf("The number is a palindrome");
}else {
  printf("The number is not a palindrome");
}
return 0;
}

