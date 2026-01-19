#include <stdio.h>
#include <conio.h>

void main() {
    float total,percentage;
    float m1,m2,m3,m4,m5;
    printf("Enter 5 marks : ");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;
    printf("total : %f",total);
    printf("Percentage : %.2f",percentage);
    getch();
}