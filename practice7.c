#include <stdio.h>
#include <conio.h>
#include <math.h>
void main() {
    float eoq,tbo,hr,dr,sc;
    printf("Enter demand rate");
    scanf("%f",&dr);
    printf("Enter setup cost");
    scanf("%f",&sc);
    printf("Enter holding cost per unit time");
    scanf("%f",&hr);
    eoq = sqrt((2*dr*sc)/(hr));
    tbo = sqrt((2*sc)/(dr*hr));
    printf("Economic order quantity: %f",eoq);
    printf("Optional time between orders %f",tbo);
    getch();

}