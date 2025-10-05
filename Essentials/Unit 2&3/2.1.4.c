#include <stdio.h>

int main() {
    // Declare and initialize variables for grid dimensions
    int n = 0, m = 0;

    // Input Format:
    // Read two space-separated integers representing the dimensions of the grid
    scanf("%d %d", &n, &m);

    // Compute the maximal possible score using the given formula
    // s = (n - 1) + (1 + 2 * (n - 1)) * (m - 1)
    int s = n - 1 + (1 + 2 * (n - 1)) * (m - 1);

    // Output Format:
    // Print the maximal score Bhushan can obtain
    printf("%d", s);

    return 0;
}