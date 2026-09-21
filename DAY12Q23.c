#include<stdio.h>

int main (){

    /*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled. 
 */
int l;
printf("Enter late days: ");
scanf("%d",&l);

if (l >0 && l<=5){
     int library_fine =2*l;
       printf("The fine is %d",library_fine);}

else if (l >5 && l<=10){
        int library_fine =(5 * 2) + ((l - 5)*4);
       printf("The fine is %d",library_fine);} 

else if (l >10 && l<=30){
        int library_fine =(5 * 2) + (5 * 4) + ((l - 10)*6);
       printf("The fine is %d",library_fine);}

else if (l >30 ){
       printf("Membership cancelled");}
       
else {
       printf("invalid late days");
}
return 0;
}
