#include <stdio.h> 

/*
void birthday() {
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear... you!");
    printf("\nHappy Birthday to you!\n");
}
*/

void birthday(char x[], int y) {
    printf("\nHappy Birthday dear %s", x);
    printf("\nYou are %d years old!", y);
}

double square(double x) {
    double result = x * x;
    return result;
}

void hello(char[], int); // function prototype

void main() {
    
    char name[] = "Bro";
    int age = 21;
    
    //birthday(name, age);
    

    /*
    double x = square(3.14);
    printf("%lf", x);
    */

    /*
     function prototype
     function declaration, without a body, before main()
     ensures that calls to a function are made with the correct arguments
    */
    //hello(name); // will not run due to function prototype
    hello(name, age);
    /*
    Important Notes: 
     Many C compilers do not check for parameter matching
     Missing arguments result in unexpected behavior 
     A function prototype causes the compiler to flag an error if arguments are missing
    Advantages:
    1. Easier to navigate a program w/ main() at the top
    2. Helps with debugging
    3. Commonly used in header files
    */
}

void hello (char name[], int age) {
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);  
}