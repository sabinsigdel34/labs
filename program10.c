#include<stdio.h>
#include<math.h>
#include<conio.h>
void main() {
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int x = n;
    int result = 0;
    int rem =0;
    while (n!=0) {
        rem = n % 10;
        result = result*10 + rem;
        n = n/10;

    }
    if (result == x)
        printf("palindrome");
    else
        printf("not a palindrome");
    getch();

}