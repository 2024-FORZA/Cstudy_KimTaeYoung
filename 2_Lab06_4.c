#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int n = 1; // 대각선 번호
    int sum = 0; // 대각선까지의 분수 개수

    // X가 포함된 대각선을 찾기
    while (sum + n < X) {
        sum += n; // 현재 대각선의 분수 개수 추가
        n++; // 다음 대각선으로 이동
    }

    // X번째 분수의 위치 계산
    int position = X - sum; // 현재 대각선에서 X까지의 위치
    if (n % 2 == 0) {
        // 짝수 대각선 (아래에서 위로)
        printf("%d/%d\n", position, n - position + 1);
    }
    else {
        // 홀수 대각선 (위에서 아래로)
        printf("%d/%d\n", n - position + 1, position);
    }

    return 0;
}
