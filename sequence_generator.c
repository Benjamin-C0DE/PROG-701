#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// ---------------------------------------------------------
// generate_sequence
// Creates an integer sequence on the heap.
// start = first number
// count = number of values
// by    = difference between values (positive or negative)
// ---------------------------------------------------------
int* generate_sequence(int start, int count, int by) {
    int *arr = malloc(count * sizeof(int));
    assert(arr != NULL);

    for (int i = 0; i < count; i++) {
        arr[i] = start + (i * by);
    }

    return arr;
}

int main() {
    int start, count, by;

    printf("What number do you want to start at? ");
    scanf("%d", &start);

    printf("How many values do you want? ");
    scanf("%d", &count);

    printf("How much to increase by? ");
    scanf("%d", &by);

    int *seq = generate_sequence(start, count, by);

    printf("Array created.\n");

    for (int i = 0; i < count; i++) {
        printf("%d", seq[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }
    printf("\n");

    free(seq);

    return 0;
}
