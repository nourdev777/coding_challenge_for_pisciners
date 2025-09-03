#include <stdio.h>
int main() {
    int arr[3] = {5, 10, 15};
    int i = 1, sum = 0;
    while (i < 3) {
        sum += arr[i];
        i++;
    }
    printf("%d", sum);
    return 0;
}

// Question: What will be printed on the screen?
// a) 30
// b) 15
// c) 5 10 15
// d) 25

// Answer: d) 25