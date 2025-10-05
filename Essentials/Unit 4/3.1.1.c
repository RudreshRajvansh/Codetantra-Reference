 #include <stdio.h>

int main() {
    // Declare and initialize three integer variables
    int A = 0, B = 0, C = 0;

    // Input Format:
    // Read three space-separated integers
    scanf("%d %d %d", &A, &B, &C);

    // Output Format:
    // A "poor" triple is defined as exactly two values being equal and the third being different
    if (A == B && B != C) {
        printf("Yes");
    } else if (A == C && B != A) {
        printf("Yes");
    } else if (C == B && B != A) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}