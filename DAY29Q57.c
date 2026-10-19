
#include <stdio.h>

int main() {
    // Q57: Find the sum of array elements.

    int n[100];
    int size;
    int sum = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < size; i++) {
        sum = sum +n[i];
    }
  printf("Sum of the elements of the array is: %d ",sum);

    return 0;
}
