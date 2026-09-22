#include <stdio.h>

int main() {

   // Q40: Write a program to find the 1’s complement of a binary number and print it.

    int digit = 0;
    int n;
    int reverse = 0;

    printf("Enter binary number(0|1): ");
    scanf("%d", &n);

    for(; n > 0; n = n / 10) {

        digit = n % 10;

        if(digit == 0) {
            reverse = reverse * 10 + 1;
        }
        else {
            reverse = reverse * 10 + 0;
        }
    }

    printf("The 1's complement is: ");

    for(; reverse > 0; reverse = reverse / 10) {
        digit = reverse % 10;
        printf("%d", digit);
    }

    return 0;
}