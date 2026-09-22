#include<stdio.h>
int main () {
   // Q42: Write a program to check if a number is a perfect number.

int n;
int sum = 0;
printf("enter the number :");
scanf("%d",&n);
for(int i=1;i<n;i++){ 
    if(n%i==0){
        sum = sum + i;
    }else {
        sum = sum ;}
}

if (sum== n){
printf("The number is a perfect number");}
else {
    printf("The number is not a perfect number");
}
return 0;
}