#include <stdio.h>

int main() {
    int size;

    // Ask the user how many numbers they want to enter
    printf("How many numbers will you enter? ");
    scanf("%d", &size);

    // Declare an array of floats with the given size
    float arr[size];

    // Fill the array using standard indexing
    for (int i = 0; i < size; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    // Initialize statistics
    float min = arr[0];
    float max = arr[0];
    float sum = 0;

    // Pointer-based traversal of the array
    for (float *ptr = arr; ptr < arr + size; ptr++) {
        float value = *ptr;   // dereference pointer

        sum += value;

        if (value < min) {
            min = value;
        }
        if (value > max) {
            max = value;
        }
    }

    // Compute average
    float average = sum / size;

    // Print results
    printf("\n--- Stats ---\n");
    printf("Minimum: %.2f\n", min);
    printf("Maximum: %.2f\n", max);
    printf("Average: %.2f\n", average);

    return 0;
}
