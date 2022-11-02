#include <stdio.h>

void pointersInfo()
{
    printf("\n Pointers \n");
    printf("\n\t A pointer is a variable that stores the address of another variable. \n");
    printf("\n\t The address of a variable can be obtained using the & operator. \n");
    printf("\n\t The value of a pointer can be obtained using the * operator. \n");
    printf("\n\t The * operator is also used to declare a pointer. \n");
    printf("\n\t We use pointers to make the program more efficient, since the compiler doesn't need to find the address of the variable every time we use it. \n");
    printf("\n\t Here is an example: \n");
    int a = 10;
    int *p = &a;
    printf("\n\t int a = %d, *p = &a; \n", a);
    printf("\n\t The address of a is %p and the value of p is %p. \n", &a, p);
    printf("\n\t The value of a is %d and the value of *p is %d. \n", a, *p);
    printf("\n\t We can also change the value of a using the pointer. \n");
    *p = 20;
    printf("\n\t *p = 20; \n");
    printf("\n\t The value of a is now %d and the value of *p is %d. \n", a, *p);
}