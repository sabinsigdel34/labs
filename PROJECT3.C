//wap to find sum, difference , product and division (quotient and reminder)
// of two any number and display the result

#include<stdio.h>
#include<conio.h>

void main(){
	int a,b;
	clrscr();
	printf("enter any two number \n");
	scanf("%d %d",&a,&b);
	printf("the sum of the number is %d \n",(a+b));
	printf("the difference is %d \n",(a-b));
	printf("the product of the number is %d \n",(a*b));
	float c = float(a)/float(b);
	printf("the division of two numbers is %f \n",c);
	printf("the reminder of the numbers is %d \n",(a%b));
	printf("the quiotent of number is %d \n",((a-(a%b))/b));
	getch();
}
