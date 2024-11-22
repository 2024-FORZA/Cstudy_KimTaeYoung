#include <stdio.h>
#include <math.h>

int main() {
    long long N;
    scanf("%lld", &N);

    // 제곱수의 개수는 sqrt(N)입니다.
    printf("%lld\n", (long long)sqrt(N));

    return 0;
}
