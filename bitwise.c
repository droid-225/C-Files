#include <stdio.h>

void main() {
    // Bitwise Operators = special operators used in bit level programming

    // & = AND
    // | = OR
    // ^ = XOR
    // << left shift
    // >> right shift

    int x = 6;  //  6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0;  //  0 = 00000000 

    z = x & y;
    printf("AND = %d\n", z); 
    // if two 0s are in line, 0 is returned
    // if two 1s are in line, 1 is returned
    // regular AND gate workings
    // here it prints 4 becuase the AND function of 
    // 000000110 (6) AND 00001100 (12) returns 00000100 (4)
    
    z = x | y;
    printf("OR = %d\n", z);
    // regular OR gate workings
    // 00000110 (6) OR 00001100 (12) returns 00001110 (14)

    z = x ^ y;
    printf("XOR = %d\n", z);
    // only one bit can be 1
    // if both bits are 0 or both are 1, returns 0
    // regular XOR gate workings
    // 00000110 (6) XOR 00001100 (12) returns 00001010 (10)

    z = x << 1; // z = (value to be shifted left) << (no. of spaces to be shifted)
    printf("Left Shift 1 = %d\n", z);
    // shifts bits in x one space to the left
    // before: 00000110 (6)
    // after: 00001100 (12)
    // basically doubles original value for every shift left

    z = x >> 1;
    printf("Right Shift 1 = %d\n", z);
    // shifts bits in x one space to the right
    // before: 00000110 (6)
    // after: 00000011 (3)
    // basically halves original value for every shift right
}