#include <stdio.h>
#include <stdbool.h> // needed to work with booleans

int main() {

    /*
    // Variables / Data Types:

    int x; // declaration
    x = 10; // initilization
    int y = 321; // declaration & initilization

    int age = 21; // integer
    float pi = 3.1415923456789; // 4 bytes, floating point number, 6-7 sig. figs
    double d = 3.141592653589793; // 8 bytes, 15-16 sig. figs
    char grade = 'A'; // single character
    char name[] = "Wowowowoow"; // array of characters (emulates strings)
    bool e = false; // 1 byte, boolean
    char f = 120; // 1 byte, can store from -128 to +127
    unsigned char g = 255; // 1 byte, can store from 0 to 255
    // by default most data types are signed
    
    short int h = 23139; // 2 bytes, stores from -32,768 to +32,767
    unsigned short int i = 12345; // 2 bytes, stores fromm 0 to 65,535
    // dont need to be declared with the word 'int', i.e. it can just be a short
    
    int j = 123456789; // 4 bytes, -2,147,483,648 to + 2,147,483,647
    unsigned int k = 1234567890; // 4 bytes, 0 to +4,294,967,295

    long long int l = 84912048309312348; // 8 bytes, -9 quintillion to +9 quintillion
    unsigned long long int m = 123456543213455; // 8 bytes, 0 to 18 quintillion
    // dont need to be declared with the word 'int', i.e. it can just be a long long
    */

    // constant = fixed value that cannont be altered by the program during its execution

    /*
    const float PI = 3.14159;

    //PI = 420.69; // this will cause an error

    printf("%f",pi);
    */

    // format specifier % : defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double (thats an l not a 1)
    // %d = integer

    // %.1 = decimal percision (.1 displays till tenths place, .2 displays till hundredths and so on)
    // %1 = minimum field width
    // %- = left align

    /*
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%-8.2f\n", item1);
    printf("Item 2: $%-8.2f\n", item2);
    printf("Item 3: $%-8.2f", item3);
    */

    /*
    printf("Hello %s\n", name); // %s for strings (array of chars)
    printf("You are %d years old\n", age); // %d for integers
    printf("Your grade is %c\n", grade); // %c for single characters
    printf("Pi can be written as %f", pi); // %f for floats
    */

   //printf("%0.15f\n", pi); // displays 15 digits of float
   //printf("%0.15lf\n", d); // displays 15 digits of double
   //printf("%d\n", e); // diaplays bool(boolean) value (1 for true, 0 for false)
   //printf("%d\n", f); // displays char as numeric value
   //printf("%c\n", f); // displays char as translated ascii value
   //printf("%d\n", g); // displays unsigned char as numeric value
   //printf("%d\n", h); // displays short integer
   //printf("%d\n", i); // displays unsigned short int
   //printf("%d\n", j); // displays int
   //printf("%u\n", k); // displays unsigned int
   //printf("%lld\n", l); // displays long long int
   //printf("%llu\n", m); // displays unsigned long long int

    // arithmetic operators

    // + : addition
    // - : subtraction
    // * : multiplication
    // / : division
    // % : modulus
    // ++ : increment
    // -- : decrement

    //int x = 5;
    //int y = 2;
    //float z = x / (float)y;
    // if divisor is int, answer will be int

    //printf("%f", z);

    // augmented assignment operators
    // Example: in x += 1, += is an augmented assignment operator
    // += : addition
    // -= : subtraction
    // *= : multiplication
    // /= : division
    // %= : modulus

    /*
    int x = 10;
    x %= 2; 
    printf("%d",x);
    */

    // continue = skips rest of code & forces the next iteration of the loop
    // break = exits a loop/switch

    return 0;
}