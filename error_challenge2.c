// Dynamic Array Sorting

// Intended Functionality: The program dynamically allocates an array, reads 5 integers from the user, sorts them in ascending order using bubble sort, and prints the sorted array.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(5 * sizeof(int));
    int i = 0;
    while (i < 5) {
        scanf("%d", arr[i]);
        i++;
    }
    i = 0;
    while (i < 5) {
        int j = i + 1;
        while (j < 5) {
            if (arr[i] > arr[j]) {
                int temp = arr[i]
                arr[i] = arr[j];
                arr[j] = temp
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (i < 5) 
        printf("%d ", arr[i]);
        i++;
    }
    free(arr);
    return 0;
}

// Who can find the most mistakes?
// Errors:
// Missing error check for malloc failure (potential null pointer dereference).
// Missing & in scanf for reading into arr[i].
// Missing semicolon after int temp = arr[i] and arr[j] = temp.
// Missing opening brace in the final while loop.
// No newline in printf, causing output to run together.
// No validation for user input (e.g., non-integer input could cause undefined behavior).

// Correct Output (if fixed, assuming input 5 2 8 1 9): 1 2 5 8 9