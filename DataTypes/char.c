#include <stdio.h>
#include <limits.h>

void charInfo()
{
    printf("\n char \n");
    char charRange[] = {CHAR_MIN, CHAR_MAX};
    printf("\n\t default:\n\t Size: 1 byte, Format: %%c, Range:%d to %d \n", charRange[0], charRange[1]);
    signed char signedCharRange[] = {SCHAR_MIN, SCHAR_MAX};
    printf("\n\t signed char:\n\t Size: 1 byte, Format: %%c, Range:%d to %d \n", signedCharRange[0], signedCharRange[1]);
    unsigned char unsignedCharRange[] = {0, UCHAR_MAX};
    printf("\n\t unsigned char:\n\t Size: 1 byte, Format: %%c, Range:%d to %d \n", unsignedCharRange[0], unsignedCharRange[1]);
    printf("\n\t string(array of chars):\n\t Size: 1 byte per char, Format: %%s \n");
    return;
}