#include <stdio.h>

int main() {
    // Declare and initialize variable to store total delay in minutes
    int tot_mins = 0;

    // Input Format:
    // Read a single integer representing the total delay of the train in minutes
    scanf("%d", &tot_mins);

    // Convert total minutes into hours and remaining minutes
    int h = tot_mins / 60;
    tot_mins = tot_mins % 60;

    // Output Format:
    // Print the delay in the format: "<Hours> Hours and <Minutes> Minutes"
    printf("%d Hours and %d Minutes", h, tot_mins);

    return 0;
}