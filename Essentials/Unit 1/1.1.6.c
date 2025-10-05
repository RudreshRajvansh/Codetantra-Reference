#include <math.h>
#include <stdio.h>

int main() {
    // Declare variables for radius and volume
    float radius, volume;

    // Define the value of pi as a constant
    const float pi = 3.14;

    // Read the radius value from user input
    scanf("%f", &radius);

    // Calculate the volume of the sphere using the formula: (4/3) * π * r³
    volume = ((4.0 / 3.0) * pi * (radius * radius * radius));

    // Round the volume to 6 decimal places
    volume = round(volume * 1e6) / 1e6;

    // Print the volume with 6 digits after the decimal point
    printf("%.6f\n", volume);

    return 0;
}