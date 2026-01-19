//wap to input the length and breadth of a rectangle , and calculate the area of the rectangle
#include<stdio.h>


int lbr(int l , int b){
	int area = l*b;
	return area;
}
int main(){
    int length , breadth;

    printf("Enter length");
    scanf("%d",&length);
    printf("Enter breadth");
    scanf("%d",&breadth);
    int area = lbr(length,breadth);
    printf("%d",area);
	return 0;

}