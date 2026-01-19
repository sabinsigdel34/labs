//convert fahrenheit to celcius f = 18c +32
#include <stdio.h>
#include <conio.h>

void main(){
	float f;
	clrscr();
	printf("Enter a temperature reading in fahenhit ");
	scanf("%f",&f);
	f = (f - 32)/1.8;
	printf("celcius reading is %f celcius ",f);
	getch();

}