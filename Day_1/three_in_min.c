#include<stdio.h>
int main()
{
    float a,b,c,ans;

    printf("enter the first num: ");
    scanf("%f",&a);

    printf("enter the first num: ");
    scanf("%f",&b);

    printf("enter the first num: ");
    scanf("%f",&c);

    (a < b && a < c)? printf("a is min"):  (b < c) ? printf("b is min"): 
    printf("c is min");

} 