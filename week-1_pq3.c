/*4. Write a C program to check whether a number
is positive, negative or zero switching using
switch case.*/

#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);

    switch (number < 0)
    {
    case 1:
        printf("%d is negative.", number);
        break;
    case 0:
    {
        switch (number > 0)
        {
        case 1:
            printf("%d is positive.", number);
            break;
        case 0:
            printf("It is Zero.");
            break;

        default:
            printf("wrong input");
        }

        break;
    }
    default:
        printf("wrong input");
    }

    return 0;
}
