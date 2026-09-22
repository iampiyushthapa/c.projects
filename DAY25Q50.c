#include<stdio.h>
int main () {

   /*Q50: Write a program to print the following pattern:

*****
 ****
  ***
   **
    *

*/
int i ;
int j ;

for( i =1;i<=5;i++){
   for(j=5;j>=6-i;j--){
      printf(" ");}

     for (j=5;j>=i;j--) {
      printf("*");
   }
   printf("\n");
}
return 0;
}