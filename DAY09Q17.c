#include<stdio.h>
#include<math.h>

int main (){

    //Q17: Write a program to find the roots of a quadratic equation and categorize them.

    int a,b,c;
printf("Enter the number a :");
scanf("%d",&a);
printf("Enter the number b :");
scanf("%d",&b);
printf("Enter the number c: ");
scanf("%d",&c);
 int d =  b*b - 4*a*c;     
    if (d>0){
        printf("The roots are real and different\n");
        printf("Roots are %f and %f",(-b+ pow(d,1/2.0))/(2.0*a),(-b- pow(d,1/2.0))/2.0*a);}
    else if (d==0){
    printf("The roots are equal\n");
    printf("Roots are %d and %d",(-b/(2*a)),(-b/(2*a)));}
    else if(d<0){
        printf("The roots are complex");
    }
    
return 0;
}
