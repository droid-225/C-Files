#include <stdio.h>
#include <string.h>

int main() {

    char name[25]; // number in [] is max size of char array in bytes 
    int age;

    printf("What's your name? ");
    //scanf("%s", &name); // & is required to link input with variable
    // scanf does not read white spaces, but fgets does
    fgets(name, 25, stdin); // (variable name, input size, stdin)
    // fgets also includes new line character or enter key
    name[strlen(name) - 1] = '\0'; // removes new line character/ enter key at end

    printf("\nHow old are you? ");
    scanf("%d", &age);

    printf("Hello %s, how are you?", name);
    printf("\nYou are %d years old", age);

    return 0;
}