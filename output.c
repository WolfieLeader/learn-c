#include <stdio.h>

void red()
{
    printf("\x1b[31m");
}

void green()
{
    printf("\x1b[32m");
}

void yellow()
{
    printf("\x1b[33m");
}

void blue()
{
    printf("\x1b[34m");
}

void magenta()
{
    printf("\x1b[35m");
}

void cyan()
{
    printf("\x1b[36m");
}

void bright()
{
    printf("\x1b[1m");
}

void reset()
{
    printf("\x1b[0m");
}