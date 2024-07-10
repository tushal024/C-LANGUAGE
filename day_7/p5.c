#include<stdio.h>
int main(){
    
    for(int row=5; row>=1; row--){
        
        for(int s= row-1; s>=1; s--){
            printf(" ");
        }
        
      
        for(int col=row; col<=5; col++){
            
          printf("%d",col);
          
         
        }
        
        for(int coll=4; coll>=row; coll--){
            printf("%d",coll);
        }
        printf("\n");
    }
}






