//LOOPS
/*3. Write a C program to print all
ASCII characters with their values.*/

#include<stdio.h>

int main(){
    int i;
    for(i=0; i<=255; i++){
        printf("%c having ASCII value %d\n", i, i);
    }
    return 0;
}