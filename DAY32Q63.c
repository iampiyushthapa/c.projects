
#include <stdio.h>

int main() {
    // Q63: Merge two arrays.

    int n1[100];int n2[100];
    int size1;int size2;
    int n[200];
    int size;
   
    printf("Enter the size of array: ");
    scanf("%d", &size1);

    printf("Enter elements of array: ");

    for (int i = 0; i < size1; i++) {
        scanf("%d", &n1[i]);
    }
   
    printf("Enter the size of array: ");
    scanf("%d", &size2);

    printf("Enter elements of array: ");

    for (int i = 0; i < size2; i++) {
        scanf("%d", &n2[i]);
    }
   for (int i = 0; i < size1; i++) {
        n[i]=n1[i];
    }
    for (int i = 0; i < size2; i++) {
        n[size1+i]=n2[i];
    }
   printf("The merged array : ");
    size= size1 + size2;
    for (int i = 0; i < size; i++) {
        printf("%d ",n[i]);
    }
   
 return 0;
}