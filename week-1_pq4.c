/*6. Write a C program to check whether an alphabet
is vowel or consonant using switch case.*/

#include<stdio.h>

int main(){
    char alphabet;

    printf("Enter the alphabet : ");
    scanf("%c", &alphabet);

    switch (alphabet)
    {
    case 'a':
        printf("%c is a vowel", alphabet);
        break;
    case 'e':
        printf("%c is a vowel", alphabet);
        break;
    case 'i':
        printf("%c is a vowel", alphabet);
        break;
    case 'o':
        printf("%c is a vowel", alphabet);
        break;
    case 'u':
        printf("%c is a vowel", alphabet);
        break;
    default:
    printf("%c is a consonant", alphabet);
        break;
    }
}