 #include <stdio.h>

int main() {
    // Declare and initialize variables
    int n = 0, m = 0, k = 0;

    // Input Format:
    // Read three space-separated integers:
    // n - number of Avocados
    // m - number of Dragon fruits
    // k - number of gold coins Caleb has
    scanf("%d %d %d", &n, &m, &k);

    // Use gold coins to balance the counts of Avocados and Dragon fruits
    while (k > 0) {
        if (n < m) {
            n++; // Increase Avocados
        } else if (n == m) {
            break; // Already balanced
        } else {
            m++; // Increase Dragon fruits
        }
        k--; // Spend one coin
    }

    // Output Format:
    // Print the minimum possible difference followed by a newline
    printf("%d\n", n - m);
}