#include <stdio.h>

int main() {
    // Declare and initialize variables to store the heights of the three brothers
    int bro1 = 0, bro2 = 0, bro3 = 0;

    // Input Format:
    // Read three integers separated by space representing the heights of the brothers
    scanf("%d %d %d", &bro1, &bro2, &bro3);

    // Initialize 'tall' with the height of the first brother
    int tall = bro1;

    // Compare with the second brother's height
    if (bro2 > tall)
        tall = bro2;

    // Compare with the third brother's height
    if (bro3 > tall)
        tall = bro3;

    // Output Format:
    // Print the height of the tallest brother
    printf("%d\n", tall);

    return 0;
}