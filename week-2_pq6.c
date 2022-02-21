//LOOPS
/*6. Write a C program to enter a number 
and print its reverse.*/

#include<stdio.h>

int main(){
    int num, temp, rem, rev=0;
    printf("Enter the number here : \n");
    scanf("%d", &num);
    temp = num;
    while(num){
        rem = num%10;
        num = num/10;
        rev = 10*rev+rem;
    }
    printf("The reverse of %d is %d.", temp, rev);
    return 0;
}