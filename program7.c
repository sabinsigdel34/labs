#include<stdio.h>
#include<conio.h>
void main() {
    int x;
    printf("Enter a number");
    int count = 0;
    scanf("%d",&x);
    for (int i=2; i<x; i++) {
        if (x%i == 0) {
            count++;
        }
    }
    if (count == 0) {
        printf("Prime number");
    }
    else {
        printf("Not prime number");
    }
}