
#include <stdio.h>

int main() {
    // Q56: Read and print elements of a one-dimensional array.

    int n;
    int number[100];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");

    for (int i = 0; i < n; i++) {
        scanf("%d", &number[i]);
    }

    printf("Array elements are: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", number[i]);
    }

    return 0;
}
