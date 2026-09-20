#include<stdio.h>
int main (){

    //Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

    int a;
    int b;
    printf("Enter length a :");
    scanf("%d",&a);
    printf("Enter breadth b :");
    scanf("%d",&b);
    int area = a*b ;
   int perimeter = 2*(a + b);

printf("The area is : %d\n",area);
printf("The perimeter is : %d\n",perimeter);
return 0;
}

                   
