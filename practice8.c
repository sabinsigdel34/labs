#include<stdio.h>
#include<conio.h>
void main() {
    float p;
    float s;
    int yrs;
    printf("enter purchase price: ");
    scanf("%f",&p);
    printf("enter savage value: ");
    scanf("%f",&s);
    printf("enter years of service: ");
    scanf("%d",&yrs);
    float dep = (p-s)/yrs;
    printf("enter departure time %f",dep);
    getch();


}