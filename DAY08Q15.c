#include<stdio.h>
int main (){

    //Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

    char c;
printf("Enter the character:");
scanf("%c",&c);
if  (c>='A'&& c<='Z') {
    printf("It is a uppercase alphabet");}

  else if (c>='a' && c<='z'){
        printf("It is a lowercase alphabet");}
  else if (c>='0' && c<='9' ){
        printf("It is a digit");}
  else {
        printf("It is a special character");}
    
return 0;
}
