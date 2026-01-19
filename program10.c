#include<stdio.h>

int main() {
    int days;
    printf("Enter days");
    scanf("%d", &days);

    int months ,r;
    r = days % 30;
    r = days -r;
    int day = days -r;
    months = r / 30;
    printf("%d months %d days", months,day);
    return 0;
}