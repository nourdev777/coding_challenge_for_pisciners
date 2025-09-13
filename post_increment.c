#include <stdio.h>
int main() {
    int i = 5;
    printf("%d\n", i);
    printf("%d\n", i++);
    printf("%d\n", ++i);
    return 0;
}


// A) 5 5 7
// B) 5 6 7
// C) Undefined behavior
// D) 5 6 6

// ✅ Answer: C (Undefined behavior) → Because modifying i more than once between sequence points = UB