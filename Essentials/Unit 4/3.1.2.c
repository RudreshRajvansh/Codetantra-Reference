#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize variable to store the input number
    int N = 0;

    // Input Format:
    // Read a single integer from input
    scanf("%d", &N);

    // Convert the integer to a string to determine its digit count
    char str[25];
    sprintf(str, "%d", N);

    // Get the length of the string (number of digits)
    int l = strlen(str);

    // Output Format:
    // Print the earning category based on the number of digits
    if (l == 1) {
        printf("Insufficient Earning");
    } else if (l == 2) {
        printf("Very Low Earning");
    } else if (l == 3) {
        printf("Low Earning");
    } else if (l == 4) {
        printf("Sufficient Earning");
    } else if (l > 4) {
        printf("High Earning");
    }

    return 0;
}