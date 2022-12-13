// malloc(): stands for memory allocation
//           reserves block of memory with the given amount of bytes
//           return value is a void pointer to allocated space
//           void pointer must be casted into needed type
//           if space is not enough for given type, allocation of memory fails, returns NULL pointer
//           all values at allocated memory are initialized to garbage values
// syntax: type *pointer;
//         pointer = (pointer_type*)malloc(size_in_bytes);
// e.g.:   pointer = (int *)malloc(3*sizeof(int)) (here 3 is the number of ints) 

// calloc(): contiguous allocation
//           reserves n blocks of memory with given amount of bytes
//           return value is void pointer to allocated space
//           needs to be casted to needed type
//           if space is not enough, alloc of memory fails and returns NULL pointer
//           all values at allocated memory is initialized to 0
// syntax: type *pointer;
//         pointer = (pointer_type *)calloc(n, size_in_bytes);
//         n is number of variables of given type

// realloc(): reallocation
//            if allocated memory is not enough, its size can be changed using this function
// syntax: type *pointer;
//         pointer = (pointer_type *)realloc(pointer, new_size_in_bytes);

// free(): used to free allocated memory if it has no further use
//         frees memory used by program in the heap
// syntax: type *pointer;
//         free(pointer);

#include <stdio.h>
#include <stdlib.h> // holds above functions

int main() {
    int *ptr;
    int n1, n2;   

    printf("Enter the size of the array you want to create: ");
    scanf("%d", &n1);
    //ptr = (int *) malloc(n * sizeof(int));
    ptr = (int *) calloc(n1, sizeof(int));

    for (int i = 0; i < n1; i++) {
        printf("Enter value no. %d: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n1; i++) {
        printf("Value at index %d of this array: %d\n", i, ptr[i]);
    }

    /*
    printf("Enter the new size of the array you want to create: ");
    scanf("%d", &n2);

    ptr = realloc(ptr, n2 * sizeof(int));

    for (int i = 0; i < n2; i++) {
        printf("Enter value no. %d: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n2; i++) {
        printf("New value at index %d of this array: %d\n", i, ptr[i]);
    }
    */

    free(ptr);
    return 0;
}
