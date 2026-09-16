#include<stdio.h>
#include<math.h>
int main (){

    //Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

    int p;
    int r;
    int t;
printf("Enter principal amount :");
scanf("%d",&p);
printf("Enter rate of interest per year(in percent) :");
scanf("%d",&r);
printf("Enter time (in years) :");
scanf("%d",&t);
float simple_interest = p*r*t/100.0 ;
float  compound_interest = p*pow(1+r/(100.0),t) - p;

printf("The simple interest and compound interest are : %f and %f",simple_interest,compound_interest);
return 0;
}


                   