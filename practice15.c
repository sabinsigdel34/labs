#include<stdio.h>
#include<conio.h>
void main() {
    int a;
    printf("Enter a year: ");
    scanf("%d",&a);
    if (a%4==0 && a%100!=0 || a%400==0)
        printf("leap");
    else if (a<=0)
        printf("Invalid input");
    else
        printf("not a leap");

    getch();

}