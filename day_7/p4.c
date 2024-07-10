#include<stdio.h>
int main(){
    
    for(int row=5; row>=1; row--){
        
        
        for(int s=5-row;s>=1;s--){
            printf(" ");
        }
        
        for(int col=1; col<=row; col++){
            
            if(col%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
            // printf("%d",col);
        }
        printf("\n");
    }
}







