#include<stdio.h>
#include<conio.h>
void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int rem;
    printf("\n the number of digits used are : \n");
    printf("|---------------------| \n");
    int count=0;
    while (n!=0) {
        count++;
        n = n/10;
    }
    printf("\n %d \n", count);
}