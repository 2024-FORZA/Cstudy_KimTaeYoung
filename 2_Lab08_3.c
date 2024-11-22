#include <stdio.h>

int main() {
    int A, B, V;

    // 입력 받기
    scanf("%d %d %d", &A, &B, &V);

    // 첫날을 제외하고 올라가는 거리는 V - A
    int remaining_distance = V - A;

    // 하루에 올라가는 거리는 A - B
    int daily_progress = A - B;

    // 일수 계산
    // 올림 처리: (remaining_distance + daily_progress - 1) / daily_progress
    int days = (remaining_distance + daily_progress - 1) / daily_progress + 1;

    // 결과 출력
    printf("%d\n", days);

    return 0;
}