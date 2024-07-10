
#include<stdio.h>
int main(){
    
   for(int row=1;row<=5;row++){
       
      for(int s= row-1;s>=1;s--){
          printf(" ");
      }
       
       for(int col=5;col>=row;col--){
           
       
      printf("%d",col);
       
   }
       
       
      
   printf("\n");
       
   }
}
