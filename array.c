#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40};
    int *p = arr;
    printf("%d\n", *(p + 3));
    return 0;
}
// A) 20
// B) 30
// C) 40
// D) Garbage

// ✅ Answer: C (40)