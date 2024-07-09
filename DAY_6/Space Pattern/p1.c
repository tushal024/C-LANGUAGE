
#include<stdio.h>
int main(){
    
   for(int row=1;row<=5;row++){
       
       for(int s=5-row;s>=1;s--){
           printf(" ");
       }
       
       for(int col=row;col>=1;col--){
       
       
      printf("%d",col);
       
   }
       
       
      
   printf("\n");
       
   }
}