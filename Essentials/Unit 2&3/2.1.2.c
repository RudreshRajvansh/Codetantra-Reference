#include <stdio.h>

int main() {
    // Declare and initialize variable to store total number of pages
    int tp = 0;

    // Input Format:
    // Read a single integer representing the total number of pages to be printed
    scanf("%d", &tp);

    // Output Format:
    // Print the minimum number of sheets required
    // Each sheet can hold 2 pages, so divide by 2
    // If the number of pages is odd, one extra sheet is needed
    if (tp % 2 == 0) {
        printf("%d", tp / 2);
    } else {
        printf("%d", (tp / 2) + 1);
    }

    return 0;
}