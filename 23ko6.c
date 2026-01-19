#include <stdio.h>
#include<conio.h>
int main() {
    for (int i = 0; i <5; i++) {
        for (int j = 1; j <= 4-i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= (i*2)+1; j++) {
            printf("%d ",j);
        }
        for (int j = 1; j <= 4-i; j++) {
            printf("  ");
        }
        printf("\n");
    }
}