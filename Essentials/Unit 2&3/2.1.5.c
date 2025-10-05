#include <stdio.h>

int main() {
    // Declare and initialize variables to store sizes of three apples
    int apple1 = 0, apple2 = 0, apple3 = 0;

    // Input Format:
    // First line: size of apple1
    scanf("%d", &apple1);

    // Second line: size of apple2
    scanf("%d", &apple2);

    // Third line: size of apple3
    scanf("%d", &apple3);

    // Check if apple sizes are strictly increasing
    if (apple2 > apple1 && apple3 > apple2) {
        // Output Format:
        // If condition is met, print "Fit into Budget"
        printf("Fit into Budget");
    } else {
        // Otherwise, print "Doesn't fit into Budget"
        printf("Doesn't fit into Budget");
    }

    return 0;
}