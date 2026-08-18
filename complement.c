#include <stdio.h>

int main() {
    short positiveShort = 42;    // Positive short 0x002A
    short negativeShort = -42;   // Negative short 0xFFD6

    // Print the short values in decimal format
    printf("Positive short: %hd\n", positiveShort);
    printf("Negative short: %hd\n", negativeShort);

    // Print the short values in hexadecimal format
    printf("Hexadecimal representation of positive short (42): %04hx\n", positiveShort);
    printf("Hexadecimal representation of negative short (-42): %04hx\n", negativeShort);

    return 0;
}