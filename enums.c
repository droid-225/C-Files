#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};
// values associated with the enums are optional to give, 
// the values are automatically assigned values from 0 
// if not given by user

int main() {
    // enum = a user defined type of named integer identifiers
    //        helps to make a program more readable

    enum Day today = Sun;

    if(today == Sun || today == Sat) {
        printf("It's the Weekend!");
    }
    else 
        printf("I have to work today :(");
}