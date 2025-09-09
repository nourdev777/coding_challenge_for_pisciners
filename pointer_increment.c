#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4};
    int *p = arr;
    printf("%d\n", *++p);
    return 0;
}

// A) 1
// B) 2
// C) 3
// D) Undefined

// ✅ Answer: B (2) → ++p → now points to arr[1], dereference = 2