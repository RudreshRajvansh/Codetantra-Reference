#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare and initialize variables to store speeds of Arav and Aaron
    int ar = 0, aa = 0;

    // Input Format:
    // First line: speed of Arav
    scanf("%d", &ar);

    // Second line: speed of Aaron
    scanf("%d", &aa);

    // Calculate the absolute difference between their speeds
    int d = abs(ar - aa);

    // Output Format:
    // Print the absolute difference in a single line
    printf("%d", d);

    return 0;
}