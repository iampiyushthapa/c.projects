#include<stdio.h>
int main (){

    //Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

    char c;
printf("Enter the character:");
scanf("%c",&c);
if (c== 'a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
    printf("It is a vowel");
}
    else{if( (c>='A'&& c<='Z') || (c>='a' && c<='z')){
        printf("It is an consonent");
    }else {
        printf("Neither a vowel nor a consonent");
    }
}
return 0;
}
