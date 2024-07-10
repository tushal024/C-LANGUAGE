#include<stdio.h>
int main(){
    
    // int num=11;
    for(int row = 5; row>=1; row--){
        
        for(int s=row-1; s>=1;s--){
            printf("- ");
        }
        
        for(int col=row; col<=5; col++){
            printf("%d ",col);
            // num++;
        }
        
        printf("\n");
        
    }
}
