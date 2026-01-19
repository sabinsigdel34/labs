#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() {
    for (int i =100; i<=500;i++) {
        int x = i;
        int rem = 0;
        int result = 0 ;
        while (x!=0) {
            rem = x%10;
            result = result + (rem*rem*rem);
            x = x/10;
        }
        if (result==i) {
            printf("\n %d",result);
        }
    }
}