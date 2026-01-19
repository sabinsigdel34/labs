#include<stdio.h>
#include<conio.h>
void main() {
    int x , y ;

    printf("enter value of x");
    scanf("%d",&x);
    int n = x;
    printf("enter value of y");
    scanf("%d",&y);
    for(int i=1 ; i<y ; i++) {
        x = n*x; //=2*2 =4
    }
    printf("%d",x);
}
