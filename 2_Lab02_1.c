#include <stdio.h>

int main(void) {
    int n, sum = 0;
    int digit;

    // 다섯 자리 정수를 입력받음
    scanf("%d", &n);

    // 각 자릿수를 추출하여 5제곱한 후 합산
    for (int i = 0; i < 5; i++) {
        digit = n % 10;          // 마지막 자릿수를 추출
        // 다섯 제곱을 직접 계산 (digit * digit * digit * digit * digit)
        sum += digit * digit * digit * digit * digit;
        n /= 10;                 // 다음 자릿수를 처리하기 위해 n을 10으로 나눔
    }

    // 결과 출력
    printf("%d\n", sum);

    return 0;
}