#include <stdio.h>
#include <conio.h>
void main() {
    for (int i = 4; i >= 0; i--) {
        for (int j = 0; j < 4-i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= (i*2)+1; k++) {
            printf("%d ",k);
        }

        printf("\n");
    }
}