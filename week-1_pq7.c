/*7. Write a program to input angles of a triangle
and check whether triangle is valid or not.*/

#include<stdio.h>

int main(){
    float a1, a2, a3, sum;
    printf("Enter the three angles (in degree)\nwith a space in between : ");
    scanf("%f %f %f", &a1, &a2, &a3);
    sum = a1+a2+a3;
    if(sum == 180 && a1>0 && a2>0 && a3>0){
        printf("The triangle is valid");
    }
    else{
        printf("It is not a valid Triangle.");
    }
    return 0;
}
