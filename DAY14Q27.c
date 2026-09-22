#include<stdio.h>

int main (){

// Q27: Write a program to print the sum of the first n odd numbers.

int n;
int i;
int sum = 0;
printf("Enter the number : ");
scanf("%d",&n);

for (i=1;i<=2*n-1;i=i+2){
       sum= sum + i;     
}      printf(" The sum is : %d ",sum); 
return 0;
}

