#include <stdio.h>
#include <math.h>

int main() {

    double A = sqrt(9); // square root
    double B = pow(2, 4); // (base, power)
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-100); // absolute value
    double G = log(3);
    double H = sin(90);
    double I = cos(0);
    double J = tan(45);

    printf("A = %f\n", A);
    printf("B = %f\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("E = %d\n", E);
    printf("F = %f\n", F);
    printf("G = %f\n", G);
    printf("H = %f\n", H);
    printf("I = %f\n", I);
    printf("J = %f\n", J);

    return 0;

}