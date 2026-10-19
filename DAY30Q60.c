
#include <stdio.h>

int main() {
    // Q60: Count positive, negative, and zero elements in an array.

    int n[100];
    int size;
    int positive_elements = 0;
    int negative_elements = 0;
    int zero_elements = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]);
    }
    
    for (int i = 0; i < size; i++) {
        if(n[i]>0 ){
            positive_elements=  positive_elements +1;
        }
         if(n[i]<0 ){
            negative_elements= negative_elements +1;
        }
         if(n[i]==0 ){
            zero_elements= zero_elements +1;
        }
    } 
  printf(" The number of positive elements : %d \n",positive_elements);
  printf(" The number of negative_elements : %d \n",negative_elements);
  printf(" The number of zero elements : %d \n",zero_elements);
    return 0;
}
