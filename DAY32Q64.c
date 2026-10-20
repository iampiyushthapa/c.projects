
#include <stdio.h>

int main() {
    // Q64: Find the digit that occurs the most times in an integer number.

   int number;int digit;
   int count[10]={0};
   int highest_count = 0;
   int answer = 0;

    printf("Enter the integer: ");
    scanf("%d", &number);

 if (number==0){
    count[0] = 1;
 }

   for(;number>0;number=number/10){
    digit=number%10;
    count[digit]++;
   }
   for(int i = 0;i<10;i++){
 if(count[i]> highest_count){
    highest_count=count[i];
    answer = i;
 }
   }
  printf("The digit that occurs the most times in an integer number is : %d",answer);
 return 0;
}