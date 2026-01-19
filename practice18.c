#include <stdio.h>
#include <conio.h>
int main() {
    int a, b;
    char operation;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("\nEnter * for multiplication");
    printf("\nEnter / for division");
    printf("\nEnter + for addition");
    printf("\nEnter - for subtraction\n");

    scanf(" %c", &operation);   // space before %c

    switch (operation) {
        case '+':
            printf("%d + %d = %d", a, b, a + b);
            break;

        case '-':
            printf("%d - %d = %d", a, b, a - b);
            break;

        case '*':
            printf("%d * %d = %d", a, b, a * b);
            break;

        case '/':
            if (b == 0)
                printf("Error: Division by zero not allowed");
            else
                printf("%d / %d = %.2f", a, b, (float)a / b);
            break;

        default:
            printf("Invalid operator");
    }

    getch();
}
