#include<stdio.h>
#include<conio.h>
void main() {
    int n;
    printf("\n Enter a number : ");
    scanf("%d",&n);
    int x=n;
    int condition = 1;
    while (n!=0) {
        int rem = n % 10;
        if (rem%2!=0) {
            condition = 0;
            break;
        }
        n = n/10;
    }
    if (condition==1) {
        printf("\n The number %d is relay",x);
    }
    else {
        printf("\n The number %d is not relay",x);
    }
}