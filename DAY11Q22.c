#include<stdio.h>

int main (){

    // Q22: Write a program to find profit or loss percentage given cost price and selling price.

int cost_price;
int selling_price;
int profit;
int loss;
printf("Enter cost price : ");
scanf("%d",&cost_price);
printf("Enter selling price : ");
scanf("%d",&selling_price);

profit = ((selling_price - cost_price)*100)/cost_price;
loss = ((cost_price - selling_price)*100)/cost_price;

if (profit >0){
       printf("Profit\n");
       printf("Profit is %d%%",profit);}
else if (loss >0){
       printf("Loss\n");
       printf("Loss is %d%%",loss);
} else {
       printf("No profit,No loss");
}
return 0;
}
