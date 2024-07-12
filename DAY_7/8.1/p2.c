#include<stdio.h>
int main(){

    int size,avg=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int a[size];

    for(int i=0;i<size;i++){
        printf("Enter the value of %d : ",i);
        scanf("%d",&a[i]);    
    }
     for(int i=0;i<size;i++){
        avg= avg + a[i];
     }
        printf("average of this array: %d",avg/size);
}