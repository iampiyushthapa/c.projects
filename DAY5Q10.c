#include<stdio.h>
#include<math.h>
int main (){

    //Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

    int t;
printf("Enter  time (in seconds):");
scanf("%d",&t);
int hours = t/(60*60);
int minutes = t/60;
int seconds = t % 60;
printf(" The time after conversion is  %d :%d:%d",hours,minutes,seconds);
return 0;
}


                   