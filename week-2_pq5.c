//LOOPS
/*5. Write a C program to calculate the sum
of digits of a number.*/

#include<stdio.h>

int main(){
    int num, rem, val=0;
    printf("Enter the number here : \n");
    scanf("%d", &num);
    while(num){
        rem = num%10;
        num = num/10;
        val = val+rem;
    }
    printf("%d", val);
    return 0;
}