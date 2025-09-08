#include <stdio.h>
int main() {
    char str[] = "Hello";
    printf("%c\n", *str + 2);
    return 0;
}

// A) H
// B) J
// C) L
// D) Garbage

// ✅ Answer: B (J) → 'H' = 72, +2 = 74 → 'J'