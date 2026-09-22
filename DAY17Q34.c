#include<stdio.h>

int main (){

//Q34: Write a program to check if a number is prime.

int n;
int factor = 0;
printf("Enter the number : ");
scanf("%d",&n);

int given_number = n ;

for (int i=1; i<=n;i++){
 if (n%i==0){
  factor=factor + 1;
 }
  }   

if (factor == 2){
  printf("The number is a prime number");
}else {
  printf("The number is not a prime number");
}
return 0;
}

