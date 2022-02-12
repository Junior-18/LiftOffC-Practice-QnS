/*1. Write a C program to check whether a number
is negative, positive or zero.*/

#include<stdio.h>

int main(){
    int number;
    
    printf("Enter the Number here : ");
    scanf("%d", &number);

    if (number<0)
    {
        printf("%d is negative.", number);
    }
    else if(number>0)
    {
        printf("%d is positive.", number);
    }
    else
    {
        printf("It is Zero.");
    }
    
    return 0;
}
