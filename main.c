#include <stdio.h>
#include "./DataTypes/index.c"
#include "./Operators/index.c"
#include "./Structures/index.c"
#include "./Pointers/index.c"
#include "./Allocation/index.c"

int main(void)
{
    int topic = 0;

    red();
    bright();
    printf("Welcome To Learning C With C!\n");
    reset();
    do
    {
        printf("\nChoose which topic you would like to learn about:");
        green();
        printf("\n\t 1. Data Types");
        printf("\n\t 2. Operators");
        printf("\n\t 3. Structures");
        printf("\n\t 4. Pointers And Memory Addresses");
        printf("\n\t 5. Memory Allocation");
        reset();
        printf("\n\t To exit, enter any other number.");
        printf("\n Your choice: ");
        scanf("%d", &topic);

        switch (topic)
        {
        case 1:
            startDataTypesLesson();
            break;
        case 2:
            startOperatorsLesson();
            break;
        case 3:
            startStructuresLesson();
            break;
        case 4:
            startPointersLesson();
            break;
        case 5:
            startAllocationLesson();
            break;
        default:
            red();
            printf("Exiting...\n");
            reset();
            break;
        }
    } while (topic >= 1 && topic <= 5);
    return 0;
}