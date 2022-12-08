#include <stdio.h>

void main() {
    // array = a data type strucutre that can store many values of the same data type

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0}; // array with preset values
    int nums[5]; // array with preset size
    char name[3] = "Bro"; // array with preset size & value 

    //printf("%d", sizeof(prices)); // return size of variable in bytes
    //(sizeof(array) / sizeof(array[0])) can be used to find the number of elements in an array
    //sizeof(array) gives size of array in bytes, for double each value is 8 bytes
    //printf("$%.2lf", prices[0]); // prints single element
    /*
    for(int i = 0; i < (sizeof(prices) / sizeof(prices[0])); i++) { // prints multiple elements of array
        printf("$%.2lf\n", prices[i]);
    }
    */

    // 2D array = an array, where each element is an entire array (array of arrays)
    //int numbers[2][3] = {{1, 2, 3}, {4, 5, 6}}; // array[rows][columns]
    /*
    int numbers[3][3];
    int rows = sizeof(numbers)/sizeof(numbers[0]); 
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);
    printf("Rows = %d\n", rows);
    printf("Columns = %d\n", columns);
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    */
}