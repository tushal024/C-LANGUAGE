#include<stdio.h>
int main(){

    int a,b,c;

     printf("enter the 1 num: ");
    scanf("%i",&a);

    printf("enter the 2 num: ");
    scanf("%i",&b);

    printf("enter the 3 num: ");
    scanf("%i",&c);
    



    (a < b &&  a < c)? printf("a is min"): (b < a && b < c)? 
    printf("b is min"): printf("c is min");
}