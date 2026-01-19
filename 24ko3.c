#include <stdio.h>

long factorial(int n) {
    long fact = 1;
    for(int i = 1; i <= n; i++) fact *= i;
    return fact;
}

int main() {
    int n, i;
    float x, sum = 0;
    printf("Enter x and number of terms: ");
    scanf("%f %d", &x, &n);

    for(i = 1; i <= n; i++) {
        sum += pow(x, i) / factorial(i);  // term = x^i / i!
    }

    printf("Sum = %.4f\n", sum);
    return 0;
}
