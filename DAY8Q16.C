#include<stdio.h>
int main (){

    //Q16: Write a program to input three numbers and find the largest among them using if–else.

    int a,b,c;
printf("Enter the number a :");
scanf("%d",&a);
printf("Enter the number b :");
scanf("%d",&b);
printf("Enter the number c:");
scanf("%d",&c);
      
if (a==b && b==c){
      printf("All the three numbers are same"); } 

else if (a>=b && a>=c) {
    printf("The largest among the three is %d",a);}

  else if (b>=a && b>=c){
        printf("The largest among the three is %d",b);}

  else  {
       printf("The largest among the three is %d",c);} 
    
return 0;
}
