#include<stdio.h>
#include<conio.h>
void main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4-i; j++) {
            printf("  ");
        }
        for (int k = i; k >=1; k--) {
            printf("%d ", k);
        }
        for (int j = 2; j <=i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}