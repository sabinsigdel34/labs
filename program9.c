#include <stdio.h>

float ltok(float l) {
    l = 1000*l;
    return l;
}
float main() {
    float l;
    printf("Enter lenght in kilometer ");
    scanf("%f",&l);
    printf("Length in meters = %f", ltok(l));
    return 0;
}