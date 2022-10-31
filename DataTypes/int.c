#include <stdio.h>
#include <limits.h>

void intInfo()
{
    printf("\n int \n");
    int intRange[] = {INT_MIN, INT_MAX};
    printf("\n\t default:\n\t Size: 2-4 bytes, Format: %%d, Range:%d to %d \n", intRange[0], intRange[1]);
    short int shortIntRange[] = {SHRT_MIN, SHRT_MAX};
    printf("\n\t short int:\n\t Size: 2 bytes, Format: %%hd, Range:%d to %d \n", shortIntRange[0], shortIntRange[1]);
    long int longIntRange[] = {LONG_MIN, LONG_MAX};
    printf("\n\t long int:\n\t Size: 4-8 bytes, Format: %%ld, Range:%ld to %ld \n", longIntRange[0], longIntRange[1]);
    long long int longLongIntRange[] = {LLONG_MIN, LLONG_MAX};
    printf("\n\t long long int:\n\t Size: 8 bytes, Format: %%lld, Range:%lld to %lld \n", longLongIntRange[0], longLongIntRange[1]);
    unsigned int unsignedIntRange[] = {0, UINT_MAX};
    printf("\n\t unsigned int:\n\t Size: 2-4 bytes, Format: %%u, Range:%u to %u \n", unsignedIntRange[0], unsignedIntRange[1]);
    unsigned short int unsignedShortIntRange[] = {0, USHRT_MAX};
    printf("\n\t unsigned short int:\n\t Size: 2 bytes, Format: %%hu, Range:%hu to %hu \n", unsignedShortIntRange[0], unsignedShortIntRange[1]);
    unsigned long int unsignedLongIntRange[] = {0, ULONG_MAX};
    printf("\n\t unsigned long int:\n\t Size: 4-8 bytes, Format: %%lu, Range:%lu to %lu \n", unsignedLongIntRange[0], unsignedLongIntRange[1]);
    unsigned long long int unsignedLongLongIntRange[] = {0, ULLONG_MAX};
    printf("\n\t unsigned long long int:\n\t Size: 8 bytes, Format: %%llu, Range:%llu to %llu \n", unsignedLongLongIntRange[0], unsignedLongLongIntRange[1]);
    return;
}