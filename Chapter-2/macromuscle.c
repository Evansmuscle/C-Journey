#include <stdio.h>

float inchToCentimeter(float);

int main(void) {
    float distInch;
    distInch = 30.0f;

    float distCentimeter;
    distCentimeter = inchToCentimeter(distInch);
    
    printf("The distance in inches is: %f\nThe distance in centimeters is: %f\n", distInch, distCentimeter);
    
    return 0;
}

float inchToCentimeter(float inch) {
    return inch * 2.54;
}