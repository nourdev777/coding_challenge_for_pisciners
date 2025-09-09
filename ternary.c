#include <stdio.h>
int main() {
    int x = 5, y = 10;
    printf("%d\n", x > y ? x : y > x ? y : x+y);
    return 0;
}

// A) 5
// B) 10
// C) 15
// D) Undefined

// ✅ Answer: B (10) → x>y?x : (y>x?y : x+y) → y>x true → 10