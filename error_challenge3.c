// Count Unique Characters in String

// Intended Functionality: The program counts the number of unique lowercase letters in a string (e.g., "banana" has unique letters 'a', 'b', 'n', so count is 3) and prints the count.

#include <stdio.h>

int count_unique(char* strng) {
    int seen[26] = {0};
    int cnt = 0;
    int i = 0;
    while (strng[i] != '\0') {
        if (strng[i] >= 'a' && strng[i] <= 'z')
            seen[strng[i] - 'a'] = 1
        i++;
    }
    i = 0;
    while (i < 26)
        if (seen[i])
            cnt++;
        i++;
    }
    return cnt;
}
int main() {
    char text[] = "banana";
    printf("%d", countUnique(text))
    return 0
}

// Who can find the most mistakes?
// Errors:
// Incorrect function name in main: countUnique should be count_unique.
// Missing semicolon after seen[strng[i] - 'a'] = 1.
// Missing semicolon after printf("%d", countUnique(text)).
// Missing semicolon after return 0.
// Extra closing brace in count_unique after the second while loop.
// Using i++ instead of ++i in the second while loop (logical inefficiency, though not critical here).
// No check for empty or null strings in count_unique, risking runtime errors.
// Variable strng misspelled as string would be a common mistake; here, it’s intentionally awkward naming.
// No newline in printf, causing potential output formatting issues.

// Correct Output (if fixed): 3