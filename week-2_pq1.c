//LOOPS
/*1. Write a C program to print all natural
numbers from 1 to n.*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter a natural number here : \n");
    scanf("%d", &n);
    if(n>0){
        printf("The natural numbers from 1 to %d are : \n", n);
        for(int i=1; i<=n; i++){
            printf("%d\n", i);
        }
    }
    else{
        printf("INVALID INPUT");
    }
    return 0;
}