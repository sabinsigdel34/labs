#include <stdio.h>
#include <conio.h>
void main() {
    float gs,bs,br,p,r;
    int qty;
    bs = 1500.00;
    br = 200.00;
    r = 0.02;
    printf("Enter price of computers now");
    scanf("%f",&p);
    printf("Enter quantity of computer ");
    scanf("%d",&qty);
    gs = bs+(qty*br)+(qty*p)*r;
    printf("gross salary is %f",gs);
    getch();


}