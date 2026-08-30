#include <stdio.h>
#include <math.h>

// Function declarations
void hypo(double a, double b);
void bas(double c, double b);
void heiht(double c, double a);

int main() {
    double a, b, c;
    
    printf("Enter value of base (or 0 if unknown): ");
    scanf("%lf", &a);
    printf("Enter value of height (or 0 if unknown): ");
    scanf("%lf", &b);
    printf("Enter value of hypotenuse (or 0 if unknown): ");
    scanf("%lf", &c);

    if (a != 0 && b != 0 && c == 0) {
        hypo(a, b);
    } 
    else if (a != 0 && b == 0 && c != 0) {
        bas(c, a);
    } 
    else if (a == 0 && b != 0 && c != 0) {
        heiht(c, b);
    } 
    else {
        printf("Invalid input. Retry.\n");
    }

    return 0;
}

// Function Definitions
void hypo(double a, double b) {
    double hypotenuse = sqrt(a * a + b * b);
    printf("The hypotenuse is: %.2lf\n", hypotenuse);
}

void bas(double c, double b) {
    if (c > b) {
        double base = sqrt(c * c - b * b);
        printf("The base is: %.2lf\n", base);
    } else {
        printf("Invalid triangle dimensions for base calculation.\n");
    }
}

void heiht(double c, double a) {
    if (c > a) {
        double height = sqrt(c * c - a * a);
        printf("The height is: %.2lf\n", height);
    } else {
        printf("Invalid triangle dimensions for height calculation.\n");
    }
}

