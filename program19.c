#include<stdio.h>
#include<conio.h>
void main() {
    int count=0;
    for (int i = 1; i <= 20; i++) {
        int n;
        printf("Enter age of person number %d: ",i);
        scanf("%d",&n);
        if (n >= 50 && n <= 60) {
            count++;
        }

    }
    printf("The number of person from 50-60 is : %d",count);
}