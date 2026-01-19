#include <stdio.h>
#include <conio.h>
void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact = 1;
    while(n>0) {
       fact = fact*n;
       n--;
    }
    printf("%d",fact);
}