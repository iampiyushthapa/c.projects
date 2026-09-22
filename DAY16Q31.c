#include<stdio.h>

int main (){

// Q31: Write a program to take a number as input and print its equivalent binary representation.


int n;
int remainder;
int binary = 0;
int place =1;
printf("Enter the number : ");
scanf("%d",&n);

for (;n>0; n =n/2){
remainder = n %2;
binary = binary + remainder * place;
place = place *10;
  }   
 
printf(" It's equivalent binary representation is : %d ",binary); 
return 0;
}

