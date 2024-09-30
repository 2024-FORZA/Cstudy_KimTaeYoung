#include <stdio.h>

int main() {
    long long N; // 최대 입력값을 고려하여 long long 사용
    scanf("%lld", &N);

    long long time = 0;
    long long current_birds = N;
    long long K = 1;

    while (current_birds > 0) {
        if (current_birds >= K) {
            current_birds -= K; // K 마리의 새가 날아감
            time++; // 시간 증가
            K++; // K를 1 증가
        }
        else {
            K = 1; // K를 1로 초기화
        }
    }

    printf("%lld\n", time); // 결과 출력
    return 0;
}