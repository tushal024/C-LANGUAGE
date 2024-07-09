#include<stdio.h>
int main(){

    int num ,a=1;

    printf("enter any number: ");
    scanf("%d",&num);

    while (a <= num)
    {

        if(a%2!=0){
        printf("%d\n",a);
           
        }
        a++;
    }
    
}