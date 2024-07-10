#include<stdio.h>
int main(){
    
    // int num=41;
    for(int row = 41; row<=45; row++){
        for(int col=41; col<=row; col++){
            printf("%d ",col);
            // num++;
        }
        
        printf("\n");
        
    }
}
