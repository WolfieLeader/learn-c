
#include <stdio.h>
#include <string.h>

void startStructuresLesson()
{
    struct Employee
    {
        char name[30];
        int age;
        float salary;
    };
    printf("\n Structures \n");
    printf("\n\t We can use structures to store data of different types in a single variable. \n");
    printf("\n\t In the following example, we create a structure called Employee. \n");
    printf("\n\t Each employee has a name, age and salary. \n");
    struct Employee employee1;
    strcpy(employee1.name, "John");
    employee1.age = 30;
    employee1.salary = 1520.30;
    printf("\n\t Here is a new employee \n");
    printf("\n\t Name: %s \n", employee1.name);
    printf("\n\t Age: %d \n", employee1.age);
    printf("\n\t Salary: %.2f \n", employee1.salary);
    struct Employee employee2 = {"Mary", 22, 2123.23};
    printf("\n\t Here is another employee \n");
    printf("\n\t Name: %s \n", employee2.name);
    printf("\n\t Age: %d \n", employee2.age);
    printf("\n\t Salary: %.2f \n", employee2.salary);
}