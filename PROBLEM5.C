//wap to convert the area and circumference of circle . Use #define PI 3.1415
#include<conio.h>
#include<math.h>
#include<stdio.h>
#define PI 3.1415
int main(){

	float r,a,c;
	// clrscr();
	printf("Enter radius of a circle");
	scanf("%f",&r);
	a = PI * pow(r,2);
	printf("area of this circle is %f \n",a);
	c = 2*PI*r;
	printf("the circumference of a circle is %f",c);
	return 0;
}