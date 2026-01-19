#include<stdio.h>
#include<conio.h>
void main() {
    int a;
    printf("enter a number");
    scanf("%d",&a);
    printf(a>=0?"it is positive":"it is negative");
    getch();
}