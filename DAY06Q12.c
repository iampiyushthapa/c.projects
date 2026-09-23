#include<stdio.h>
int main (){

    //Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

    int n;
printf("Enter the number:");
scanf("%d",&n);
if (n>=0){
    if(n==0){
        printf("The number is zero");
    }else {
        printf("It is a positive number");
    }  
}else {
    printf("It is a negative number");
}
return 0;
}
