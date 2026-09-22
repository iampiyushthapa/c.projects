#include<stdio.h>
int main () {

   /* Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



*/
int i ;
int j ;

for( i=1;i<=3;i++){
   
   for(j=1;j<=2*i-1;j++){
printf("*\n");

   }printf("\n");

}

for(i=2;i>=1;i--){

   for(j=1;j<=2*i-1;j++){
      printf("*\n");
   }printf("\n");
}

return 0;
}