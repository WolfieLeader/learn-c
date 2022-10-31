#include <stdio.h>

void arithmeticInfo()
{
    int a = 0, b = 0;
    printf("\n Arithmetic Operators \n");
    printf("\n Choose two numbers: ");
    printf("\n\t First number: ");
    scanf("%d", &a);
    printf("\n\t Second number: ");
    scanf("%d", &b);
    printf("\n\t Addition: %d + %d = %d \n", a, b, a + b);
    printf("\n\t Subtraction: %d - %d = %d \n", a, b, a - b);
    printf("\n\t Multiplication: %d * %d = %d \n", a, b, a * b);
    printf("\n\t Division: %d / %d = %.2f \n", a, b, (float)a / (float)b);
    printf("\n\t Modulus: %d %% %d = %d \n", a, b, a % b);
}