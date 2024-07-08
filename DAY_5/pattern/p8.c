// A
// BA
// CBA
// DCBA
// EDCBA


#include<stdio.h>

int main(){
    
    int num=1;
    
    for (int row=1;row<=5; row++){
        for (int col=row; col>=1;col--)
        {
           printf("%d ",num);
           num++;
           
        }
        printf("\n");
        
    }
}