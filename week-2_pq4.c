//LOOPS
/*4. Write a C program to find the first and
last digit of a number.*/

#include<stdio.h>

int main(){
    int num, first, rem, last;
    printf("Enter the number here : \n");
    scanf("%d", &num);
    last = num%10;
    if(num!=0){
        while(num){
        rem=num%10;
        num=num/10;
    }
    printf("The first digit is %d\n", rem);
    printf("The last digit is %d.", last);
    }
    else{
        printf("The first digit is 0 \nThe last digit is 0.");
        }
    return 0;
}