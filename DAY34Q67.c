
#include <stdio.h>

int main() {
    // Q67: Insert an element in an array at a given position.

    int n[100];
    int size;
    int insert;
    int position;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter sorted elements of array: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]);
    }

printf("Enter index of element to insert :");
   scanf("%d",& position);

   printf("Enter elements to insert :");
   scanf("%d",& insert);
    
for(int i = size;i>position;i--){
n[i] = n[i-1];
}
n[position] = insert;
size ++;

printf("array after insertion of element : ");
 
for(int i = 0;i<size; i++){
    printf("%d ",n[i]);
}

 return 0;
}