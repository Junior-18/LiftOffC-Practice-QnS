/*6. Write a program to enter the length in centimeters
and convert into meter and kilometer.*/

#include<stdio.h>

int main(){
    float cm, m, km;

    printf("Enter the length in cm : ");
    scanf("%f", &cm);

    m = cm/100;
    km = m/1000;

    printf("The length in metre is %fm \n", m);
    printf("The length in kilometre is %fkm \n", km);
    return 0;
}