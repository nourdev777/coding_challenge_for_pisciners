#include <stdio.h>
int main() {
    int arr[10];
    int *p = arr;
    printf("%zu %zu\n", sizeof(arr), sizeof(p));
    return 0;
}

// A) 40 40
// B) 10 10
// C) 40 8
// D) 8 40

// ✅ Answer: C (40 8) → On 64-bit, array = 10*4 = 40, pointer = 8