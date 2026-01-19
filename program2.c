#include<stdio.h>
#include<conio.h>
void main() {
    int n=0;
    int sum = 0;
    do {
        if (n%2!=0){
            sum = sum + n;

        }
        n++;
    }while (n<100);
    printf("\n Sum = %d",sum);
    getch();
}