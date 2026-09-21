#include<stdio.h>

int main (){

    // Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

    int a,b,c;
printf("Enter side a :");
scanf("%d",&a);
printf("Enter side b :");
scanf("%d",&b);
printf("Enter side c :");
scanf("%d",&c);
    
    
    if (a==b && b==c){
        printf("An Equilateral triangle");}
      else if (a==b || b==c || a==c){
    printf(" An Isosceles triangle");}
    else {
    printf("A Scalene triangle");}
    
return 0;
}
