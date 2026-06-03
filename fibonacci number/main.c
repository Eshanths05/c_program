#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    long long a = 1, b = 2, c;

    // Print first two Fibonacci numbers
    if (n >= 1) printf("%lld", a);
    if (n >= 2) printf("%lld", b);

    // Print remaining Fibonacci numbers
    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%lld", c);
        a = b;
        b = c;
    }

    return 0;
}
