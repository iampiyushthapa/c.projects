#include<stdio.h>
int main (){

    //Q11: Write a program to input an integer and check whether it is even or odd using if–else.


    int n;
printf("Enter the number:");
scanf("%d",&n);
if (n%2==0){
    printf("It is an even number");
} else {
    printf("It is an odd number");
}
return 0;
}
