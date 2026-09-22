#include<stdio.h>
int main () {

   //Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.


int n;
float sum = 0;

printf("Enter number of terms : ");
scanf("%d",&n);


for(int i =1;i<=n;i++){
sum = sum + (2.0*i)/(4.0*i-1);
     
}
 printf("Sum of series is:%.1f ",sum);
return 0;
}