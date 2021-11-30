#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    printf("Enter the 3 coefficients of quadratic equation: ");
    scanf("%i %i %i", &a, &b, &c);

    double x1 = ((-1*b) + sqrt(b*b - 4*a*c))/(2*a);
    double x2 = ((-1*b) - sqrt(b*b - 4*a*c))/(2*a);

    printf("\nFirst root: %f", x1);
    printf("\nSecond root: %f", x2);

    return 0;
}