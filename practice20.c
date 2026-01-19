#include<stdio.h>
#include<conio.h>
void main() {
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    char c;
    printf("Enter \n o = to find odd/even \n p = to find number is is positive/negative");
    scanf(" %c",&c);
    switch(c) {
        case 'o':
            if (a%2==0)
                printf("\n %d is even",a);
            else
                printf("\n %d is odd",a);
            break;
        case 'p':
            if (a>=0)
                printf("\n %d is positive",a);
            else
                printf("\n %d is negative",a);
            break;
        default:
            printf("\n Invalid number");
    }
    getch();
}