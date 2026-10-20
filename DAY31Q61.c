
#include <stdio.h>

int main() {
    // Q61.Q61: Search for an element in an array using linear search.

    int n[100];
    int size;
    int search;
    int found = -1;
    printf("Enter the size of array:\n ");
    scanf("%d", &size);

    printf("Enter elements of array:\n ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]);
    }
    printf("Enter element of array to search : ");
    scanf("%d",&search);
    for (int i = 0; i < size; i++) {
        if(n[i]==search ){
       found = i;
 
        } 
    } 
        if(found!=-1){
             printf(" The element is found at index: %d \n",found);
        }else{
            printf("-1");
        }
   
 return 0;
}