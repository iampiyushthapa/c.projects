
#include <stdio.h>

int main() {
    // Q65: Search in a sorted array using binary search.

    int n[100];
    int size;
    int right,left,middle;
    int search;
    int found = -1;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter  sorted elements of array: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]);
    }

   printf("Enter elements to search :");
   scanf("%d",& search);
    
   left=0;
   right=size-1;
   for(;left<=right; ){
    middle= (left+right)/2;
   

   if(n[middle]==search){
    found = middle;
    break;
   } else if(search>n[middle]){
    left=middle +1;
   }else{
    right=middle-1;
   }
}

if(found!=-1){
    printf("found at index : %d",found);
}else{
    printf("-1");
}
 return 0;
}