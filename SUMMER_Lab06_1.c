//1037
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int min = 1000001;
    int max = 2;

    for (int i = 0; i < n; i++) {
        int divisor;
        scanf("%d", &divisor);

        if (divisor < min) {
            min = divisor;
        }
        if (divisor > max) {
            max = divisor;
        }
    }

    int N = min * max;
    printf("%d\n", N);

    return 0;
}