#include <stdio.h>
#include <float.h>

void doubleInfo()
{
    printf("\n double \n");
    double doubleRange[] = {DBL_MIN, DBL_MAX};
    printf("\n\t default:\n\t Size: 8 bytes, Format: %%f, Range:1.7E to 308 to 1.7E+308 \n");
    long double longDoubleRange[] = {LDBL_MIN, LDBL_MAX};
    printf("\n\t long double:\n\t Size: 8-16 bytes, Format: %%Lf, Range:3.4E to 4932 to 1.1E+4932 \n");
    return;
}