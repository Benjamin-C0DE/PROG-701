#include <stdio.h>
#include <string.h>

int main() {
    // Buffer for user input
    char str[200];

    // Ask the user for a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Create two pointers:
    // start -> first character
    // end   -> last character before '\0'
    char *start = str;
    char *end = str + strlen(str) - 1;

    // Reverse the string in-place using pointer swapping
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    // Output the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
