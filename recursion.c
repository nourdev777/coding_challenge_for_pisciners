#include <stdio.h>
int fun(int n) {
    if(n == 0) return 1;
    return n * fun(n-1);
}

int main() {
    printf("%d\n", fun(4));
    return 0;
}

// A) 24
// B) 120
// C) 4
// D) 16

// ✅ Answer: A (24) → Factorial of 4