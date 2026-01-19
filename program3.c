#include <stdio.h>
#include <conio.h>
void main () {
    int n;
    printf("\n Enter a total number of element : ");
    scanf("%d",&n);
    int a[n];
    printf("\n Entered numbers : ");
    for (int i=0;i<n;i++) {

        scanf("%d",&a[i]);
    }
    int sum = 0;
    for (int i=0;i<n;i++) {
        sum = sum + a[i];
    }
    float avg = (float)sum/n;
    printf("%d",sum);
    printf("\n The average is : %f",avg);
    getch();
}