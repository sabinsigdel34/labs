#include <stdio.h>
#include <conio.h>
// float si(float p, float t, float r) {
//     float pr = (p*t*r)/100;
//     return pr;
// }
void main() {
    float p, t, r;
    printf("Enter principal: ");
    scanf("%f", &p);
    printf("Enter time: ");
    scanf("%f", &t);
    printf("Enter rate: ");
    scanf("%f", &r);
    float price = (p*t*r)/100;
    printf(" Simple interest is %f",price);
    getch();
}