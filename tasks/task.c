#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])

{
    int num1, num2;

    // Presence check
    if (argc != 3)
    {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 0;
    }

    // Convert the arguments to integers if they are digits
    if (isdigit(*argv[1]) || isdigit(*argv[2]))
    {
        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);
    }
    else
    {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 0;
    }

    // Prompt the user for input
    // printf("Enter the first number: ");
    // scanf("%d", &num1);

    // printf("Enter the second number: ");
    // scanf("%d", &num2);

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
