#include <stdio.h>
#include <math.h>

int main() {

    double A, B, C;

    printf("Enter Side A: ");
    scanf("%lf", &A);


    printf("Enter Side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C = %0.23lf", C);

    return 0;
}