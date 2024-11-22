#include <stdio.h>

// ���丮���� ���ϴ� �Լ�
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// ���� ��� ��� �Լ�
long long binomialCoefficient(int N, int K) {
    return factorial(N) / (factorial(K) * factorial(N - K));
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    // ���� ��� ��� �� ���
    printf("%lld\n", binomialCoefficient(N, K));

    return 0;
}
