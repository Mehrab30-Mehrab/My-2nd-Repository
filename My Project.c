#include <stdio.h>

int main() {
    int a, b, c, d;
    int count = 0;

    // Input
    printf("Enter 4 integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Start with 1 (a is always unique at first)
    count = 1;

    // b compared to a
    if (b != a) {
        count = count + 1;
    }

    // c compared to a and b
    if (c != a && c != b) {
        count = count + 1;
    }

    // d compared to a, b, and c
    if (d != a && d != b && d != c) {
        count = count + 1;
    }

    printf("Number of distinct values: %d\n", count);

    return 0;
}
