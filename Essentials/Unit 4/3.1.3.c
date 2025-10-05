 #include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize variables for cost price and selling price
    int c = 0, s = 0;

    // Input Format:
    // First line: cost price
    // Second line: selling price
    scanf("%d\n%d", &c, &s);

    // Output Format:
    // If cost price is greater than selling price, it's a loss
    if (c > s) {
        printf("Loss: %d", c - s);
    }
    // If selling price is greater than cost price, it's a profit
    else if (s > c) {
        printf("Profit: %d", s - c);
    }
    // If both are equal, no profit or loss
    else if (s == c) {
        printf("No Profit No Loss");
    }

    return 0;
}
