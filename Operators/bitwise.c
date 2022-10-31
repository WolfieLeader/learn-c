#include <stdio.h>
#include "../convert.c"

void bitwiseInfo()
{
    int a = 12, b = 6;
    int binaryA = decimalToBinary(a), binaryB = decimalToBinary(b);
    printf("\n Bitwise Operators \n");
    printf("\n\t a = %d (%d), b = %d (%d) \n", a, binaryA, b, binaryB);
    printf("\n\t a & b = %d (%d) & %d (%d) = %d (%d) \n", a, binaryA, b, binaryB, a & b, decimalToBinary(a & b));
    printf("\n\t a | b = %d (%d) | %d (%d) = %d (%d) \n", a, binaryA, b, binaryB, a | b, decimalToBinary(a | b));
    printf("\n\t a ^ b = %d (%d) ^ %d (%d) = %d (%d) \n", a, binaryA, b, binaryB, a ^ b, decimalToBinary(a ^ b));
    printf("\n\t ~a = ~%d (%d) = %d (%d) \n", a, binaryA, ~a, decimalToBinary(~a));
    printf("\n\t a << b = %d (%d) << %d (%d) = %d (%d) \n", a, binaryA, b, binaryB, a << b, decimalToBinary(a << b));
    printf("\n\t a >> b = %d (%d) >> %d (%d) = %d (%d) \n", a, binaryA, b, binaryB, a >> b, decimalToBinary(a >> b));
}