#include<stdio.h>
#include<conio.h>
void main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int rev = 0;
    while (n!=0) {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("The reversed number is : %d",rev);
}