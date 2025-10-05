#include <stdio.h>

int main() {
    // Declare and initialize two float variables
    float var1 = 0, var2 = 0;

    // Read two float values from user input
    scanf("%f %f", &var1, &var2);

    // Multiply the two float values
    float mul = var1 * var2;

    // Print the result with 4 digits after the decimal point
    printf("%0.4f", mul);

    return 0;
}