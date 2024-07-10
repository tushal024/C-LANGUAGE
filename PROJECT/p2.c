#include<stdio.h>
int main(){
    int my=11;
    for(int row=1;row<=4;row++){
        for(int col=1;col<=row;col++){
            printf("%d ",my);
            my++;
        }
        printf("\n");
    }
}