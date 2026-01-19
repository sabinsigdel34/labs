#include<stdio.h>
#include<conio.h>
void main() {
    float sp , cp;
    printf("enter a cost price");
    scanf("%f",&cp);
    printf("enter selling price");
    scanf("%f",&sp);
    float profit = sp -cp;
    if (profit < 0) {
        printf("Loss");

    }
    else if (profit > 0) {
        printf("Profit");
    }
    else
        printf("No loss or profit");
    getch();
}