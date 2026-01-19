#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, sum = 0;

    printf("Enter x and number of terms: ");
    scanf("%f %d", &x, &n);

    for(i = 1; i <= n; i++) {
        sum += i / pow(x, i);  // term = i / x^i
    }

    printf("Sum = %.4f\n", sum);
    return 0;
}
