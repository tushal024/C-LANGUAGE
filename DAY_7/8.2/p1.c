#include<stdio.h>
int main(){
    int r_size,c_size,avg=0;
    printf("Enter the size of row: ");
    scanf("%d",&r_size);

    printf("Enter the size of coloum: ");
    scanf("%d",&c_size);

    int a[r_size][c_size];

    for(int i=0;i<r_size;i++){

        for(int p=0;p<c_size;p++){

            printf("enter the value of array : ");
            scanf("%d",&a[i][p]);
          
        }
    
    }
    
    
     for(int i=0;i<r_size;i++){

        for(int p=0;p<c_size;p++){

            // scanf("%d",&a[i][p]);
            
            avg= a[i][p] + avg;
          
        }
        
     
    }
    
    
      int u=c_size*r_size;
            printf("\n the avg of array is : %d",avg/u);
    


}