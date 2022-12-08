#include <stdio.h>

// ternary operator = shortcut to if/else when assigning/returning a value
// (condition) ? value if true : value if false
int findMax(int x, int y) {
    /*
    if(x > y)
        return x;
    else 
        return y;
    */
    return (x > y) ? x : y;
}

int main() {

    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false
    /*
    int max = findMax(4, 5);
    printf("%d", max);
    */

    // switch statements
    /*
    char grade;

    printf("Enter a letter grade: ");
    scanf("%c", &grade);

    switch(grade) {
        case 'A':
            printf("Sicko Mode\n");
            break;
        case 'B': 
            printf("Astro");
            break;
        case 'C':
            printf("OK");
            break;
        case 'D':
            printf("Darn");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Please enter only valid grades");
    }
    */

    /* // if statements
    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("You are 18 or older!");
    }
    else if(age < 0) {
        printf("You haven't been born yet!");
    }
    else {
        printf("You are under 18!");
    }
    */

    return 0;
}