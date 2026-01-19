#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() {
    char customer_name[20];
    int customer_id;
    float unit;
    float pay;
    float surcharge=0;
    printf("Enter the customer name: ");
    scanf("%s", &customer_name);
    printf("Enter the customer id: ");
    scanf("%d", &customer_id);
    printf("Enter the unit: ");
    scanf("%f", &unit);
    if (unit<=199)
        pay = unit * 1.20 ;
    else if (unit<400)
        pay = unit * 1.50 ;
    else if (unit < 600)
        pay = unit * 1.80 ;
    else
        pay = unit * 2.00 ;

    if (pay>400)
        surcharge = pay*0.15;

    float total = pay + surcharge;
    printf("\nElectricity Bill");
    printf("\n------------------------");
    printf("\nCustomer ID   : %d", customer_id);
    printf("\nCustomer Name : %s", customer_name);
    printf("\nUnits Consumed: %f", unit);
    printf("\nTotal Amount  : Rs. %.2f", total);
    getch();

}