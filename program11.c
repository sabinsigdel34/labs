#include<stdio.h>
#include<conio.h>
void main() {
    int a,b,c,d;
    printf("enter four numbers");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a>b && a>c && a>d)
        printf("greatest number is %d",a);
    else if (b>a && b>c && b>d)
        printf("greatest number is %d",b);
    else if (c>a && c>b && c>d)
        printf("greatest number is %d",c);
    else
        printf("greatest number is %d",d);

    getch();
}