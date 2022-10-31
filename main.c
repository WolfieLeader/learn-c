#include <stdio.h>
#include "./DataTypes/index.c"
#include "./Operators/index.c"

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
        default:
            red();
            printf("Exiting...\n");
            reset();
            break;
        }
    } while (topic == 1 || topic == 2);
    return 0;
}