
#include <stdio.h>

int main() {
    // Q62: Reverse an array without taking extra space.

    int n[100];
    int size;
    int reverse;
    int first_value;
    int second_value;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]);
    }
   
    for (int i = 0; i < size/2; i++) {
       first_value = n[i];
       second_value=n[size-i-1];
       n[i]=second_value;
       n[size-i-1] = first_value;
        } 
    printf("The reverse of the array is : ");
    for (int i = 0; i < size; i++) {
        printf("%d ",n[i]);
    }
   
 return 0;
}