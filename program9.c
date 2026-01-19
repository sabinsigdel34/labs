#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main () {
    int n; //1234

    int sum = 0;
    printf("Enter an integer");
    scanf("%d",&n);

    int x =n;
    int length = 0;
    while (n!=0) {
        length++;
        n = n/10;
    }


    int rem=0;
    int result=x;
    for (int i=1;i<=length;i++) {
        rem = x % 10;
        sum = sum + pow(rem,length);

        x = x/10;

    }

    if (result == sum)
        printf("Armstrong number");
    else
        printf("Not an armstrong number");
    getch();
}