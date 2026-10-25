
#include <stdio.h>

int main() {
    // Q69: Find the second largest element in an array.

    int n[100];
    int size;
    int largest;
    int second_largest;
    int temp;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]);
    }
   if(size<2){
    printf("Array must contain at least two elements ");
    return 0;
}
   largest=n[0];
   second_largest=n[1];
   if(second_largest > largest){
    temp = largest;
    largest = second_largest;
    second_largest = temp;
   }

   for(int i = 2;i<size;i++){
   if(n[i]>largest){
    second_largest = largest;
    largest=n[i];
   }else if (n[i]>second_largest){
second_largest = n[i];
   }
   }

printf("The second largest element in the array is : %d ",second_largest);
 
 return 0;
}