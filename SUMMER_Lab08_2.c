//11720
#include <stdio.h>

int main(void) {
    int N;
    scanf("%d\n", &N);

    char numbers[N];
    scanf("%s", numbers);

    int sum = 0;
    for (int i = 0; i < N; i++) {
        int digit = numbers[i] - '0';
        //printf("digit: %d\n", digit);
        sum += digit;
    }
    printf("%d\n", sum);
}