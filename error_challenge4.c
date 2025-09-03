// Power of a Number

// Intended Functionality: The program calculates the power of a base number raised to an exponent (e.g., 2^5 = 32) using a function and prints the result.

#include <stdio.h>

int calc_power(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        result *= base
        --exp;
    }
    return result
}
int main() {
    int b = 2, e = 5;
    printf("%d", calc_pawer(b, e));
    return 0;
}

// Who can find the most mistakes?
// Errors:
// Incorrect function name in main: calc_pawer should be calc_power.
// Missing semicolon after result *= base.
// Missing semicolon after return result.
// Using --exp instead of exp-- (logical issue: pre-decrement could be confusing, though functionally equivalent here; included for sloppiness).
// No check for negative exponents, which could cause logical errors (e.g., exp < 0 leads to infinite loop or incorrect result).
// No newline in printf, causing output formatting issues.
// Variable names b and e are too short and unclear (poor naming practice).
// Missing validation for edge cases if base = 0 and exp = 0, which could produce incorrect results (e.g., 0^0 is undefined).

// Correct Output (if fixed): 32