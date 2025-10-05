#include <stdio.h>

int main()
{
    // Declare and initialize two float variables
    float num1 = 0, num2 = 0;

    // Read two float values from user input
    scanf("%f", &num1);
    scanf("%f", &num2);

    // Explicitly cast float to double (not necessary, but shown here)
    double n1 = (double)num1;
    double n2 = (double)num2;

    // Print the double values using %lf format specifier
    printf("%lf\n", n1);
    printf("%lf\n", n2);

    return 0;
}