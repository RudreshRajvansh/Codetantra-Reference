#include <stdio.h>

int main() {
    // Declare and initialize two float variables
    float var1 = 0, var2 = 0;

    // Read two float values from user input
    scanf("%f", &var1);
    scanf("%f", &var2);

    // Print the sum of the two float values with 3 digits after the decimal point
    printf("%0.3f", var1 + var2);

    return 0;
}