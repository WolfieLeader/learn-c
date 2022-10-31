#include <stdio.h>

void logicalInfo()
{
    int a = 12, b = 6;
    printf("\n Logical Operators \n");
    printf("\n\t a = %d, b = %d \n", a, b);
    printf("\n\t a > 10 && b > 5 (a is greater than 10 and b is greater than 5) = %d \n", a > 10 && b > 5);
    printf("\n\t a < 0 || b > 5 (a is less than 0 or b is greater than 5) = %d \n", a < 0 || b > 5);
    printf("\n\t !(a==b) (a is not equal to b) = %d \n", !(a == b));
}