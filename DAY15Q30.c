#include<stdio.h>

int main (){

//Q30: Write a program to reverse a given number.

int n;
int digit;
int reverse = 0;
printf("Enter the number : ");
scanf("%d",&n);

for (;n>0;n/10){
digit = n %10;
reverse = reverse *10 + digit;
  }   
 
printf(" The reverse of the given number is : %d ",reverse); 
return 0;
}

