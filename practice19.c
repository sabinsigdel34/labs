#include <stdio.h>
#include <conio.h>
#define PI 3.1415
void main() {
    int radius;
    char operation;
    printf("\nEnter the radius ");
    scanf(" %d", &radius);
    printf("\nEnter operation \n a = to find area \n c = to find circumference ");
    scanf(" %c", &operation);

    switch (operation) {
        case 'a':
            printf("\nArea of Circle : %f",(float)(PI*radius*radius));
            break;
        case 'c':
            printf("\nCircumference of Circle : %f",(float)(2*PI*radius));
            break;
        default:
            printf("\nInvalid operation");

    }
    getch();
}