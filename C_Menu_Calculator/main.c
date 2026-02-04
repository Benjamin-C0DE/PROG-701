#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;
    int choice;

    printf("Enter the first number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
        } else if (choice == 2) {
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
        } else if (choice == 3) {
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
        } else if (choice == 4) {
            if (b == 0) {
                printf("Error: division by zero.\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            }
        } else if (choice == 5) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice. Exiting...\n");
            break;
        }
    }

    return 0;
}
