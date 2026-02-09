#include <stdio.h>
#include <stdint.h>

int main() {
    uint64_t dividend = 99;
    uint64_t divisor = 3;
    uint64_t quotient = 0;
    uint64_t remainder = dividend;

    while (remainder >= divisor) {
        remainder -= divisor;
        quotient += 1;
    }

    printf("Quotient: %llu\n", quotient);

    return quotient;
}
