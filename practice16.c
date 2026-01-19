#include<stdio.h>
#include<conio.h>
void main() {
    float temp;
    printf("Enter a temperature in Celsius: ");
    scanf("%f", &temp);
    if (temp<0)
        printf("freezing whether");
    else if (temp>=0 && temp<10)
        printf("Very Cold Whether");
    else if (temp>=10 && temp<20)
        printf("Cold Whether");
    else if (temp>=20 && temp<30)
        printf("Normal in Temperature");
    else if (temp>=30 && temp<40)
        printf("It's Hot");
    else
        printf("It's very hot");
    getch();

}