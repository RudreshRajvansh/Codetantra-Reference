 #include <stdio.h>

int main() {
    // Declare and initialize variable to store number of rows
    int n = 0;

    // Input Format:
    // Read a single integer representing the number of rows
    scanf("%d", &n);

    // Loop through each row from 1 to n
    for (int i = 1; i <= n; i++) {
        // If the row number is odd, print "Pass" for each column
        if (i % 2 != 0) {
            for (int j = 1; j <= i; j++) {
                printf("Pass ");
            }
        }
        // If the row number is even, print "Fail" for each column
        else {
            for (int j = 1; j <= i; j++) {
                printf("Fail ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}