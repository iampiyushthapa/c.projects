#include<stdio.h>

int main (){

//Q35: Write a program to print all factors of a given number.

int n;
int factor = 0;
printf("Enter the number : ");
scanf("%d",&n);

int given_number = n ;

for (int i=1; i<=n;i++){
 if (n%i==0){
  printf("%d ",i);
 }
  }  
return 0;
}

