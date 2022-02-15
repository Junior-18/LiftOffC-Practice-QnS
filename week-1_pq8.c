/*8. Write a C program to check whether the triangle is
equilateral, isoscales or scalene triangle*/

#include<stdio.h>

int main(){

//Using Sides:--

    // float s1, s2, s3;
    // printf("Enter the length of the three sides of the triangle in cm :\n");
    // scanf("%f %f %f", &s1, &s2, &s3);
    // switch(s1==s2 && s2==s3){
    //     case 1:
    //     printf("It is an equilateral triangle.");
    //     break;
    //     case 0:
    //     switch(s1==s2 || s2==s3 || s1==s3){
    //         case 1:
    //         printf("It is an isoscales triangle.");
    //         break;
    //         case 0:
    //         printf("It is an scalene triangle.");
    //         break;
    //     }
    // }

//Using Angles:--

    float a1, a2, a3, sum;
    printf("Enter the three angles of the triangle in degree :\n");
    scanf("%f %f %f", &a1, &a2, &a3);
    sum =a1+a2+a3;
    if(sum == 180 && a1>0 && a2>0 && a3>0){
        switch (a1 == a2 && a2 == a3)
        {
        case 1:
            printf("It is an equilateral triangle.");
            break;
        case 0:
            switch (a1 == a2 || a2 == a3 || a1 == a3)
            {
            case 1:
                printf("It is an isoscales triangle.");
                break;
            case 0:
                printf("It is an scalene triangle.");
                break;
            }
        }
    }
    else{
        printf("The triangle is invalid.");
    }
    return 0;
}
