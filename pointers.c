#include <stdio.h>

void printAge(int *pAge) {
    printf("You are %d years old\n", *pAge); // dereference
}

void main() {
    // pointer = a "variable-like" refernce that holds a memory adress to another variable, array, etc.
    //           some tasks are perfomred more easily with pointers
    //           * = indirection operator (value at address)

    int age = 21;
    int *pAge = NULL; // considered good practice to assign initial value as null for pointers
    pAge = &age;
    // pointer of variable age
    // [data type] *p(varaible age with first letter in uppercase) = &(variable name)

    /*
    printf("address of age: %p\n", &age);
    printf("value of pAge: %p\n", pAge);
    
    printf("Size of age: %d bytes\n", sizeof(age));
    printf("Size of pAge: %d bytes\n", sizeof(pAge));

    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n", *pAge); // dereferencing pointer
    */

    printAge(pAge);
}