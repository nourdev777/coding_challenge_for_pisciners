#include <stdio.h>
int main() {
    int arr[3] = {1, 2, 3};
    int i = 0;
    while (i <= 3) {
        printf("%d ", arr[i]);
        i++;
    }
    return 0;
}

// Question: What is the error in the code?

// Answer: a) Loop condition i <= 3 causes array out of bounds