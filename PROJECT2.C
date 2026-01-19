//wap to accept rs and convert it into usd 1=115 usd
#include<stdio.h>
#include<conio.h>

void main(){
	float rs;
	clrscr();
	printf("Enter value in npr \n");
	scanf("%f",&rs);
	rs *= 115;
	printf("USD: %f ",rs);
	getch();
}