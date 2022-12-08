#include <stdio.h>

void sort(char array[], int size) {  
    int temp = 0;
    //bubble sort
    //ascending order
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    //for descending order, switch > in if statement to <
}

void printArray(char array[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%c ", array[i]);
    }
}

void main() {
    //int array[] = {1,24,2,5,3,6,7,8,5,3,4,5};
    char array[] = {'A', 'D', 'B', 'F', 'C'};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printArray(array, size);
}