#include<stdio.h>
#include<conio.h>
void main() {
    for(int i=1; i<=5; i=i+1) {
        for(int j=1; j<=5-i; j=j+1) {
            printf("  ");
        }
        for(int k=1; k<=i; k=k+1) {
            printf("%d ", k);
        }
        printf("\n");
    }
}