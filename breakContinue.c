#include <stdio.h>

int main() {
    // Iterate from 1 to 10 using a for loop
    for (int i = 1; i <= 10; i++) {
        if (i == 2) {
            printf("Number is 2: %d\n", i);
            continue; // Skip to the next iteration without executing the rest of the loop body
        }

        if (i == 4) {
            printf("Number is 4: %d\n", i);
            break; // Exit the loop if the current number is 4
        }

        // Print the current number
        printf("Number: %d\n", i);
    }

    return 0;
}
