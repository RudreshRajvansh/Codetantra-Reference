#include <stdio.h>

int main() {
    // Declare and initialize an integer variable
    int n = 0;

    // Read an integer value from user input
    scanf("%d", &n);

    // Calculate total number of squares in the board.
    int total = (n * (n + 1) * (2 * n + 1)) / 6;

    // Print the result
    printf("%d", total);

    return 0;
}