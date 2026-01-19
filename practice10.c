#include<stdio.h>
#include<conio.h>
void main() {
    int a,b;

    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    int sum = a>b?a+b:a*b;
    printf("sum = %d",sum);
    getch();
}