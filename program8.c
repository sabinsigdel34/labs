#include <stdio.h>
#include <conio.h>
void main () {
    int n;
    int remainder;
    int sum = 0;
    printf("Enter a number");
    scanf("%d",&n);
    while (n != 0) {
        remainder = n%10;
        sum = sum + remainder;
        n = n/10;
    }
    printf("%d",sum);
}