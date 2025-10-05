#include <stdio.h>

int main() {
    // Declare and initialize variables for available food quantity and number of messes
    int avl_quantity_food = 0, mess_count = 0;

    // Read two integer values from user input
    scanf("%d %d", &avl_quantity_food, &mess_count);

    // Declare variables for division result and remainder
    int d = 0, r = 0;

    // Calculate how much food each gets
    d = avl_quantity_food / mess_count;

    // Calculate the leftover food
    r = avl_quantity_food % mess_count;

    // Print the distributed quantity and the remainder
    printf("%d %d", d, r);

    return 0;
}