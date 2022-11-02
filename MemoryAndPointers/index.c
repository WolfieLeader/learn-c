
#include <stdio.h>
#include "memory.c"
#include "pointers.c"

void startMemoryAndPointersLesson()
{
    int option = 0;
    do
    {
        printf("\nChoose which subject you would like to get more explanation:");
        green();
        printf("\n\t 1. Memory Addresses");
        printf("\n\t 2. Pointers");
        reset();
        printf("\n\t To exit, enter any other number.");
        printf("\n Your choice: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            memoryInfo();
            break;
        case 2:
            pointersInfo();
            break;
        default:
            red();
            printf("Going back to main...\n");
            reset();
            break;
        }
    } while (option >= 1 && option <= 2);
}