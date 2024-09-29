#include <stdio.h>

int main() {
    int N, original, count = 0;
    scanf("%d", &N);

    original = N; // 원래의 N 저장

    do {
        int tens = N / 10; // 10의 자리
        int ones = N % 10; // 1의 자리
        int sum = tens + ones; // 자리 수 합

        N = (ones * 10) + (sum % 10); // 새로운 N 생성
        count++; // 사이클 카운트 증가
    } while (N != original); // 원래 N과 같아질 때까지 반복

    printf("%d\n", count); // 사이클 길이 출력
    return 0;
}