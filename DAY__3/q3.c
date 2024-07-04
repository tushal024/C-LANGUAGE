#include<stdio.h>
int main(){

    int num ,a=1;

    printf("enter any number: ");
    scanf("%d",&num);

    while (a <= num)
    {
        printf("%d\n",a);
        a++;
    }
    
}