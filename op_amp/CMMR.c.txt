#include <stdio.h>
#include <math.h>

int main() {

    float CMRR, CMG, DOPLG, CMRR_dB;

    printf("Input CMG:\n");
    scanf("%f", &CMG);

    printf("Input DOPLG:\n");
    scanf("%f", &DOPLG);

    CMRR = DOPLG / CMG;
    CMRR_dB = 20 * log10(CMRR);

    printf("CMRR is: %f\n", CMRR);
    printf("CMRR_dB is: %f\n", CMRR_dB);

    return 0;
}