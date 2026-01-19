#include<stdio.h>
#include<math.h>
int sqr(int a) {
   return pow(a,2);
}
int main() {
   int a;

   printf("Enter a number to me square");
   scanf("%d", &a);
   printf("Square of %d is %d", a, sqr(a));
}