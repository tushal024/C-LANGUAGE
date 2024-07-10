#include<stdio.h>
int main(){
    
    int num=11;
    for(int row = 4; row>=1; row--){
        for(int col=row; col<=4; col++){
            printf("%d ",num);
            num++;
        }
        
        printf("\n");
        
    }
}
