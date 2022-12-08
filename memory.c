#include <stdio.h>

void main() {
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is locted (house address)

    double a = 'X';
    double b = 'Y';
    double c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(a));

    // memory addresses: (given in hexidecimal)
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
}