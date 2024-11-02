#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int sequence[1000]; // 최대 1000개의 숫자를 저장할 배열
    int index = 0;      // 배열의 현재 인덱스

    // 수열 생성
    for (int num = 1; index < 1000; num++) {
        for (int count = 0; count < num; count++) {
            if (index < 1000) {
                sequence[index++] = num; // 숫자를 배열에 추가
            }
        }
    }

    // 구간 A부터 B까지의 합 계산
    int sum = 0;
    for (int i = A - 1; i < B; i++) {
        sum += sequence[i]; // A부터 B까지의 숫자를 더함
    }

    printf("%d\n", sum); // 결과 출력
    return 0;
}
