#include<stdio.h>

int main(){

    int num,n=0;

    printf("Enter any number: ");
    scanf("%d",&num);
    do
    {
        if (n%2==0)
        {
        printf("%d\n",n);
        
        }
        n++;
        
    } while (n <= num);
    
}