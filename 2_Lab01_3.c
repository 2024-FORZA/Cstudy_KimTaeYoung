#include <stdio.h>

int main(void) {
    int N;
    long long factorial = 1; // 큰 값을 저장하기 위해 long long 사용

    // 입력 받기
    scanf("%d", &N);

    // N! 계산
    for (int i = 1; i <= N; i++) {
        factorial *= i; // 각 숫자를 곱하기
    }

    // 결과 출력
    printf("%lld\n", factorial);

    return 0;
}