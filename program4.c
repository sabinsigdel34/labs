#include<stdio.h>
#include<conio.h>
void main() {
    printf("\nThis is a program to multiplication table");
    printf("\nEnter a number : ");
    int n;
    printf("\n");
    scanf("%d",&n);
    for (int i=1;i<=10;i++) {
        printf(" %d x %d = %d \n",n,i,n*i);
    }
    getch();
}