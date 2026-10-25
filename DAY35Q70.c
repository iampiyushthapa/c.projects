
#include <stdio.h>

int main() {
    // Q70: Rotate an array to the right by k positions.

    int n[100];
    int rotated[100];
    int size;
    int position;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]);
    }

     printf("Enter the mumber of positions to rotate : ");
    scanf("%d", &position);
    position = position  % size;

    for(int i=0;i <size;i++){
  rotated[(i + position) % size] = n[i];
    }

  printf("The array after rotation is : " );
  for (int i = 0; i < size; i++) {
  printf("%d ", rotated[i]);
}
 return 0;
}