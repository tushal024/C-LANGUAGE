
// 10101
// 1010
// 101
// 10
// 1

#include<stdio.h>

int main(){
    for (int row=1;row<=5; row++){
        for (int col=5; col>=row;col--)
        {
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