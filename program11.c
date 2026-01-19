#include<stdio.h>

int main() {
    int sec , hour , min , r;
    printf("Enter seconds");
    scanf("%d", &sec);
    r = sec % 3600;
    sec = sec - r;
    hour = sec / 3600;
    sec = r % 60;
    r = r - sec;
    min = r / 60;
    printf("%d hours %d minutes %d seconds", hour,min,sec);
    return 0;
}