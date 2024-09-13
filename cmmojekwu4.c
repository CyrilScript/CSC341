// Mmojekwu Cyril
// CSC-341
// Sample Pointer Program

#include <stdio.h>
#include <stdlib.h>

// global variables
int x;           // uninitialized data (BSS)
int y = 15;      // initialized data (data segment)

int main(int argc, char *argv[])
{
    // Stack variables
    int z = 0;
    int array1[5] = {0};

    // Heap variable
    int *heap_var = (int *)malloc(sizeof(int));
    if (heap_var == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return EXIT_FAILURE;
    }
    *heap_var = 10;

    // Printing the address of argc
    printf("Address of argc: %p\n", (void *)&argc);

    // Printing the addresses of stack variables
    printf("Address of variable z: %p\n", (void *)&z);
    for (int i = 0; i < 5; i++) {
        printf("array1[%d] = %d with address of %p\n", i, array1[i], (void *)&array1[i]);
    }

    // Printing the address of the heap variable
    printf("Address of heap_var: %p\n", (void *)heap_var);

    // Printing the address of uninitialized global variable (x)
    printf("Address of uninitialized global variable x: %p\n", (void *)&x);

    // Printing the address of initialized global variable (y)
    printf("Address of initialized global variable y: %p\n", (void *)&y);

    // Free the allocated memory
    free(heap_var);

    return EXIT_SUCCESS;
}
