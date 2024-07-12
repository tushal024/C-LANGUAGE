// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int size;
  
  printf("Enter size of array: ");
  scanf("%d",&size);
  
  int a[size];
  
  for(int i=0;i<size;i++){
      printf("Enter the %d value of array: ",i);
      scanf("%d",&a[i]);
  }
 

  printf("length of array is : %d",size);
}