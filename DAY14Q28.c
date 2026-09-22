#include<stdio.h>

int main (){

//Q28: Write a program to print the product of even numbers from 1 to n.

int n;
int product = 1;
printf("Enter the number : ");
scanf("%d",&n);

for ( int i=2;i<=n;i=i+2){
product= product*i;     
}      printf(" The product is : %d ",product); 
return 0;
}

