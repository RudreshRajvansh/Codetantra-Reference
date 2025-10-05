 #include <stdio.h>

int main() {
    // Declare and initialize variables
    float N = 0;
    float count = 0;

    // Input Format:
    // Read a single integer representing the upper bound of the range
    scanf("%f", &N);

    // Count how many numbers from 1 to N are odd
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            count++;
        }
    }

    // Calculate the probability that a number from 1 to N is odd
    float a = count / N;

    // Output Format:
    // Print the probability formatted to 5 decimal places
    printf("%.5f\n", a);

    return 0;
}