
#include<stdio.h>
int main(){
    
   for(int row=1;row<=5;row++){
       
      for(int s= row-1;s>=1;s--){
          printf(" ");
      }
       
       for(int col=row;col<=5;col++){
           
           if(col%2==0){
               printf("0");
               
           }
           else{
               printf("1");
           }
           
       
       
    //   printf("%d",col);
       
   }
       
       
      
   printf("\n");
       
   }
}
