#include <stdio.h>
#include <float.h>

void floatInfo()
{
    printf("\n float \n");
    float floatRange[] = {FLT_MIN, FLT_MAX};
    printf("\n\t default:\n\t Size: 4 bytes, Format: %%f, Range:%.38f to %.0f \n", floatRange[0], floatRange[1]);
    return;
}