#include <stdio.h>

int decimalToBinary(int number)
{
    unsigned int binary = 0, remainder = 0, i = 1;
    while (number != 0)
    {
        remainder = number % 2;
        number /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}