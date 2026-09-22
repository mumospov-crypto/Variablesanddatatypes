//variable and data types

#include <stdio.h>

int main()
{
    // Declare variables
    char grade;
    char name[15];
    int age;
    float Pi;
    double budget;

    // Ask user for input
    printf("Enter your grade: ");
    scanf_s(" %c", &grade, (unsigned)sizeof(grade));
            
    printf("Enter your name: ");
    scanf_s("%14s", name, (unsigned)sizeof(name));

    printf("Enter your age: ");
    scanf_s("%d", &age);

    printf("Enter the value of Pi: ");
    scanf_s("%f", &Pi);

    printf("Enter your budget: ");
    scanf_s("%lf", &budget);

    // Display the information
    printf("\n--- Your Information ---\n");

    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Pi: %.2f\n", Pi);
    printf("Budget: %.2f\n", budget);

    return 0;
}