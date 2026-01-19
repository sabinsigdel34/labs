#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() {
    int n;
    int pows;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 3; i <= n; i++) {
        if (i%3 == 0) {
            pows = pow(i,3);
            printf("%d \n",pows);
        }

    }
}