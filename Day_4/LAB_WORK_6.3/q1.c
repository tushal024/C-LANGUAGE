#include<stdio.h>

int main(){
    int a,b=0;
    
    printf("enter any num:");
    scanf("%d",&a);
    
    for(int t=1; t<=a; t++ )
    {
        
        b=b+t;
    }
        printf("%d\n",b);
}