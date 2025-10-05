 #include <stdio.h>

int main() {
    // Declare variables to store hexadecimal characters and their decimal equivalents
    char x, y;
    int n1, n2;

    // Input Format:
    // Read two hexadecimal characters separated by a space
    scanf("%c %c", &x, &y);

    // Long method: manually convert each character to its decimal value
    if (x == 'A') {
        n1 = 10;
    } else if (x == 'B') {
        n1 = 11;
    } else if (x == 'C') {
        n1 = 12;
    } else if (x == 'D') {
        n1 = 13;
    } else if (x == 'E') {
        n1 = 14;
    } else if (x == 'F') {
        n1 = 15;
    }

    if (y == 'A') {
        n2 = 10;
    } else if (y == 'B') {
        n2 = 11;
    } else if (y == 'C') {
        n2 = 12;
    } else if (y == 'D') {
        n2 = 13;
    } else if (y == 'E') {
        n2 = 14;
    } else if (y == 'F') {
        n2 = 15;
    }

    // Output Format:
    // Compare the two values and print the appropriate symbol
    if (n1 < n2) {
        printf("<");
    } else if (n1 > n2) {
        printf(">");
    } else {
        printf("=");
    }

    return 0;
}

/*
    🔹 Note: This is the long method using multiple if-else blocks.
    🔹 Short method: You can directly convert characters using ASCII math:
        int n1 = x - 'A' + 10;
        int n2 = y - 'A' + 10;
    This works because 'A' to 'F' are sequential in ASCII.
*/
