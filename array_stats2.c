#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// ---------------------------------------------------------
// read_numbers
// Asks user for how many numbers, allocates array on heap,
// fills it, and returns pointer. Size is returned via out_size.
// ---------------------------------------------------------
double* read_numbers(int *out_size) {
    printf("How many numbers will you enter? ");
    scanf("%d", out_size);

    double *arr = malloc(*out_size * sizeof(double));
    assert(arr != NULL);

    for (int i = 0; i < *out_size; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &arr[i]);
    }

    return arr;
}

// ---------------------------------------------------------
// get_stats
// Computes min, max, and average using pointers.
// ---------------------------------------------------------
void get_stats(double *arr, int size, double *out_min, double *out_max, double *out_avg) {
    *out_min = arr[0];
    *out_max = arr[0];

    double sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < *out_min) *out_min = arr[i];
        if (arr[i] > *out_max) *out_max = arr[i];
        sum += arr[i];
    }

    *out_avg = sum / size;
}

int main() {
    int size = 0;
    double min = 0, max = 0, avg = 0;

    double *nums = read_numbers(&size);

    get_stats(nums, size, &min, &max, &avg);

    printf("--- Stats ---\n");
    printf("Minimum: %.2f\n", min);
    printf("Maximum: %.2f\n", max);
    printf("Average: %.2f\n", avg);

    free(nums);
    return 0;
}
