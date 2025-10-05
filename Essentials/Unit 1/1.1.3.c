#include <stdio.h>

int main() {
    // Declare and initialize two integer variables
    int var1 = 0, var2 = 0;

    // Read two integer values from user input
    scanf("%d", &var1);
    scanf("%d", &var2);

    // Print the result of integer division
    printf("%d\n", var1 / var2);

    // Print the remainder of the division
    printf("%d", var1 % var2);

    return 0;
}