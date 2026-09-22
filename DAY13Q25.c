#include<stdio.h>

int main (){

   // Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

int a;
int b;
char operation;
printf("Enter number a : ");
scanf("%d",&a);
printf("Enter number b : ");
scanf("%d",&b);
printf("Enter operator :");
scanf(" %c",& operation);

switch (operation)
{
case '+':printf("the sum is : %d",a+b);
       break;
case '-': printf("The diference is :%d",a-b);
       break;
case '*': printf("The product is : %d",a*b);
       break;
case '/': printf("The quotinet is : %d",a/b);
       break; 
case '%': printf("The quotinet is : %d",a%b);
       break;
default:printf("invalid operator");
       break;
}
return 0;
}
