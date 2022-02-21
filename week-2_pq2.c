//LOOPS
/*2. Write a C program to print all natural numbers
in reverse (from n to 1).*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter a natural number here : \n");
    scanf("%d", &n);
    if(n>0){
        printf("The natural numbers from %d to 1 are : \n", n);
        for(int i=n; i>0; i--){
            printf("%d\n", i);
        }
    }
    else{
        printf("INVALID INPUT");
    }
    return 0;
}