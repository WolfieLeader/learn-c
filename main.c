#include <stdio.h>
#include "./DataTypes/index.c"
#include "./Operators/index.c"
#include "./Structures/index.c"

int main(void)
{
    int topic = 0;
    int subject = 0;

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
        default:
            red();
            printf("Exiting...\n");
            reset();
            break;
        }
    } while (topic >= 1 || topic <= 3);
    return 0;
}