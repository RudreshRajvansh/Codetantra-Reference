#include <stdio.h>

int main() {
    // Declare and initialize variables for health and attack power
    int ha = 0, aa = 0, hb = 0, ab = 0;

    // Input Format:
    // Read four space-separated integers:
    // H1: Health of Alex's monster
    // A1: Attack Power of Alex's monster
    // H2: Health of Ben's monster
    // A2: Attack Power of Ben's monster
    scanf("%d %d %d %d", &ha, &aa, &hb, &ab);

    // Game Rules:
    // Battle proceeds in turns: Alex attacks first, then Ben
    while (ha > 0 && hb > 0) {
        // Alex's Turn: reduce Ben's monster's health
        hb -= aa;

        // Ben's Turn: reduce Alex's monster's health (only if Ben is still alive)
        ha -= ab;
    }

    // Output Format:
    // Print "Yes" if Alex's monster wins, otherwise "No"
    if (hb <= 0) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}