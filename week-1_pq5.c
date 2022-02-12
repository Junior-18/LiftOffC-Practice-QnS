/*5. Write a program to enter marks of five subjects and
calculate total, average and percentage.*/

#include<stdio.h>

int main(){
    int m1, m2, m3, m4, m5, fm, total;
    float avg, p, percentage;

    printf("Enter the marks of the five subjects\nwith space in between : ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    printf("Full Marks (in total) : ");
    scanf("%d", &fm);
    
    total = m1+m2+m3+m4+m5;
    avg = (float)total/5;
    p = (float)total/fm;
    percentage = p*100;

    printf("Total marks secured : %d\n", total);   
    printf("Average mark secured : %f\n", avg);   
    printf("Percentage secured : %f\n", percentage);   

    return 0;
}