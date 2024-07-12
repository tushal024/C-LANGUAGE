#include<stdio.h>
int main(){
    int size;
     
     printf("Enter size of array: ");
     scanf("%d",&size);

     int a[size],b[size],c[size];

    for(int i=0;i<size;i++){
        printf("\nEnter the value of first array: ");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<size;i++){
        printf("\nEnter the value of second array: ");
        scanf("%d",&b[i]);
    }
    for(int i=0;i<size;i++){

        c[i]=a[i]+b[i];

        printf("\n the value of third array is: %d",c[i]);
        // scanf("%d",&a[i]);
    }

}