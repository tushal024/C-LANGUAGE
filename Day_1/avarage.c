#include<stdio.h>
int main(){

    float a,b,x,y,ans;

    printf("enter weight item1: ");
    scanf("%f",&a);

    printf("enter weight item2: ");
    scanf("%f",&b);
    
    printf("enter no of item1: ");
    scanf("%f",&x);
    
    printf("enter no of item2: ");
    scanf("%f",&y);
    
    ans= ((a*x)+(b*y))/(x+y);

    printf("ans : %.2f",ans);

    return 0;
}