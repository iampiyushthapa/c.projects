
#include <stdio.h>

int main() {
    //  Q66: Insert an element in a sorted array at the appropriate position.

    int n[100];
    int size;
    int right,left,middle;
    int insert;
    int position;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter sorted elements of array: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]);
    }

   printf("Enter elements to insert :");
   scanf("%d",& insert);
    
   left=0;
   right=size;
   while(left<right){
    middle= (left+right)/2;
   
   if(insert>n[middle]){
    left=middle +1;
   }else{
    right=middle;
   }
}
position=left;
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