#include<stdio.h>
int main () {

   // Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

int n;
float sum = 0;

printf("Enter number of terms : ");
scanf("%d",&n);


for(int i =1;i<=n;i++){
    if(i==1){
        sum=sum+1;
    }else { sum = sum + (2*i-1)/(2.0*i);
     }  
}
 printf("Sum of series is:%.1f ",sum);
return 0;
}