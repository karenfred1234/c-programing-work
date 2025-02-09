#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Function to convert binary to decimal
long binaryToDecimal(const char *binary) {
    long decimal = 0;
    int length = strlen(binary);

    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        } else if (binary[i] != '0') {
            fprintf(stderr, "Error: Invalid binary number '%s'\n", binary);
            exit(EXIT_FAILURE);
        }
    }
    return decimal;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <binary_number>\n", argv[0]);
        return 1;
    }

    const char *binary = argv[1];
    
    // Convert binary to decimal
    long decimal = binaryToDecimal(binary);

    // Print hexadecimal representation
    printf("Hexadecimal: %lX\n", decimal);

    return 0;
}