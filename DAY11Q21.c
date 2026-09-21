#include<stdio.h>

int main (){

    // Q21: Write a program to display the month name and number of days using switch-case for a given month number.

int month ;
printf("Enter a month (1-12) : ");
scanf("%d",&month);
switch (month){

case 1:printf("January\n");
       printf("No of days : 31");
break;

case 2:printf("February\n");
      printf("No of days : 28");
break;

case 3:printf("March\n");
       printf("No of days : 31");
break;

case 4:printf("April\n");
       printf("No of days : 30");
break;

case 5:printf("May\n");
       printf("No of days : 31");
break;

case 6:printf("June\n");
       printf("No of days : 30");
break;

case 7:printf("July\n");
       printf("No of days : 31");
break;

case 8:printf("August\n");
      printf("No of days : 31");
break;

case 9:printf("September\n");
      printf("No of days : 30");
break;

case 10:printf("October\n");
        printf("No of days : 31");
break;

case 11:printf("November\n");
       printf("No of days : 30");
break;

case 12:printf("December\n");
       printf("No of days : 31");
break;

default:printf("INVALID MONTH ");
}

return 0;
}
