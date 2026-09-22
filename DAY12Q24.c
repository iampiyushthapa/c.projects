#include<stdio.h>

int main (){

    /*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/

int u;
int units = u;
printf("Enter units: ");
scanf("%d",&u);

if (u >0 && u<=100){
     int bill =5*u;
       printf("The electricity bill is Rs.%d",bill);}

else if (u >100 && u<=200){
        int bill =(5 * 100) + ((u - 100)*7);
       printf("The electricity bill is Rs.%d",bill);} 

else if (u >200 && u<=300){
        int bill =(5 * 100) + (7 * 100) + ((u - 200)*10);
       printf("The electricity bill is Rs.%d",bill);}

else if (u >300){ 
     int bill =(5 * 100) + (7 * 100) + (10* 100) + (u-300)*12;
       printf("The electricity bill is Rs.%d",bill);}
else{
       printf("");}
       
return 0;
}

