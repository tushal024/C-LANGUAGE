// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
   for(int row=5; row>=1; row--){
     
       for(int col=1; col<=row; col++){
           
           printf("%d",col);
           
       }
       
         for(int space= (5-row)*2; space>=1; space--){
           printf(" ");
       }
       
       
       for(int coll=row;coll>=1;coll--){
           printf("%d",coll);
       }
       
       printf("\n");
   }
}