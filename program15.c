#include <stdio.h>
#include <conio.h>
void main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int rem;
    printf("\n the digits are : \n");
    printf("|---------------------| \n");
    while (n!=0) {
        rem = n%10;
        printf("%d \t", rem);
        n = n/10;
    }
}