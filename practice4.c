#include<stdio.h>
#include<conio.h>
void main() {
    int a , b;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    if (a>b) {
        printf("first number %d is greater",a);
    }
    else {
        printf("second number %d is greater",b);
    }
    getch();
}