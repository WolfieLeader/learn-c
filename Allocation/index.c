#include <stdio.h>
#include <stdlib.h>

void startAllocationLesson()
{
    printf("\n Memory Allocation \n");
    printf("\n\t To allocate memory, we can use 3 functions: malloc(), calloc() and realloc(). \n");
    printf("\n\t The malloc() function allocates a block of memory of a given size. \n");
    printf("\n\t The calloc() function allocates a block of memory of a given size and initializes it to 0. \n");
    printf("\n\t The realloc() function reallocates a block of memory of a given size. \n");
    printf("\n\t Remember to cast the return value of malloc(), calloc() and realloc() to the desired type. \n");
    printf("\n\t Here is an example: \n");
    int *pMalloc = (int *)malloc(5 * sizeof(int)); // allocates 5 integers
    for (int i = 0; i < 5; i++)
    {
        pMalloc[i] = i + 1;
    }
    printf("\n\t We allocated 5 integers using malloc() and initialized them to the following values: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n\t pMalloc[%d] = %d \n", i, pMalloc[i]);
    }
    int *pCalloc = (int *)calloc(5, sizeof(int)); // allocates 5 integers and initializes them to 0
    printf("\n\t We allocated 5 integers using calloc() and initialized them to the following values: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n\t pCalloc[%d] = %d \n", i, pCalloc[i]);
    }
    pCalloc = (int *)realloc(pCalloc, 10 * sizeof(int)); // reallocates the memory to 10 integers
    printf("\n\t We reallocated the memory to 10 integers using realloc() and initialized the new values to the following values: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("\n\t pCalloc[%d] = %d \n", i, pCalloc[i]);
    }
    printf("\n\t Once the program ends, it automatically frees the memory. \n");
    printf("\n\t However, we can also free the memory using the free() function. \n");
    free(pMalloc);
    free(pCalloc);
    printf("\n\t We freed the memory allocated to pMalloc and pCalloc manually. \n");
}