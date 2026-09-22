#include<stdio.h>

int main (){

//Q29: Write a program to calculate the factorial of a number.


int n;
int factorial = 1;
printf("Enter the number : ");
scanf("%d",&n);

for (int i=1;i<=n;i++){
factorial = factorial*i;
  }   
 
printf(" The factorial is : %d ",factorial); 
return 0;
}

