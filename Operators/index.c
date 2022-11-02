
#include <stdio.h>
#include "arithmetic.c"
#include "incrementDecrement.c"
#include "assignment.c"
#include "relational.c"
#include "logical.c"
#include "bitwise.c"

void startOperatorsLesson()
{
    int option = 0;
    do
    {
        printf("\nChoose which operator you would like to get more explanation:");
        green();
        printf("\n\t 1. Arithmetic Operators");
        printf("\n\t 2. Increment and Decrement");
        printf("\n\t 3. Assignment Operators");
        printf("\n\t 4. Relational Operators");
        printf("\n\t 5. Logical Operators");
        printf("\n\t 6. Bitwise Operators");
        reset();
        printf("\n\t To exit, enter any other number.");
        printf("\n Your choice: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            arithmeticInfo();
            break;
        case 2:
            incrementDecrementInfo();
            break;
        case 3:
            assignmentInfo();
            break;
        case 4:
            relationalInfo();
            break;
        case 5:
            logicalInfo();
            break;
        case 6:
            bitwiseInfo();
            break;
        default:
            red();
            printf("Going back to main...\n");
            reset();
            break;
        }
    } while (option >= 1 && option <= 6);
}
