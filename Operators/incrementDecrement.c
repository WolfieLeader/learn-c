#include <stdio.h>

void incrementDecrementInfo()
{
    int a = 3;
    printf("\n Increment and Decrement Operators \n");
    printf("\n\t a = %d (for every operation a will be reset)\n", a);
    printf("\n\t Pre-increment: ++a = %d \n", ++a);
    a = 3;
    printf("\n\t Post-increment(change happens after display): a++ = %d \n", a++);
    printf("\t a = %d \n", a);
    a = 3;
    printf("\n\t Pre-decrement: --a = %d \n", --a);
    a = 3;
    printf("\n\t Post-decrement(change happens after display): a-- = %d \n", a--);
    printf("\t a = %d \n", a);
}