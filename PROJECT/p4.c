#include<stdio.h>
int main(){

    for(int row=5;row>=1;row--){
        
        for(int space=5-row;space>=1;space--){
            printf("  ");
        }
        
        for(int col=1;col<=row;col++){
            
            if(col%2==0){
                printf("0 ");
                
            }
            else{
                printf("1 ");
                
            }
           
        }
        printf("\n");
    }
}