#include <stdio.h>

void main() {
    int A[3], C[3];
    scanf("%d %d %d %d %d %d", &A[0], &A[1], &A[2], &C[0], &C[1], &C[2]);

    int fair = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) continue;
            if ((A[i] > A[j] && C[i] <= C[j]) || (A[i] == A[j] && C[i] != C[j])) {
                fair = 0;
                break;
            }
        }
        if (!fair) break;
    }

    printf(fair ? "FAIR\n" : "NOT FAIR\n");
}