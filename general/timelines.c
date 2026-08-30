#include <stdio.h>

int main() {
    int year;
    
    // Ask the user for input
    printf("Welcome, Time Traveler!\n");
    printf("Enter the number of years you wish to explore: ");
    scanf("%d", &year);

    // Calculations
    int months  = year * 12;
    int weeks   = year * 52;
    int days    = year * 365;
    int hours   = days * 24;
    int minutes = hours * 60;
    long long seconds = (long long) minutes * 60; // use long long for large values

    // Flowery Output
    printf("\nIn %d year(s), the universe grants you:\n", year);
    printf("%d months of opportunities,\n", months);
    printf("%d weeks of adventures,\n", weeks);
    printf("%d days to live under the sun,\n", days);
    printf("%d hours to dream and build,\n", hours);
    printf("%d minutes filled with choices and chances,\n", minutes);
    printf("%lld seconds — each a spark of possibility.\n", seconds);

    printf("\nTime is precious — use it wisely!\n");

    return 0;
}