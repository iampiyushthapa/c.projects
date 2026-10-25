
#include <stdio.h>

int main() {
    // Q68: Delete an element from an array.

    int n[100];
    int size;
    int delete_position;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]);
    }

   printf("Enter index of  that element to delete :");
   scanf("%d",& delete_position);
 
   for(int i = delete_position;i<size-1;i++){
   n[i] = n[i+1];
}
size --;
printf("array after deletion of element : ");
 
for(int i = 0;i<size; i++){
    printf("%d ",n[i]);
}

 return 0;
}