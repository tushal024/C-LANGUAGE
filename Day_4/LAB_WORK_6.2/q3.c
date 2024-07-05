#include<stdio.h>

int main(){

    int num;

    printf("Enter any number: ");
    scanf("%d",&num);
    do
    {
        if (num%2==0)
        {
        printf("%d\n",num);
        
        }
        num--;
        
    } while (num >=1);
    
}