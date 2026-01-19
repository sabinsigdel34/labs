#include<stdio.h>
#include<conio.h>
void main() {
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    int max1 = a>b?a:b;
    int max2 = max1>c?max1:c;
    printf("greatest number = %d",max2);
    getch();
}