#include <stdio.h>

// 팩토리얼을 구하는 함수
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// 이항 계수 계산 함수
long long binomialCoefficient(int N, int K) {
    return factorial(N) / (factorial(K) * factorial(N - K));
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    // 이항 계수 계산 후 출력
    printf("%lld\n", binomialCoefficient(N, K));

    return 0;
}
