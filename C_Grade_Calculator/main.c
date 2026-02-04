#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;

    printf("Enter a grade (1-100): ");
    scanf("%d", &grade);

    if (grade < 1 || grade > 100) {
        printf("Invalid grade.\n");
        return 0;
    }

    if (grade >= 90)
        printf("Letter grade: A\n");
    else if (grade >= 80)
        printf("Letter grade: B\n");
    else if (grade >= 70)
        printf("Letter grade: C\n");
    else if (grade >= 60)
        printf("Letter grade: D\n");
    else
        printf("Letter grade: F\n");

    return 0;

}
