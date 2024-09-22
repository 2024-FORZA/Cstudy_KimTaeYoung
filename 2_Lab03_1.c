#include <stdio.h>

int main() {
    int N; // 손님의 수
    int seats[101] = { 0 }; // 1번부터 100번 자리 (0: 비어있음, 1: 차 있음)
    int rejected_count = 0; // 거절당한 사람의 수

    // 손님의 수 입력
    scanf("%d", &N);

    // 각 손님이 앉고 싶어하는 자리 입력
    for (int i = 0; i < N; i++) {
        int desired_seat;
        scanf("%d", &desired_seat);

        // 원하는 자리에 사람이 있는지 확인
        if (seats[desired_seat] == 0) {
            // 자리가 비어있으면 앉음
            seats[desired_seat] = 1; // 자리를 차지함
        }
        else {
            // 자리가 차 있으면 거절
            rejected_count++;
        }
    }

    // 거절당한 사람의 수 출력
    printf("%d\n", rejected_count);

    return 0; // 프로그램 종료
}