#include<stdio.h>
#include<conio.h>

void main() {
    int n, i;
    int a = 0, b = 1, fibo;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n >= 1)
        printf("%d", a);

    if (n >= 2)
        printf(" %d", b);

    for (i = 3; i <= n; i++) {
        fibo = a + b;
        printf(" %d", fibo);
        a = b;
        b = fibo;
    }

    getch();
}
