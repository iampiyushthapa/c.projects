#include<stdio.h>
int main (){

    //Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

    int n;
printf("Enter the year:");
scanf("%d",&n);

if (n % 4 == 0){

    if(n % 100 ==0){
        if(n%400==0){ 
            printf("It is a leap year");
         } else{printf("It is not a leap year");
        }
  }else
printf("It is a leap year");
}
else {
 printf("It is not a leap year");
}
return 0;
}
