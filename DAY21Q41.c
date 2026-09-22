#include<stdio.h>
int main () {
   // Q41: Write a program to swap the first and last digit of a number.

int n;
int last;
int original;
int first;
int position = 1;
int answer ;
printf("enter the number :");
scanf("%d",&n);
original = n;
last = n%10; 
for( ;n>=10;n=n/10){ 
    position = position*10;
}

first = original/position;
answer = last * position + (original % position - last) + first;


printf("After swapping the first and last digit of the number : %d",answer);

return 0;
}