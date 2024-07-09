#include<stdio.h>

int main(){

    int s,e;

    printf("enter the starting  year:");
    scanf("%d",&s);

    printf("enter the starting  year:");
    scanf("%d",&e);

    while (s>=e)
    {
        if(s%4==0){

            printf("%d",s);
        }
        s++;
    }
    
}