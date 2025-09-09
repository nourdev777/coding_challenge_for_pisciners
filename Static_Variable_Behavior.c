#include <stdio.h>
void func() {
    static int x = 0;
    x++;
    printf("%d ", x);
}
int main() {
    for(int i = 0; i < 3; i++) func();
    return 0;
}
// A) 1 1 1
// B) 1 2 3
// C) 0 1 2
// D) Garbage

// ✅ Answer: B) (1 2 3)