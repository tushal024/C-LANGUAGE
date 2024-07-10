#include<stdio.h>
int main(){
    
    for(int row=1; row<=5; row++){
        for(int col=1; col<=row; col++){
            
          printf("%d",col);
        }
          for(int s =(5-row)*2 ; s>=1; s--){
            printf(" ");
        }
        
        for(int coll=row; coll>=1; coll--){
            printf("%d",coll);
        }
        printf("\n");
    }
}







