 #include <stdio.h>

int main() {
    // Declare and initialize variable to store number of rows
    int n = 0;

    // Input Format:
    // Read a single integer representing the total number of rows for the concert
    scanf("%d", &n);

    // Initialize a temporary variable to track the current row value
    int t = n;

    // Loop through each row from 1 to n
    for (int j = 1; j <= n; j++) {
        // Print the value 't' exactly 't' times in the current row
        for (int i = t; i != 0; i--) {
            printf("%d ", t);
        }

        // Move to the next row and decrease the value of 't'
        t--;

        // Print newline after each row
        printf("\n");
    }

    return 0;
}
