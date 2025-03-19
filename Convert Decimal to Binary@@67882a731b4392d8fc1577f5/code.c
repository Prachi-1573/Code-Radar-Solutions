#include <stdio.h>

void decimalToBinary(int num) {
    int binary[32]; // To store binary representation
    int i = 0;

    // Process each bit using bitwise AND and right shift
    while (num > 0) {
        binary[i] = num & 1; // Extract the least significant bit
        num = num >> 1;       // Right shift the number
        i++;
    }

    // Print binary in reverse order
    
    if (i == 0) {
        printf("0"); // If number is 0, output should be 0
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }
    printf("\n");
}

int main() {
    int num;    
    scanf("%d", &num);
    decimalToBinary(num);
    return 0;
}