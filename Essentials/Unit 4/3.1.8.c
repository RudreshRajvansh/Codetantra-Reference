#include <stdio.h>

int main() {
    // Declare and initialize variable to store number of rows
    int n = 0;

    // Input Format:
    // Read a single integer representing the total number of rows in the theatre
    scanf("%d", &n);

    // Loop through each row from 1 to n
    for (int i = 1; i <= n; i++) {
        // If the row number is odd, print odd numbers up to 2*i
        if (i % 2 != 0) {
            for (int j = 1; j <= 2 * i; j++) {
                if (j % 2 != 0) {
                    printf("%d ", j);
                }
            }
        }
        // If the row number is even, print even numbers up to 2*i
        else {
            for (int j = 1; j <= 2 * i; j++) {
                if (j % 2 == 0) {
                    printf("%d ", j);
                }
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}