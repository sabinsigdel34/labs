#include<stdio.h>
#include<math.h>
#include<conio.h>

void main() {
    float a,p,r,t,n;
    float val;
    printf("Enter principle rate and time : ");
    scanf("%f %f %f",&p,&r,&t);
    printf("number of times you want ");
    scanf("%f",&n);
    val = (1+(r/n));
    val = pow(val,(n*t));
    a = p*val;
    printf("compound intrest is %f",a);

}