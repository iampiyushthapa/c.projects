#include<stdio.h>
#include<math.h>
int main () {

   // Q55: Write a program to print all the prime numbers from 1 to n.

int n;
int trick;
printf("Enter the number up to which prime number will be printed : ");
scanf("%d",&n);

for( int i=2;i<=n;i++){
   int is_prime=1;
   for (int j=2;j<=pow(i,1/2.0);j++){

if ( i%j==0){
   is_prime=0;
   break;
   } 
 }if (is_prime == 1){
   printf("%d ",i);
 }
   }
return 0;
}