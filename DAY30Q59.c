
#include <stdio.h>

int main() {
    // Q58: Count even and odd numbers in an array.

    int n[100];
    int size;
    int even_count =0;
    int odd_count =0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]);
    }
    
    for (int i = 0; i < size; i++) {
        if(n[i]%2 == 0){
            even_count = even_count +1;
        }else{
           odd_count = odd_count +1;
        }
    } 

  printf("Even numbers : %d \n",even_count);
  printf("Odd numbers: %d ", odd_count);
    return 0;
}
