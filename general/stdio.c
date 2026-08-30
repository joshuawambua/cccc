
/*stdio.h Library (C)

Handles input and output functions.

Key functions: printf(), scanf(), fgets(), fputs(), fopen(), fclose()

Example:*/

#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("You entered: %d\n", x);
}