#include<stdio.h>

int main(){
    int first=-1;
    int sec=1;
    int temp,user;

    printf("Enter any number: ");
    scanf("%d",&user);

    for (int i=1; i<=user; i++)
    {
       temp=first+sec; 
       printf("%d\n",temp);

       first=sec;
       sec=temp; 


       
    }
    
}