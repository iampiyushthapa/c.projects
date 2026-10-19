
#include <stdio.h>

int main() {
    // Q58: Find the maximum and minimum element in an array.

    int n[100];
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]);
    }
    
    int max =n [0];
    int min =n [0];

    for (int i = 0; i < size; i++) {
        if(n[i]>n[0]){
            max = n[i];
        }
    } 

    for (int i = 0; i < size; i++) {
        if(n[i]<n[0]){
           min = n[i];
        }
    }
    
  printf("Maximum element of the array is: %d \n",max);
  printf("Minimum element of the array is: %d ",min);
    return 0;
}
