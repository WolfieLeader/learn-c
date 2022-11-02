#include <stdio.h>

void memoryInfo()
{
    printf("\n Memory Addresses \n");
    printf("\n\t When we declare a variable, the compiler allocates a memory address to it. \n");
    printf("\n\t The address of a variable can be obtained using the & operator. \n");
    printf("\n\t Here is an example: \n");
    int a = 10;
    printf("\n\t int a = %d; \n", a);
    printf("\n\t The address of a is %p. \n", &a);
}