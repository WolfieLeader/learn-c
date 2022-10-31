#include <stdio.h>
#include "int.c"
#include "float.c"
#include "double.c"
#include "char.c"
#include "../output.c"

void startDataTypesLesson()
{
    int option = 0;
    do
    {
        printf("\nChoose which data type you would like to see the stats for:");
        green();
        printf("\n\t 1. int");
        printf("\n\t 2. float");
        printf("\n\t 3. double");
        printf("\n\t 4. char");
        reset();
        printf("\n\t To exit, enter any other number.");
        printf("\n Your choice: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            intInfo();
            break;
        case 2:
            floatInfo();
            break;
        case 3:
            doubleInfo();
            break;
        case 4:
            charInfo();
            break;
        default:
            red();
            printf("Going back to main...\n");
            reset();
            break;
        }
    } while (option >= 1 && option <= 4);
}