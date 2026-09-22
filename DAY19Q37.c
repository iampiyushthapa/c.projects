#include<stdio.h>
int main (){

//Q37: Write a program to find the LCM of two numbers.

int a;
int b;
int hcf = 1;
int i ;
int lcm;
printf("Enter number a : ");
scanf("%d",&a);
printf("Enter number b : ");
scanf("%d",&b);
for(int i =1;i <=a && i<=b;i++){
if (a%i==0 && b%i==0){
    hcf=i;
   }
}
lcm = (a*b)/hcf;
printf("The LCM is %d",lcm);

return 0;
}