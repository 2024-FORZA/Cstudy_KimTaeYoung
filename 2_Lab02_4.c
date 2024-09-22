#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);

        if (num <= 1) {
            continue; // 1 이하의 수는 소수가 아님
        }

        bool is_prime = true;
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}