#include <stdio.h>

void assignmentInfo()
{
    int a = 9, b = 3;
    printf("\n Assignment Operators \n");
    printf("\n\t a = %d, b = %d \n", a, b);
    printf("\n\t a += b (a = a + b) = %d \n", a += b);
    a = 9;
    printf("\n\t a -= b (a = a - b) = %d \n", a -= b);
    a = 9;
    printf("\n\t a *= b (a = a * b) = %d \n", a *= b);
    a = 9;
    printf("\n\t a /= b (a = a / b) = %d \n", a /= b);
    a = 9;
    printf("\n\t a %%= b (a = a %% b) = %d \n", a %= b);
    a = 9;
    printf("\n\t a &= b (a = a & b) = %d \n", a &= b);
    a = 9;
    printf("\n\t a |= b (a = a | b) = %d \n", a |= b);
    a = 9;
    printf("\n\t a ^= b (a = a ^ b) = %d \n", a ^= b);
    a = 9;
    printf("\n\t a <<= b (a = a << b) = %d \n", a <<= b);
    a = 9;
    printf("\n\t a >>= b (a = a >> b) = %d \n", a >>= b);
}